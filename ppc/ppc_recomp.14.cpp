#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8212E8A8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8212e8b8
	if (!ctx.cr6.eq) goto loc_8212E8B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8212E8B8:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r9,-32200
	ctx.r11.s64 = ctx.r9.s64 + -32200;
	// mulli r10,r3,3368
	ctx.r10.s64 = ctx.r3.s64 * 3368;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,292
	ctx.r7.s64 = ctx.r11.s64 + 292;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212E8A8) {
	__imp__sub_8212E8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8212E8E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212ea18
	if (ctx.cr6.eq) goto loc_8212EA18;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212ea18
	if (ctx.cr6.eq) goto loc_8212EA18;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ea1c
	if (ctx.cr6.eq) goto loc_8212EA1C;
	// cmpwi cr6,r3,48
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 48, ctx.xer);
	// bne cr6,0x8212e9e4
	if (!ctx.cr6.eq) goto loc_8212E9E4;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x8212e9e4
	if (!ctx.cr6.eq) goto loc_8212E9E4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8212E92C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212e92c
	if (!ctx.cr6.eq) goto loc_8212E92C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8212e9e4
	if (!ctx.cr6.eq) goto loc_8212E9E4;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7d78
	ctx.lr = 0x8212E960;
	sub_822E7D78(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212e974
	if (ctx.cr6.eq) goto loc_8212E974;
	// addi r29,r31,-48
	ctx.r29.s64 = ctx.r31.s64 + -48;
	// b 0x8212e98c
	goto loc_8212E98C;
loc_8212E974:
	// cmpwi cr6,r31,97
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 97, ctx.xer);
	// blt cr6,0x8212e988
	if (ctx.cr6.lt) goto loc_8212E988;
	// cmpwi cr6,r31,102
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 102, ctx.xer);
	// addi r29,r31,-87
	ctx.r29.s64 = ctx.r31.s64 + -87;
	// ble cr6,0x8212e98c
	if (!ctx.cr6.gt) goto loc_8212E98C;
loc_8212E988:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8212E98C:
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7d78
	ctx.lr = 0x8212E99C;
	sub_822E7D78(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212e9bc
	if (ctx.cr6.eq) goto loc_8212E9BC;
	// addi r11,r31,-48
	ctx.r11.s64 = ctx.r31.s64 + -48;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212E9BC:
	// cmpwi cr6,r31,97
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 97, ctx.xer);
	// blt cr6,0x8212e9d0
	if (ctx.cr6.lt) goto loc_8212E9D0;
	// cmpwi cr6,r31,102
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 102, ctx.xer);
	// addi r11,r31,-87
	ctx.r11.s64 = ctx.r31.s64 + -87;
	// ble cr6,0x8212e9d4
	if (!ctx.cr6.gt) goto loc_8212E9D4;
loc_8212E9D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212E9D4:
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212E9E4:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r31,r11,1544
	ctx.r31.s64 = ctx.r11.s64 + 1544;
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212ea18
	if (ctx.cr6.eq) goto loc_8212EA18;
loc_8212E9F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x8212EA04;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212ea24
	if (ctx.cr6.eq) goto loc_8212EA24;
	// lwzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212e9f8
	if (!ctx.cr6.eq) goto loc_8212E9F8;
loc_8212EA18:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8212EA1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212EA24:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212E8E0) {
	__imp__sub_8212E8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EA30) {
	PPC_FUNC_PROLOGUE();
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8212ea44
	if (ctx.cr6.lt) goto loc_8212EA44;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x8212ea64
	if (!ctx.cr6.gt) goto loc_8212EA64;
loc_8212EA44:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// blt cr6,0x8212ea54
	if (ctx.cr6.lt) goto loc_8212EA54;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// ble cr6,0x8212ea64
	if (!ctx.cr6.gt) goto loc_8212EA64;
loc_8212EA54:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x8212ea70
	if (ctx.cr6.lt) goto loc_8212EA70;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8212ea70
	if (ctx.cr6.gt) goto loc_8212EA70;
loc_8212EA64:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8212EA70:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212EA30) {
	__imp__sub_8212EA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212EA7C) {
	__imp__sub_8212EA7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8212EA88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8212eaac
	if (!ctx.cr6.eq) goto loc_8212EAAC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-6332
	ctx.r3.s64 = ctx.r11.s64 + -6332;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212EAAC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8212ec1c
	if (ctx.cr6.lt) goto loc_8212EC1C;
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// bgt cr6,0x8212ec1c
	if (ctx.cr6.gt) goto loc_8212EC1C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8212eafc
	if (ctx.cr6.eq) goto loc_8212EAFC;
	// bl 0x822b6d68
	ctx.lr = 0x8212EAC8;
	sub_822B6D68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8212eafc
	if (!ctx.cr6.eq) goto loc_8212EAFC;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// blt cr6,0x8212eafc
	if (ctx.cr6.lt) goto loc_8212EAFC;
	// cmpwi cr6,r31,57
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 57, ctx.xer);
	// bgt cr6,0x8212eafc
	if (ctx.cr6.gt) goto loc_8212EAFC;
	// addi r11,r31,-48
	ctx.r11.s64 = ctx.r31.s64 + -48;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,3400
	ctx.r8.s64 = ctx.r10.s64 + 3400;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212EAFC:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// addi r30,r11,-16504
	ctx.r30.s64 = ctx.r11.s64 + -16504;
	// ble cr6,0x8212eb4c
	if (!ctx.cr6.gt) goto loc_8212EB4C;
	// cmpwi cr6,r31,127
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 127, ctx.xer);
	// bge cr6,0x8212eb4c
	if (!ctx.cr6.lt) goto loc_8212EB4C;
	// cmpwi cr6,r31,34
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 34, ctx.xer);
	// beq cr6,0x8212eb4c
	if (ctx.cr6.eq) goto loc_8212EB4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfb10
	ctx.lr = 0x8212EB24;
	sub_823DFB10(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// cmpwi cr6,r31,59
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 59, ctx.xer);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// bne cr6,0x8212eb40
	if (!ctx.cr6.eq) goto loc_8212EB40;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8212eb98
	if (ctx.cr6.eq) goto loc_8212EB98;
loc_8212EB40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212EB4C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8212eb98
	if (ctx.cr6.eq) goto loc_8212EB98;
	// extsb r10,r31
	ctx.r10.s64 = ctx.r31.s8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8212ea30
	ctx.lr = 0x8212EB60;
	sub_8212EA30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212eb8c
	if (ctx.cr6.eq) goto loc_8212EB8C;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-16504
	ctx.r8.s64 = ctx.r9.s64 + -16504;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stb r10,-16504(r9)
	PPC_STORE_U8(ctx.r9.u32 + -16504, ctx.r10.u8);
	// stb r11,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212EB8C:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r11,r11,2472
	ctx.r11.s64 = ctx.r11.s64 + 2472;
	// b 0x8212eba0
	goto loc_8212EBA0;
loc_8212EB98:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r11,r11,1544
	ctx.r11.s64 = ctx.r11.s64 + 1544;
loc_8212EBA0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212ebc4
	if (ctx.cr6.eq) goto loc_8212EBC4;
loc_8212EBAC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8212ec24
	if (ctx.cr6.eq) goto loc_8212EC24;
	// lwzu r3,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212ebac
	if (!ctx.cr6.eq) goto loc_8212EBAC;
loc_8212EBC4:
	// srawi r11,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 4;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,120
	ctx.r9.s64 = 120;
	// clrlwi r8,r31,28
	ctx.r8.u64 = ctx.r31.u32 & 0xF;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x8212ebec
	if (!ctx.cr6.gt) goto loc_8212EBEC;
	// addi r11,r11,87
	ctx.r11.s64 = ctx.r11.s64 + 87;
	// b 0x8212ebf0
	goto loc_8212EBF0;
loc_8212EBEC:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_8212EBF0:
	// stb r11,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// addi r11,r8,87
	ctx.r11.s64 = ctx.r8.s64 + 87;
	// bgt cr6,0x8212ec04
	if (ctx.cr6.gt) goto loc_8212EC04;
	// addi r11,r8,48
	ctx.r11.s64 = ctx.r8.s64 + 48;
loc_8212EC04:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212EC1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-6348
	ctx.r3.s64 = ctx.r11.s64 + -6348;
loc_8212EC24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212EA80) {
	__imp__sub_8212EA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212EC2C) {
	__imp__sub_8212EC2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EC30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r11,r9,-32200
	ctx.r11.s64 = ctx.r9.s64 + -32200;
	// mulli r9,r3,3368
	ctx.r9.s64 = ctx.r3.s64 * 3368;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,300
	ctx.r10.s64 = ctx.r11.s64 + 300;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822dc230
	sub_822DC230(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212EC30) {
	__imp__sub_8212EC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EC68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212EC68) {
	__imp__sub_8212EC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212EC6C) {
	__imp__sub_8212EC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EC70) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mulli r10,r3,3368
	ctx.r10.s64 = ctx.r3.s64 * 3368;
	// addi r11,r8,-32200
	ctx.r11.s64 = ctx.r8.s64 + -32200;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,300
	ctx.r7.s64 = ctx.r11.s64 + 300;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212EC70) {
	__imp__sub_8212EC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8212ECA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r5,-4
	ctx.r27.s64 = ctx.r5.s64 + -4;
	// addi r26,r11,-32200
	ctx.r26.s64 = ctx.r11.s64 + -32200;
loc_8212ECD4:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8212ed28
	if (!ctx.cr6.eq) goto loc_8212ED28;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8212ecf0
	if (ctx.cr6.lt) goto loc_8212ECF0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x8212ed10
	if (!ctx.cr6.gt) goto loc_8212ED10;
loc_8212ECF0:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// blt cr6,0x8212ed00
	if (ctx.cr6.lt) goto loc_8212ED00;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// ble cr6,0x8212ed10
	if (!ctx.cr6.gt) goto loc_8212ED10;
loc_8212ED00:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x8212ed18
	if (ctx.cr6.lt) goto loc_8212ED18;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x8212ed18
	if (ctx.cr6.gt) goto loc_8212ED18;
loc_8212ED10:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8212ed1c
	goto loc_8212ED1C;
loc_8212ED18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212ED1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212ed60
	if (ctx.cr6.eq) goto loc_8212ED60;
loc_8212ED28:
	// mulli r11,r28,3368
	ctx.r11.s64 = ctx.r28.s64 * 3368;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r26,300
	ctx.r10.s64 = ctx.r26.s64 + 300;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212ed60
	if (ctx.cr6.eq) goto loc_8212ED60;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822e8058
	ctx.lr = 0x8212ED48;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8212ed60
	if (!ctx.cr6.eq) goto loc_8212ED60;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r30,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8212ed70
	if (ctx.cr6.eq) goto loc_8212ED70;
loc_8212ED60:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,3072
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3072, ctx.xer);
	// blt cr6,0x8212ecd4
	if (ctx.cr6.lt) goto loc_8212ECD4;
loc_8212ED70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212EC98) {
	__imp__sub_8212EC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212ED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212ED7C) {
	__imp__sub_8212ED7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212ED80) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8212ec98
	sub_8212EC98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212ED80) {
	__imp__sub_8212ED80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212ED88) {
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
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x8212EDAC;
	sub_822EC4E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212ec98
	ctx.lr = 0x8212EDC0;
	sub_8212EC98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x822ec500
	ctx.lr = 0x8212EDCC;
	sub_822EC500(ctx, base);
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// andc r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
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

PPC_WEAK_FUNC(sub_8212ED88) {
	__imp__sub_8212ED88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EDF0) {
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
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8212ee44
	if (ctx.cr6.eq) goto loc_8212EE44;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-6292
	ctx.r4.s64 = ctx.r11.s64 + -6292;
	// bl 0x82280900
	ctx.lr = 0x8212EE30;
	sub_82280900(ctx, base);
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
loc_8212EE44:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8212e8e0
	ctx.lr = 0x8212EE54;
	sub_8212E8E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8212eed0
	if (!ctx.cr6.eq) goto loc_8212EED0;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8212eea4
	if (!ctx.cr6.gt) goto loc_8212EEA4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-6316
	ctx.r4.s64 = ctx.r11.s64 + -6316;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82280900
	ctx.lr = 0x8212EE90;
	sub_82280900(ctx, base);
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
loc_8212EEA4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-6316
	ctx.r4.s64 = ctx.r11.s64 + -6316;
	// bl 0x82280900
	ctx.lr = 0x8212EEBC;
	sub_82280900(ctx, base);
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
loc_8212EED0:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r8,-32200
	ctx.r11.s64 = ctx.r8.s64 + -32200;
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// addi r10,r11,300
	ctx.r10.s64 = ctx.r11.s64 + 300;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r5,3368
	ctx.r11.s64 = ctx.r5.s64 * 3368;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r4,-28736
	ctx.r4.s64 = ctx.r4.s64 + -28736;
	// bl 0x822dc230
	ctx.lr = 0x8212EF0C;
	sub_822DC230(ctx, base);
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

PPC_WEAK_FUNC(sub_8212EDF0) {
	__imp__sub_8212EDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8212EF28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// addi r11,r8,-32200
	ctx.r11.s64 = ctx.r8.s64 + -32200;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r10,-17592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r9,r11,292
	ctx.r9.s64 = ctx.r11.s64 + 292;
	// addi r8,r11,300
	ctx.r8.s64 = ctx.r11.s64 + 300;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,3368
	ctx.r11.s64 = ctx.r5.s64 * 3368;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
loc_8212EF70:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212ef90
	if (ctx.cr6.eq) goto loc_8212EF90;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8212ef90
	if (ctx.cr6.eq) goto loc_8212EF90;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dc230
	ctx.lr = 0x8212EF90;
	sub_822DC230(ctx, base);
loc_8212EF90:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8212ef70
	if (ctx.cr6.lt) goto loc_8212EF70;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212EF20) {
	__imp__sub_8212EF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212EFAC) {
	__imp__sub_8212EFAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212EFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8212EFB8;
	__savegprlr_21(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
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
	// lwzx r27,r11,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bge cr6,0x8212eff4
	if (!ctx.cr6.lt) goto loc_8212EFF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-6212
	ctx.r4.s64 = ctx.r11.s64 + -6212;
	// bl 0x82280900
	ctx.lr = 0x8212EFEC;
	sub_82280900(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8212EFF4:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// addi r21,r10,-28736
	ctx.r21.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x8212f014
	if (!ctx.cr6.gt) goto loc_8212F014;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8212f018
	goto loc_8212F018;
loc_8212F014:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_8212F018:
	// bl 0x8212e8e0
	ctx.lr = 0x8212F01C;
	sub_8212E8E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8212f07c
	if (!ctx.cr6.eq) goto loc_8212F07C;
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
	// ble cr6,0x8212f060
	if (!ctx.cr6.gt) goto loc_8212F060;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-6316
	ctx.r4.s64 = ctx.r11.s64 + -6316;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82280900
	ctx.lr = 0x8212F058;
	sub_82280900(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8212F060:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r11,-6316
	ctx.r4.s64 = ctx.r11.s64 + -6316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8212F074;
	sub_82280900(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8212F07C:
	// bl 0x823dfa20
	ctx.lr = 0x8212F080;
	sub_823DFA20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// lwzx r23,r11,r10
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x8212f160
	if (!ctx.cr6.eq) goto loc_8212F160;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// add r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r8,r9,-32200
	ctx.r8.s64 = ctx.r9.s64 + -32200;
	// mulli r9,r23,3368
	ctx.r9.s64 = ctx.r23.s64 * 3368;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,300
	ctx.r6.s64 = ctx.r8.s64 + 300;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwzx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212f118
	if (ctx.cr6.eq) goto loc_8212F118;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8212f0fc
	if (!ctx.cr6.gt) goto loc_8212F0FC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-6228
	ctx.r4.s64 = ctx.r11.s64 + -6228;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82280900
	ctx.lr = 0x8212F0F4;
	sub_82280900(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8212F0FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r11,-6228
	ctx.r4.s64 = ctx.r11.s64 + -6228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8212F110;
	sub_82280900(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8212F118:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8212f144
	if (!ctx.cr6.gt) goto loc_8212F144;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-6248
	ctx.r4.s64 = ctx.r11.s64 + -6248;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82280900
	ctx.lr = 0x8212F13C;
	sub_82280900(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8212F144:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r11,-6248
	ctx.r4.s64 = ctx.r11.s64 + -6248;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8212F158;
	sub_82280900(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8212F160:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// ble cr6,0x8212f270
	if (!ctx.cr6.gt) goto loc_8212F270;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r22,r27,-1
	ctx.r22.s64 = ctx.r27.s64 + -1;
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r24,r10,-6372
	ctx.r24.s64 = ctx.r10.s64 + -6372;
	// addi r25,r11,-8672
	ctx.r25.s64 = ctx.r11.s64 + -8672;
loc_8212F18C:
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// ble cr6,0x8212f1d4
	if (!ctx.cr6.gt) goto loc_8212F1D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8212f1bc
	if (!ctx.cr6.lt) goto loc_8212F1BC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r3,r9,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// b 0x8212f1c0
	goto loc_8212F1C0;
loc_8212F1BC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_8212F1C0:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x823dfb30
	ctx.lr = 0x8212F1C8;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8212f1d8
	if (!ctx.cr6.eq) goto loc_8212F1D8;
loc_8212F1D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212F1D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212f1f8
	if (ctx.cr6.eq) goto loc_8212F1F8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8280
	ctx.lr = 0x8212F1F8;
	sub_822E8280(ctx, base);
loc_8212F1F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8212f220
	if (!ctx.cr6.lt) goto loc_8212F220;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r5,r9,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// b 0x8212f224
	goto loc_8212F224;
loc_8212F220:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_8212F224:
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8280
	ctx.lr = 0x8212F230;
	sub_822E8280(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8212f248
	if (ctx.cr6.eq) goto loc_8212F248;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8280
	ctx.lr = 0x8212F248;
	sub_822E8280(ctx, base);
loc_8212F248:
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x8212f260
	if (ctx.cr6.eq) goto loc_8212F260;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8280
	ctx.lr = 0x8212F260;
	sub_822E8280(ctx, base);
loc_8212F260:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8212f18c
	if (ctx.cr6.lt) goto loc_8212F18C;
loc_8212F270:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x8212f2a4
	if (ctx.cr6.eq) goto loc_8212F2A4;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// add r8,r26,r11
	ctx.r8.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r11,r10,-32200
	ctx.r11.s64 = ctx.r10.s64 + -32200;
	// mulli r9,r23,3368
	ctx.r9.s64 = ctx.r23.s64 * 3368;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,300
	ctx.r10.s64 = ctx.r11.s64 + 300;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822dc230
	ctx.lr = 0x8212F2A4;
	sub_822DC230(ctx, base);
loc_8212F2A4:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212EFB0) {
	__imp__sub_8212EFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212F2AC) {
	__imp__sub_8212F2AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x8212F2B8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r3,3368
	ctx.r10.s64 = ctx.r3.s64 * 3368;
	// addi r11,r11,-32200
	ctx.r11.s64 = ctx.r11.s64 + -32200;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// add r18,r10,r11
	ctx.r18.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r25,r5,-4
	ctx.r25.s64 = ctx.r5.s64 + -4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,92
	ctx.r23.s64 = 92;
	// li r19,34
	ctx.r19.s64 = 34;
	// li r20,10
	ctx.r20.s64 = 10;
	// addi r24,r7,1544
	ctx.r24.s64 = ctx.r7.s64 + 1544;
	// addi r31,r8,-16504
	ctx.r31.s64 = ctx.r8.s64 + -16504;
	// addi r22,r9,-6348
	ctx.r22.s64 = ctx.r9.s64 + -6348;
	// addi r21,r10,-6332
	ctx.r21.s64 = ctx.r10.s64 + -6332;
	// addi r26,r11,-6160
	ctx.r26.s64 = ctx.r11.s64 + -6160;
loc_8212F314:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r18
	ctx.r28.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212f494
	if (ctx.cr6.eq) goto loc_8212F494;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212f494
	if (ctx.cr6.eq) goto loc_8212F494;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8212f34c
	if (!ctx.cr6.eq) goto loc_8212F34C;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// b 0x8212f420
	goto loc_8212F420;
loc_8212F34C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8212f41c
	if (ctx.cr6.lt) goto loc_8212F41C;
	// cmpwi cr6,r30,255
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 255, ctx.xer);
	// bgt cr6,0x8212f41c
	if (ctx.cr6.gt) goto loc_8212F41C;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// ble cr6,0x8212f398
	if (!ctx.cr6.gt) goto loc_8212F398;
	// cmpwi cr6,r30,127
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 127, ctx.xer);
	// bge cr6,0x8212f398
	if (!ctx.cr6.lt) goto loc_8212F398;
	// cmpwi cr6,r30,34
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 34, ctx.xer);
	// beq cr6,0x8212f398
	if (ctx.cr6.eq) goto loc_8212F398;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb10
	ctx.lr = 0x8212F37C;
	sub_823DFB10(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// cmpwi cr6,r30,59
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 59, ctx.xer);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// beq cr6,0x8212f398
	if (ctx.cr6.eq) goto loc_8212F398;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// b 0x8212f420
	goto loc_8212F420;
loc_8212F398:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212f3c0
	if (ctx.cr6.eq) goto loc_8212F3C0;
loc_8212F3A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8212f3e8
	if (ctx.cr6.eq) goto loc_8212F3E8;
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212f3a8
	if (!ctx.cr6.eq) goto loc_8212F3A8;
loc_8212F3C0:
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,120
	ctx.r9.s64 = 120;
	// clrlwi r8,r30,28
	ctx.r8.u64 = ctx.r30.u32 & 0xF;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x8212f3f0
	if (!ctx.cr6.gt) goto loc_8212F3F0;
	// addi r11,r11,87
	ctx.r11.s64 = ctx.r11.s64 + 87;
	// b 0x8212f3f4
	goto loc_8212F3F4;
loc_8212F3E8:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8212f420
	goto loc_8212F420;
loc_8212F3F0:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_8212F3F4:
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// addi r11,r8,87
	ctx.r11.s64 = ctx.r8.s64 + 87;
	// bgt cr6,0x8212f408
	if (ctx.cr6.gt) goto loc_8212F408;
	// addi r11,r8,48
	ctx.r11.s64 = ctx.r8.s64 + 48;
loc_8212F408:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// b 0x8212f420
	goto loc_8212F420;
loc_8212F41C:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_8212F420:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// subf r4,r29,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r29.s64;
	// add r3,r29,r27
	ctx.r3.u64 = ctx.r29.u64 + ctx.r27.u64;
	// bl 0x822e8368
	ctx.lr = 0x8212F430;
	sub_822E8368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8212f4a8
	if (ctx.cr6.lt) goto loc_8212F4A8;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8212f484
	if (ctx.cr6.eq) goto loc_8212F484;
loc_8212F450:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x8212f484
	if (!ctx.cr6.lt) goto loc_8212F484;
	// cmpwi cr6,r9,34
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 34, ctx.xer);
	// bne cr6,0x8212f468
	if (!ctx.cr6.eq) goto loc_8212F468;
	// stbx r23,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r23.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8212F468:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r9,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8212f450
	if (!ctx.cr6.eq) goto loc_8212F450;
loc_8212F484:
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stbx r19,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r19.u8);
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// stb r20,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r20.u8);
loc_8212F494:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x8212f314
	if (ctx.cr6.lt) goto loc_8212F314;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r27
	PPC_STORE_U8(ctx.r29.u32 + ctx.r27.u32, ctx.r11.u8);
loc_8212F4A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212F2B0) {
	__imp__sub_8212F2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212F4B4) {
	__imp__sub_8212F4B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8288(r1)
	ea = -8288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8212f2b0
	ctx.lr = 0x8212F4E0;
	sub_8212F2B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-29844
	ctx.r4.s64 = ctx.r11.s64 + -29844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d3ad0
	ctx.lr = 0x8212F4F4;
	sub_822D3AD0(ctx, base);
	// addi r1,r1,8288
	ctx.r1.s64 = ctx.r1.s64 + 8288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212F4B8) {
	__imp__sub_8212F4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8212F510;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r27,r6,1544
	ctx.r27.s64 = ctx.r6.s64 + 1544;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r10,-32200
	ctx.r28.s64 = ctx.r10.s64 + -32200;
	// addi r26,r11,-6148
	ctx.r26.s64 = ctx.r11.s64 + -6148;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mulli r23,r7,3368
	ctx.r23.s64 = ctx.r7.s64 * 3368;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// addi r25,r8,-6348
	ctx.r25.s64 = ctx.r8.s64 + -6348;
	// addi r31,r7,-16504
	ctx.r31.s64 = ctx.r7.s64 + -16504;
	// addi r24,r9,-6332
	ctx.r24.s64 = ctx.r9.s64 + -6332;
loc_8212F564:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r28,300
	ctx.r10.s64 = ctx.r28.s64 + 300;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwzx r29,r8,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8212f684
	if (ctx.cr6.eq) goto loc_8212F684;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212f684
	if (ctx.cr6.eq) goto loc_8212F684;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8212f5a0
	if (!ctx.cr6.eq) goto loc_8212F5A0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x8212f674
	goto loc_8212F674;
loc_8212F5A0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8212f670
	if (ctx.cr6.lt) goto loc_8212F670;
	// cmpwi cr6,r30,255
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 255, ctx.xer);
	// bgt cr6,0x8212f670
	if (ctx.cr6.gt) goto loc_8212F670;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// ble cr6,0x8212f5ec
	if (!ctx.cr6.gt) goto loc_8212F5EC;
	// cmpwi cr6,r30,127
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 127, ctx.xer);
	// bge cr6,0x8212f5ec
	if (!ctx.cr6.lt) goto loc_8212F5EC;
	// cmpwi cr6,r30,34
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 34, ctx.xer);
	// beq cr6,0x8212f5ec
	if (ctx.cr6.eq) goto loc_8212F5EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb10
	ctx.lr = 0x8212F5D0;
	sub_823DFB10(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// cmpwi cr6,r30,59
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 59, ctx.xer);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// beq cr6,0x8212f5ec
	if (ctx.cr6.eq) goto loc_8212F5EC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x8212f674
	goto loc_8212F674;
loc_8212F5EC:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212f614
	if (ctx.cr6.eq) goto loc_8212F614;
loc_8212F5FC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8212f63c
	if (ctx.cr6.eq) goto loc_8212F63C;
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212f5fc
	if (!ctx.cr6.eq) goto loc_8212F5FC;
loc_8212F614:
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,120
	ctx.r9.s64 = 120;
	// clrlwi r8,r30,28
	ctx.r8.u64 = ctx.r30.u32 & 0xF;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x8212f644
	if (!ctx.cr6.gt) goto loc_8212F644;
	// addi r11,r11,87
	ctx.r11.s64 = ctx.r11.s64 + 87;
	// b 0x8212f648
	goto loc_8212F648;
loc_8212F63C:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8212f674
	goto loc_8212F674;
loc_8212F644:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_8212F648:
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// addi r11,r8,87
	ctx.r11.s64 = ctx.r8.s64 + 87;
	// bgt cr6,0x8212f65c
	if (ctx.cr6.gt) goto loc_8212F65C;
	// addi r11,r8,48
	ctx.r11.s64 = ctx.r8.s64 + 48;
loc_8212F65C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// b 0x8212f674
	goto loc_8212F674;
loc_8212F670:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_8212F674:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8212F684;
	sub_82280900(ctx, base);
loc_8212F684:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x8212f564
	if (ctx.cr6.lt) goto loc_8212F564;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212F508) {
	__imp__sub_8212F508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F698) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-16436
	ctx.r5.s64 = ctx.r11.s64 + -16436;
	// addi r3,r9,-6104
	ctx.r3.s64 = ctx.r9.s64 + -6104;
	// addi r4,r10,-4176
	ctx.r4.s64 = ctx.r10.s64 + -4176;
	// bl 0x8227da10
	ctx.lr = 0x8212F6C0;
	sub_8227DA10(ctx, base);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-16456
	ctx.r5.s64 = ctx.r8.s64 + -16456;
	// addi r3,r6,-6112
	ctx.r3.s64 = ctx.r6.s64 + -6112;
	// addi r4,r7,-4624
	ctx.r4.s64 = ctx.r7.s64 + -4624;
	// bl 0x8227da10
	ctx.lr = 0x8212F6DC;
	sub_8227DA10(ctx, base);
	// lis r5,-32165
	ctx.r5.s64 = -2107965440;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,-16476
	ctx.r5.s64 = ctx.r5.s64 + -16476;
	// addi r3,r3,-6124
	ctx.r3.s64 = ctx.r3.s64 + -6124;
	// addi r4,r4,-4320
	ctx.r4.s64 = ctx.r4.s64 + -4320;
	// bl 0x8227da10
	ctx.lr = 0x8212F6F8;
	sub_8227DA10(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-16496
	ctx.r5.s64 = ctx.r11.s64 + -16496;
	// addi r3,r9,-6136
	ctx.r3.s64 = ctx.r9.s64 + -6136;
	// addi r4,r10,-2808
	ctx.r4.s64 = ctx.r10.s64 + -2808;
	// bl 0x8227da10
	ctx.lr = 0x8212F714;
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

PPC_WEAK_FUNC(sub_8212F698) {
	__imp__sub_8212F698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212F724) {
	__imp__sub_8212F724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F728) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212F728) {
	__imp__sub_8212F728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,128
	ctx.r11.s64 = 128;
	// subfc r10,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212F730) {
	__imp__sub_8212F730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212F74C) {
	__imp__sub_8212F74C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8212F758;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r3,3368
	ctx.r10.s64 = ctx.r3.s64 * 3368;
	// addi r11,r11,-32200
	ctx.r11.s64 = ctx.r11.s64 + -32200;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,288
	ctx.r9.s64 = ctx.r11.s64 + 288;
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r28.u32);
loc_8212F788:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212f7e0
	if (ctx.cr6.eq) goto loc_8212F7E0;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212f7c0
	if (ctx.cr6.eq) goto loc_8212F7C0;
	// cmpwi cr6,r31,18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 18, ctx.xer);
	// beq cr6,0x8212f7e8
	if (ctx.cr6.eq) goto loc_8212F7E8;
	// cmpwi cr6,r31,19
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 19, ctx.xer);
	// beq cr6,0x8212f7e8
	if (ctx.cr6.eq) goto loc_8212F7E8;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// beq cr6,0x8212f7e8
	if (ctx.cr6.eq) goto loc_8212F7E8;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// beq cr6,0x8212f7e8
	if (ctx.cr6.eq) goto loc_8212F7E8;
loc_8212F7C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141340
	ctx.lr = 0x8212F7C8;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82128e28
	ctx.lr = 0x8212F7E0;
	sub_82128E28(ctx, base);
loc_8212F7E0:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_8212F7E8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8212f788
	if (ctx.cr6.lt) goto loc_8212F788;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212F750) {
	__imp__sub_8212F750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F800) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8212f750
	sub_8212F750(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212F800) {
	__imp__sub_8212F800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F808) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8212f750
	sub_8212F750(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212F808) {
	__imp__sub_8212F808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8212F818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x8212F834;
	sub_822EC4E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// bl 0x8212ec98
	ctx.lr = 0x8212F854;
	sub_8212EC98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8212f888
	if (!ctx.cr6.eq) goto loc_8212F888;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-6096
	ctx.r4.s64 = ctx.r11.s64 + -6096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8212F874;
	sub_823DE1F0(ctx, base);
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x822ec500
	ctx.lr = 0x8212F87C;
	sub_822EC500(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8212F888:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82136030
	ctx.lr = 0x8212F898;
	sub_82136030(ctx, base);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x8212f8b0
	if (!ctx.cr6.eq) goto loc_8212F8B0;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82136030
	ctx.lr = 0x8212F8B0;
	sub_82136030(ctx, base);
loc_8212F8B0:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x822ec500
	ctx.lr = 0x8212F8B8;
	sub_822EC500(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212F810) {
	__imp__sub_8212F810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212F8C4) {
	__imp__sub_8212F8C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F8C8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8212f810
	sub_8212F810(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212F8C8) {
	__imp__sub_8212F8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F8D0) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8212f810
	sub_8212F810(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212F8D0) {
	__imp__sub_8212F8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F8D8) {
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
	// bl 0x8212e8e0
	ctx.lr = 0x8212F8F4;
	sub_8212E8E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8212f914
	if (!ctx.cr6.lt) goto loc_8212F914;
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
loc_8212F914:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-32200
	ctx.r11.s64 = ctx.r10.s64 + -32200;
	// mulli r10,r31,3368
	ctx.r10.s64 = ctx.r31.s64 * 3368;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,292
	ctx.r8.s64 = ctx.r11.s64 + 292;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_8212F8D8) {
	__imp__sub_8212F8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212F94C) {
	__imp__sub_8212F94C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F950) {
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
	// bl 0x8212e8e0
	ctx.lr = 0x8212F960;
	sub_8212E8E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8212f97c
	if (!ctx.cr6.lt) goto loc_8212F97C;
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
loc_8212F97C:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-32200
	ctx.r11.s64 = ctx.r10.s64 + -32200;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,300
	ctx.r7.s64 = ctx.r11.s64 + 300;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212F950) {
	__imp__sub_8212F950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212F9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8212F9B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-32200
	ctx.r27.s64 = ctx.r11.s64 + -32200;
	// addi r29,r27,300
	ctx.r29.s64 = ctx.r27.s64 + 300;
loc_8212F9C4:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,256
	ctx.r30.s64 = 256;
loc_8212F9CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212f9e0
	if (ctx.cr6.eq) goto loc_8212F9E0;
	// bl 0x822dad58
	ctx.lr = 0x8212F9DC;
	sub_822DAD58(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8212F9E0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x8212f9cc
	if (!ctx.cr0.eq) goto loc_8212F9CC;
	// addi r29,r29,3368
	ctx.r29.s64 = ctx.r29.s64 + 3368;
	// addi r11,r27,7036
	ctx.r11.s64 = ctx.r27.s64 + 7036;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212f9c4
	if (ctx.cr6.lt) goto loc_8212F9C4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212F9A8) {
	__imp__sub_8212F9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212FA04) {
	__imp__sub_8212FA04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 & ctx.r4.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212FA08) {
	__imp__sub_8212FA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212FA2C) {
	__imp__sub_8212FA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FA30) {
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
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212FA30) {
	__imp__sub_8212FA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FA50) {
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
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212FA50) {
	__imp__sub_8212FA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212FA84) {
	__imp__sub_8212FA84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FA88) {
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
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8212fab4
	if (ctx.cr6.eq) goto loc_8212FAB4;
	// ori r10,r4,1
	ctx.r10.u64 = ctx.r4.u64 | 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8212fab8
	goto loc_8212FAB8;
loc_8212FAB4:
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_8212FAB8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212FA88) {
	__imp__sub_8212FA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212FAD4) {
	__imp__sub_8212FAD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8212FAE0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x82141160
	ctx.lr = 0x8212FB10;
	sub_82141160(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212fb60
	if (ctx.cr6.eq) goto loc_8212FB60;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r30,3368
	ctx.r10.s64 = ctx.r30.s64 * 3368;
	// addi r11,r11,-32200
	ctx.r11.s64 = ctx.r11.s64 + -32200;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r8,r11,284
	ctx.r8.s64 = ctx.r11.s64 + 284;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r7,r9,28832
	ctx.r7.s64 = ctx.r9.s64 + 28832;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lfs f30,12168(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// subfic r4,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// lwz r31,384(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r3,0,30,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// b 0x8212fbe4
	goto loc_8212FBE4;
loc_8212FB60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,14276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c2068
	ctx.lr = 0x8212FB80;
	sub_822C2068(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8238b548
	ctx.lr = 0x8212FB8C;
	sub_8238B548(ctx, base);
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// bne cr6,0x8212fbb8
	if (!ctx.cr6.eq) goto loc_8212FBB8;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8212fbc0
	goto loc_8212FBC0;
loc_8212FBB8:
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_8212FBC0:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r30,3368
	ctx.r10.s64 = ctx.r30.s64 * 3368;
	// addi r11,r11,-32200
	ctx.r11.s64 = ctx.r11.s64 + -32200;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r9,r11,284
	ctx.r9.s64 = ctx.r11.s64 + 284;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r6,0,30,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
loc_8212FBE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,124
	ctx.r29.s64 = ctx.r11.s64 + 124;
	// bl 0x8238b698
	ctx.lr = 0x8212FBF0;
	sub_8238B698(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r29,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r29.u8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r7,r8,-2072
	ctx.r7.s64 = ctx.r8.s64 + -2072;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f7,128(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// bl 0x82133800
	ctx.lr = 0x8212FC80;
	sub_82133800(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212FAD8) {
	__imp__sub_8212FAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8212FC98;
	__savegprlr_26(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212fcc8
	if (!ctx.cr6.eq) goto loc_8212FCC8;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_8212FCC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r5,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r5.s64 = 256 - ctx.r11.s64;
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// bl 0x822e7e98
	ctx.lr = 0x8212FCE0;
	sub_822E7E98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8212fad8
	ctx.lr = 0x8212FD14;
	sub_8212FAD8(ctx, base);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212FC90) {
	__imp__sub_8212FC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212FD1C) {
	__imp__sub_8212FD1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8212FD28;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r30,r3,3368
	ctx.r30.s64 = ctx.r3.s64 * 3368;
	// addi r29,r11,-32200
	ctx.r29.s64 = ctx.r11.s64 + -32200;
	// addi r11,r5,24
	ctx.r11.s64 = ctx.r5.s64 + 24;
	// addi r9,r29,2212
	ctx.r9.s64 = ctx.r29.s64 + 2212;
	// addi r8,r29,2200
	ctx.r8.s64 = ctx.r29.s64 + 2200;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwzx r26,r30,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8212FD60:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212fd60
	if (!ctx.cr6.eq) goto loc_8212FD60;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r28,161
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 161, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x8212fd8c
	if (ctx.cr6.eq) goto loc_8212FD8C;
	// cmpwi cr6,r28,192
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 192, ctx.xer);
	// bne cr6,0x8212fda8
	if (!ctx.cr6.eq) goto loc_8212FDA8;
loc_8212FD8C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8212fda8
	if (ctx.cr6.eq) goto loc_8212FDA8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8212dcd0
	ctx.lr = 0x8212FDA0;
	sub_8212DCD0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x8212ff64
	goto loc_8212FF64;
loc_8212FDA8:
	// cmpwi cr6,r28,162
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 162, ctx.xer);
	// bne cr6,0x8212fdd4
	if (!ctx.cr6.eq) goto loc_8212FDD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8212ff64
	if (!ctx.cr6.lt) goto loc_8212FF64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r5,r11,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r4,r10,25
	ctx.r4.s64 = ctx.r10.s64 + 25;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// bl 0x823de130
	ctx.lr = 0x8212FDD0;
	sub_823DE130(ctx, base);
	// b 0x8212ff64
	goto loc_8212FF64;
loc_8212FDD4:
	// cmpwi cr6,r28,157
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 157, ctx.xer);
	// bne cr6,0x8212fe7c
	if (!ctx.cr6.eq) goto loc_8212FE7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8212fdf0
	if (!ctx.cr6.lt) goto loc_8212FDF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8212FDF0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8212ff64
	if (ctx.cr6.eq) goto loc_8212FF64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8212ff64
	if (!ctx.cr6.lt) goto loc_8212FF64;
loc_8212FE04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x823dfa00
	ctx.lr = 0x8212FE18;
	sub_823DFA00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212fe38
	if (ctx.cr6.eq) goto loc_8212FE38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8212fe04
	if (ctx.cr6.lt) goto loc_8212FE04;
loc_8212FE38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8212ff64
	if (!ctx.cr6.lt) goto loc_8212FF64;
loc_8212FE44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x823dfa00
	ctx.lr = 0x8212FE58;
	sub_823DFA00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8212ff64
	if (!ctx.cr6.eq) goto loc_8212FF64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8212fe44
	if (ctx.cr6.lt) goto loc_8212FE44;
	// b 0x8212ff64
	goto loc_8212FF64;
loc_8212FE7C:
	// cmpwi cr6,r28,156
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 156, ctx.xer);
	// bne cr6,0x8212fef8
	if (!ctx.cr6.eq) goto loc_8212FEF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212fe98
	if (!ctx.cr6.gt) goto loc_8212FE98;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8212FE98:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8212fee0
	if (ctx.cr6.eq) goto loc_8212FEE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212fee0
	if (!ctx.cr6.gt) goto loc_8212FEE0;
loc_8212FEAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,23(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x823dfa00
	ctx.lr = 0x8212FEC0;
	sub_823DFA00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212fee0
	if (ctx.cr6.eq) goto loc_8212FEE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8212feac
	if (ctx.cr6.gt) goto loc_8212FEAC;
loc_8212FEE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8212ff64
	if (!ctx.cr6.lt) goto loc_8212FF64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8212ff64
	goto loc_8212FF64;
loc_8212FEF8:
	// cmpwi cr6,r28,165
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 165, ctx.xer);
	// beq cr6,0x8212ff60
	if (ctx.cr6.eq) goto loc_8212FF60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823dfa20
	ctx.lr = 0x8212FF08;
	sub_823DFA20(ctx, base);
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// bne cr6,0x8212ff18
	if (!ctx.cr6.eq) goto loc_8212FF18;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8212ff60
	if (!ctx.cr6.eq) goto loc_8212FF60;
loc_8212FF18:
	// cmpwi cr6,r28,166
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 166, ctx.xer);
	// beq cr6,0x8212ff58
	if (ctx.cr6.eq) goto loc_8212FF58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823dfa20
	ctx.lr = 0x8212FF28;
	sub_823DFA20(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// bne cr6,0x8212ff38
	if (!ctx.cr6.eq) goto loc_8212FF38;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8212ff58
	if (!ctx.cr6.eq) goto loc_8212FF58;
loc_8212FF38:
	// cmpwi cr6,r28,161
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 161, ctx.xer);
	// bne cr6,0x8212ff64
	if (!ctx.cr6.eq) goto loc_8212FF64;
	// addi r11,r29,284
	ctx.r11.s64 = ctx.r29.s64 + 284;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stwx r8,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// b 0x8212ff64
	goto loc_8212FF64;
loc_8212FF58:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x8212ff64
	goto loc_8212FF64;
loc_8212FF60:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_8212FF64:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ff84
	if (ctx.cr6.eq) goto loc_8212FF84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8212da28
	ctx.lr = 0x8212FF84;
	sub_8212DA28(ctx, base);
loc_8212FF84:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212FD20) {
	__imp__sub_8212FD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212FF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8212FF98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,24
	ctx.r11.s64 = ctx.r5.s64 + 24;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8212FFB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212ffb0
	if (!ctx.cr6.eq) goto loc_8212FFB0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r30,22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 22, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bne cr6,0x8212ffe8
	if (!ctx.cr6.eq) goto loc_8212FFE8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8212dcd0
	ctx.lr = 0x8212FFE0;
	sub_8212DCD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8213011c
	goto loc_8213011C;
loc_8212FFE8:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x8212fffc
	if (!ctx.cr6.eq) goto loc_8212FFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282ca0
	ctx.lr = 0x8212FFF8;
	sub_82282CA0(ctx, base);
	// b 0x82130118
	goto loc_82130118;
loc_8212FFFC:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bne cr6,0x82130048
	if (!ctx.cr6.eq) goto loc_82130048;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213011c
	if (ctx.cr6.eq) goto loc_8213011C;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r10,23
	ctx.r3.s64 = ctx.r10.s64 + 23;
	// bl 0x823de130
	ctx.lr = 0x82130038;
	sub_823DE130(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8213011c
	goto loc_8213011C;
loc_82130048:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82130068
	if (!ctx.cr6.eq) goto loc_82130068;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82130068:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bne cr6,0x8213007c
	if (!ctx.cr6.eq) goto loc_8213007C;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8213011c
	goto loc_8213011C;
loc_8213007C:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// bge cr6,0x82130090
	if (!ctx.cr6.lt) goto loc_82130090;
loc_82130084:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82130090:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r3,3368
	ctx.r10.s64 = ctx.r3.s64 * 3368;
	// addi r11,r11,-32200
	ctx.r11.s64 = ctx.r11.s64 + -32200;
	// addi r9,r11,284
	ctx.r9.s64 = ctx.r11.s64 + 284;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821300c4
	if (ctx.cr6.eq) goto loc_821300C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x82130084
	if (ctx.cr6.eq) goto loc_82130084;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r30,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r30.u8);
	// b 0x821300f4
	goto loc_821300F4;
loc_821300C4:
	// cmpwi cr6,r29,255
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 255, ctx.xer);
	// beq cr6,0x82130084
	if (ctx.cr6.eq) goto loc_82130084;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r3,r11,25
	ctx.r3.s64 = ctx.r11.s64 + 25;
	// bl 0x823de130
	ctx.lr = 0x821300E8;
	sub_823DE130(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r30,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r30.u8);
loc_821300F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82130118
	if (!ctx.cr6.eq) goto loc_82130118;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
loc_82130118:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8213011C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8212da28
	ctx.lr = 0x82130128;
	sub_8212DA28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212FF90) {
	__imp__sub_8212FF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82130134) {
	__imp__sub_82130134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82130140;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32166
	ctx.r30.s64 = -2108030976;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r9,r3,3368
	ctx.r9.s64 = ctx.r3.s64 * 3368;
	// lbz r29,32012(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32012);
	// stb r10,32012(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32012, ctx.r10.u8);
	// addi r11,r11,-32200
	ctx.r11.s64 = ctx.r11.s64 + -32200;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r8,r11,2212
	ctx.r8.s64 = ctx.r11.s64 + 2212;
	// addi r7,r11,2200
	ctx.r7.s64 = ctx.r11.s64 + 2200;
	// addi r6,r11,2188
	ctx.r6.s64 = ctx.r11.s64 + 2188;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r25,r9,r8
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r28,r9,r7
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r24,r9,r6
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// bl 0x82141110
	ctx.lr = 0x82130184;
	sub_82141110(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,108
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 108, ctx.xer);
	// bne cr6,0x821301b0
	if (!ctx.cr6.eq) goto loc_821301B0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8213024c
	if (ctx.cr6.eq) goto loc_8213024C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-6084
	ctx.r4.s64 = ctx.r11.s64 + -6084;
	// bl 0x8227cf18
	ctx.lr = 0x821301A8;
	sub_8227CF18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821301B0:
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// beq cr6,0x82130470
	if (ctx.cr6.eq) goto loc_82130470;
	// cmpwi cr6,r31,191
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 191, ctx.xer);
	// beq cr6,0x82130470
	if (ctx.cr6.eq) goto loc_82130470;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// bne cr6,0x8213020c
	if (!ctx.cr6.eq) goto loc_8213020C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821301e8
	if (ctx.cr6.eq) goto loc_821301E8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8212e3f0
	ctx.lr = 0x821301D8;
	sub_8212E3F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32012(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32012, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821301E8:
	// subfic r11,r25,0
	ctx.xer.ca = ctx.r25.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r25.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82125330
	ctx.lr = 0x821301FC;
	sub_82125330(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32012(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32012, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8213020C:
	// cmpwi cr6,r31,154
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 154, ctx.xer);
	// bne cr6,0x8213022c
	if (!ctx.cr6.eq) goto loc_8213022C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8213024c
	if (ctx.cr6.eq) goto loc_8213024C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82125330
	ctx.lr = 0x82130224;
	sub_82125330(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8213022C:
	// cmpwi cr6,r31,155
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 155, ctx.xer);
	// bne cr6,0x8213024c
	if (!ctx.cr6.eq) goto loc_8213024C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8213024c
	if (ctx.cr6.eq) goto loc_8213024C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82125330
	ctx.lr = 0x82130244;
	sub_82125330(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8213024C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e7b8
	ctx.lr = 0x82130258;
	sub_8212E7B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821302e0
	if (ctx.cr6.eq) goto loc_821302E0;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lwz r11,32000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32000);
	// lwz r9,-32496(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32496);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// bge cr6,0x82130290
	if (!ctx.cr6.lt) goto loc_82130290;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82130290
	if (!ctx.cr6.gt) goto loc_82130290;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,32000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32000, ctx.r11.u32);
loc_82130290:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r9,-25464
	ctx.r10.s64 = ctx.r9.s64 + -25464;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r31,r7,-32488
	ctx.r31.s64 = ctx.r7.s64 + -32488;
	// mulli r11,r5,280
	ctx.r11.s64 = ctx.r5.s64 * 280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,280
	ctx.r5.s64 = 280;
	// bl 0x823de1f0
	ctx.lr = 0x821302C4;
	sub_823DE1F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8212da28
	ctx.lr = 0x821302D0;
	sub_8212DA28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82125478
	ctx.lr = 0x821302D8;
	sub_82125478(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821302E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e818
	ctx.lr = 0x821302EC;
	sub_8212E818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82130374
	if (ctx.cr6.eq) goto loc_82130374;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82125330
	ctx.lr = 0x82130300;
	sub_82125330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82130570
	if (!ctx.cr6.eq) goto loc_82130570;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lwz r11,32000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32000);
	// lwz r9,-32496(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32496);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82130570
	if (ctx.cr6.eq) goto loc_82130570;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// stw r11,32000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32000, ctx.r11.u32);
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// addi r10,r9,-25464
	ctx.r10.s64 = ctx.r9.s64 + -25464;
	// rlwinm r5,r6,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r31,r7,-32488
	ctx.r31.s64 = ctx.r7.s64 + -32488;
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r4,280
	ctx.r11.s64 = ctx.r4.s64 * 280;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,280
	ctx.r5.s64 = 280;
	// bl 0x823de1f0
	ctx.lr = 0x82130360;
	sub_823DE1F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8212da28
	ctx.lr = 0x8213036C;
	sub_8212DA28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82130374:
	// cmpwi cr6,r31,164
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 164, ctx.xer);
	// bne cr6,0x82130388
	if (!ctx.cr6.eq) goto loc_82130388;
	// bl 0x82125be8
	ctx.lr = 0x82130380;
	sub_82125BE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82130388:
	// cmpwi cr6,r31,163
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 163, ctx.xer);
	// bne cr6,0x8213039c
	if (!ctx.cr6.eq) goto loc_8213039C;
	// bl 0x82125c50
	ctx.lr = 0x82130394;
	sub_82125C50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8213039C:
	// cmpwi cr6,r31,165
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 165, ctx.xer);
	// bne cr6,0x821303b8
	if (!ctx.cr6.eq) goto loc_821303B8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82130414
	if (ctx.cr6.eq) goto loc_82130414;
	// bl 0x82125c98
	ctx.lr = 0x821303B0;
	sub_82125C98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821303B8:
	// cmpwi cr6,r31,166
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 166, ctx.xer);
	// bne cr6,0x821303d4
	if (!ctx.cr6.eq) goto loc_821303D4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82130414
	if (ctx.cr6.eq) goto loc_82130414;
	// bl 0x82125cd8
	ctx.lr = 0x821303CC;
	sub_82125CD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821303D4:
	// cmpwi cr6,r31,162
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 162, ctx.xer);
	// beq cr6,0x8213042c
	if (ctx.cr6.eq) goto loc_8213042C;
	// cmpwi cr6,r31,27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 27, ctx.xer);
	// beq cr6,0x8213042c
	if (ctx.cr6.eq) goto loc_8213042C;
	// cmpwi cr6,r31,157
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 157, ctx.xer);
	// beq cr6,0x82130424
	if (ctx.cr6.eq) goto loc_82130424;
	// cmpwi cr6,r31,187
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 187, ctx.xer);
	// beq cr6,0x82130424
	if (ctx.cr6.eq) goto loc_82130424;
	// cmpwi cr6,r31,156
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 156, ctx.xer);
	// beq cr6,0x82130424
	if (ctx.cr6.eq) goto loc_82130424;
	// cmpwi cr6,r31,185
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 185, ctx.xer);
	// beq cr6,0x82130424
	if (ctx.cr6.eq) goto loc_82130424;
	// cmpwi cr6,r31,127
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 127, ctx.xer);
	// beq cr6,0x8213043c
	if (ctx.cr6.eq) goto loc_8213043C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8213043c
	if (!ctx.cr6.eq) goto loc_8213043C;
loc_82130414:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8213043c
	if (!ctx.cr6.eq) goto loc_8213043C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8213043c
	if (!ctx.cr6.eq) goto loc_8213043C;
loc_82130424:
	// bl 0x821264e8
	ctx.lr = 0x82130428;
	sub_821264E8(ctx, base);
	// b 0x8213043c
	goto loc_8213043C;
loc_8213042C:
	// bl 0x82125420
	ctx.lr = 0x82130430;
	sub_82125420(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82130570
	if (!ctx.cr6.eq) goto loc_82130570;
loc_8213043C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-32488
	ctx.r5.s64 = ctx.r11.s64 + -32488;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212fd20
	ctx.lr = 0x82130454;
	sub_8212FD20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82130570
	if (ctx.cr6.eq) goto loc_82130570;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82125478
	ctx.lr = 0x82130468;
	sub_82125478(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82130470:
	// bl 0x821264e8
	ctx.lr = 0x82130474;
	sub_821264E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82130570
	if (!ctx.cr6.eq) goto loc_82130570;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,-32488
	ctx.r31.s64 = ctx.r11.s64 + -32488;
	// addi r4,r10,-6368
	ctx.r4.s64 = ctx.r10.s64 + -6368;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8213049C;
	sub_82280900(ctx, base);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x821304c4
	if (ctx.cr6.eq) goto loc_821304C4;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x821304c4
	if (ctx.cr6.eq) goto loc_821304C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130570
	if (ctx.cr6.eq) goto loc_82130570;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// b 0x821304c8
	goto loc_821304C8;
loc_821304C4:
	// addi r4,r31,25
	ctx.r4.s64 = ctx.r31.s64 + 25;
loc_821304C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8227cf18
	ctx.lr = 0x821304D0;
	sub_8227CF18(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// bl 0x8227cf18
	ctx.lr = 0x821304E0;
	sub_8227CF18(ctx, base);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82130530
	if (ctx.cr6.eq) goto loc_82130530;
	// lis r29,-32165
	ctx.r29.s64 = -2107965440;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-25464
	ctx.r11.s64 = ctx.r11.s64 + -25464;
	// li r5,280
	ctx.r5.s64 = 280;
	// lwz r30,-32496(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32496);
	// srawi r9,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 5;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r6,r7,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r7.s64;
	// mulli r10,r6,280
	ctx.r10.s64 = ctx.r6.s64 * 280;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82130520;
	sub_823DE1F0(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,-32496(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32496, ctx.r11.u32);
	// stw r11,32000(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32000, ctx.r11.u32);
loc_82130530:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282ca0
	ctx.lr = 0x82130538;
	sub_82282CA0(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r11,-30024
	ctx.r9.s64 = ctx.r11.s64 + -30024;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f0,1360(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r10,1356(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1356);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne cr6,0x82130570
	if (!ctx.cr6.eq) goto loc_82130570;
	// bl 0x82135a90
	ctx.lr = 0x82130570;
	sub_82135A90(ctx, base);
loc_82130570:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82130138) {
	__imp__sub_82130138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82130580;
	__savegprlr_20(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r11,-32200
	ctx.r28.s64 = ctx.r11.s64 + -32200;
	// mulli r29,r3,3368
	ctx.r29.s64 = ctx.r3.s64 * 3368;
	// addi r11,r28,292
	ctx.r11.s64 = ctx.r28.s64 + 292;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r22,r29,r11
	ctx.r22.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// stwx r5,r11,r22
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r5.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r30,r11,r22
	ctx.r30.u64 = ctx.r11.u64 + ctx.r22.u64;
	// beq cr6,0x821305f0
	if (ctx.cr6.eq) goto loc_821305F0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8213060c
	if (!ctx.cr6.eq) goto loc_8213060C;
	// addi r11,r28,288
	ctx.r11.s64 = ctx.r28.s64 + 288;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x8213060c
	goto loc_8213060C;
loc_821305F0:
	// addi r11,r28,288
	ctx.r11.s64 = ctx.r28.s64 + 288;
	// stw r20,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r20.u32);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bge 0x8213060c
	if (!ctx.cr0.lt) goto loc_8213060C;
	// stwx r20,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r20.u32);
loc_8213060C:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r26,r23,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r27,r11,-30024
	ctx.r27.s64 = ctx.r11.s64 + -30024;
	// cmpwi cr6,r31,96
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 96, ctx.xer);
	// add r24,r26,r27
	ctx.r24.u64 = ctx.r26.u64 + ctx.r27.u64;
	// beq cr6,0x82130684
	if (ctx.cr6.eq) goto loc_82130684;
	// cmpwi cr6,r31,126
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 126, ctx.xer);
	// beq cr6,0x82130684
	if (ctx.cr6.eq) goto loc_82130684;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82130684
	if (!ctx.cr6.eq) goto loc_82130684;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82130684
	if (ctx.cr6.eq) goto loc_82130684;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-6076
	ctx.r4.s64 = ctx.r11.s64 + -6076;
	// bl 0x822e8058
	ctx.lr = 0x82130654;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82130684
	if (!ctx.cr6.eq) goto loc_82130684;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82130720
	if (ctx.cr6.eq) goto loc_82130720;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82130684
	if (!ctx.cr6.eq) goto loc_82130684;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8227cf18
	ctx.lr = 0x8213067C;
	sub_8227CF18(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130684:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82130720
	if (ctx.cr6.eq) goto loc_82130720;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82130720
	if (!ctx.cr6.gt) goto loc_82130720;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r10,r10,0,31,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82130708
	if (!ctx.cr6.eq) goto loc_82130708;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
	// addi r11,r31,-154
	ctx.r11.s64 = ctx.r31.s64 + -154;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82130764
	if (ctx.cr6.gt) goto loc_82130764;
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1756
	ctx.r12.s64 = ctx.r12.s64 + 1756;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82130708;
	case 1:
		goto loc_82130708;
	case 2:
		goto loc_82130764;
	case 3:
		goto loc_82130764;
	case 4:
		goto loc_82130764;
	case 5:
		goto loc_82130764;
	case 6:
		goto loc_82130764;
	case 7:
		goto loc_82130764;
	case 8:
		goto loc_82130764;
	case 9:
		goto loc_82130708;
	case 10:
		goto loc_82130708;
	default:
		return;
	}
	// lwz r16,1800(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1800);
	// lwz r16,1800(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1800);
	// lwz r16,1892(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1892);
	// lwz r16,1892(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1892);
	// lwz r16,1892(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1892);
	// lwz r16,1892(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1892);
	// lwz r16,1892(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1892);
	// lwz r16,1892(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1892);
	// lwz r16,1892(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1892);
	// lwz r16,1800(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1800);
	// lwz r16,1800(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1800);
loc_82130708:
	// cmpwi cr6,r31,96
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 96, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
	// cmpwi cr6,r31,126
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 126, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
	// cmpwi cr6,r31,27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 27, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
loc_82130720:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-10700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10700);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82130784
	if (ctx.cr6.eq) goto loc_82130784;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82130784
	if (!ctx.cr6.eq) goto loc_82130784;
	// cmpwi cr6,r31,165
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 165, ctx.xer);
	// bne cr6,0x8213076c
	if (!ctx.cr6.eq) goto loc_8213076C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82130794
	if (ctx.cr6.eq) goto loc_82130794;
	// lwz r11,1524(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130794
	if (ctx.cr6.eq) goto loc_82130794;
loc_82130760:
	// bl 0x82125f30
	ctx.lr = 0x82130764;
	sub_82125F30(ctx, base);
loc_82130764:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_8213076C:
	// cmpwi cr6,r31,96
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 96, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
	// cmpwi cr6,r31,126
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 126, ctx.xer);
	// bne cr6,0x82130794
	if (!ctx.cr6.eq) goto loc_82130794;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130784:
	// cmpwi cr6,r31,96
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 96, ctx.xer);
	// beq cr6,0x82130c58
	if (ctx.cr6.eq) goto loc_82130C58;
	// cmpwi cr6,r31,126
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 126, ctx.xer);
	// beq cr6,0x82130c58
	if (ctx.cr6.eq) goto loc_82130C58;
loc_82130794:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r8,r28,3364
	ctx.r8.s64 = ctx.r28.s64 + 3364;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130818
	if (ctx.cr6.eq) goto loc_82130818;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82130818
	if (!ctx.cr6.gt) goto loc_82130818;
	// cmpwi cr6,r31,27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 27, ctx.xer);
	// bne cr6,0x821307c8
	if (!ctx.cr6.eq) goto loc_821307C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stwx r11,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_821307C8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-9860
	ctx.r10.s64 = ctx.r10.s64 + -9860;
loc_821307DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x82130800
	if (ctx.cr6.eq) goto loc_82130800;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821307dc
	if (ctx.cr6.eq) goto loc_821307DC;
loc_82130800:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82130764
	if (!ctx.cr6.eq) goto loc_82130764;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130818:
	// addi r9,r27,12
	ctx.r9.s64 = ctx.r27.s64 + 12;
	// stwx r20,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r20.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r11,28832
	ctx.r29.s64 = ctx.r11.s64 + 28832;
	// lwzx r30,r26,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// beq cr6,0x82130880
	if (ctx.cr6.eq) goto loc_82130880;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// bge cr6,0x82130880
	if (!ctx.cr6.lt) goto loc_82130880;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82130850
	if (ctx.cr6.lt) goto loc_82130850;
	// lbz r11,388(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82130860
	if (!ctx.cr6.eq) goto loc_82130860;
loc_82130850:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82130860
	if (ctx.cr6.eq) goto loc_82130860;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82130880
	if (!ctx.cr6.eq) goto loc_82130880;
loc_82130860:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82130880
	if (!ctx.cr6.eq) goto loc_82130880;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r10,-28736
	ctx.r4.s64 = ctx.r10.s64 + -28736;
	// lwz r3,28828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28828);
	// bl 0x822e1fa8
	ctx.lr = 0x8213087C;
	sub_822E1FA8(ctx, base);
	// li r31,27
	ctx.r31.s64 = 27;
loc_82130880:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213089c
	if (ctx.cr6.eq) goto loc_8213089C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822c3cc8
	ctx.lr = 0x82130898;
	sub_822C3CC8(ctx, base);
	// b 0x821308a0
	goto loc_821308A0;
loc_8213089C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_821308A0:
	// cmpwi cr6,r31,27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 27, ctx.xer);
	// bne cr6,0x82130970
	if (!ctx.cr6.eq) goto loc_82130970;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82130978
	if (ctx.cr6.eq) goto loc_82130978;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821308c4
	if (ctx.cr6.eq) goto loc_821308C4;
	// bl 0x82125420
	ctx.lr = 0x821308C4;
	sub_82125420(ctx, base);
loc_821308C4:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82130958
	if (!ctx.cr6.eq) goto loc_82130958;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82130764
	if (!ctx.cr6.gt) goto loc_82130764;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x82130948
	if (!ctx.cr6.gt) goto loc_82130948;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x82130764
	if (!ctx.cr6.eq) goto loc_82130764;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82130934
	if (!ctx.cr6.eq) goto loc_82130934;
	// bl 0x8238da10
	ctx.lr = 0x82130904;
	sub_8238DA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82130920
	if (!ctx.cr6.eq) goto loc_82130920;
	// bl 0x8238da68
	ctx.lr = 0x82130914;
	sub_8238DA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82130934
	if (ctx.cr6.eq) goto loc_82130934;
loc_82130920:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,18812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18812);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82130764
	if (!ctx.cr6.eq) goto loc_82130764;
loc_82130934:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822c4c00
	ctx.lr = 0x82130940;
	sub_822C4C00(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130948:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821327c8
	ctx.lr = 0x82130950;
	sub_821327C8(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130958:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822c3bc0
	ctx.lr = 0x82130968;
	sub_822C3BC0(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130970:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82130a00
	if (!ctx.cr6.eq) goto loc_82130A00;
loc_82130978:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821309cc
	if (ctx.cr6.eq) goto loc_821309CC;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,43
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43, ctx.xer);
	// bne cr6,0x821309cc
	if (!ctx.cr6.eq) goto loc_821309CC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// addi r5,r10,-9884
	ctx.r5.s64 = ctx.r10.s64 + -9884;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x821309C0;
	sub_822E8368(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8227cf18
	ctx.lr = 0x821309CC;
	sub_8227CF18(ctx, base);
loc_821309CC:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822c3bc0
	ctx.lr = 0x821309F8;
	sub_822C3BC0(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130A00:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82130a60
	if (!ctx.cr6.eq) goto loc_82130A60;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130a58
	if (ctx.cr6.eq) goto loc_82130A58;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82130a2c
	if (!ctx.cr6.eq) goto loc_82130A2C;
	// li r31,27
	ctx.r31.s64 = 27;
	// b 0x82130a34
	goto loc_82130A34;
loc_82130A2C:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
loc_82130A34:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822c3bc0
	ctx.lr = 0x82130A50;
	sub_822C3BC0(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130A58:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82130a74
	if (!ctx.cr6.eq) goto loc_82130A74;
loc_82130A60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82130138
	ctx.lr = 0x82130A6C;
	sub_82130138(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130A74:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82130bf8
	if (!ctx.cr6.eq) goto loc_82130BF8;
	// cmpwi cr6,r31,207
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 207, ctx.xer);
	// blt cr6,0x82130764
	if (ctx.cr6.lt) goto loc_82130764;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82130ac0
	if (!ctx.cr6.eq) goto loc_82130AC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r5,r11,-6332
	ctx.r5.s64 = ctx.r11.s64 + -6332;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-9928
	ctx.r4.s64 = ctx.r11.s64 + -9928;
	// bl 0x82280900
	ctx.lr = 0x82130AB8;
	sub_82280900(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130AC0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82130bd8
	if (ctx.cr6.lt) goto loc_82130BD8;
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// bgt cr6,0x82130bd8
	if (ctx.cr6.gt) goto loc_82130BD8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// addi r30,r11,-16504
	ctx.r30.s64 = ctx.r11.s64 + -16504;
	// ble cr6,0x82130b28
	if (!ctx.cr6.gt) goto loc_82130B28;
	// cmpwi cr6,r31,127
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 127, ctx.xer);
	// bge cr6,0x82130b28
	if (!ctx.cr6.lt) goto loc_82130B28;
	// cmpwi cr6,r31,34
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 34, ctx.xer);
	// beq cr6,0x82130b28
	if (ctx.cr6.eq) goto loc_82130B28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfb10
	ctx.lr = 0x82130AF8;
	sub_823DFB10(ctx, base);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// cmpwi cr6,r31,59
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 59, ctx.xer);
	// stb r20,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r20.u8);
	// beq cr6,0x82130b28
	if (ctx.cr6.eq) goto loc_82130B28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-9928
	ctx.r4.s64 = ctx.r11.s64 + -9928;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82130B20;
	sub_82280900(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130B28:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r11,r10,1544
	ctx.r11.s64 = ctx.r10.s64 + 1544;
	// lwz r10,1544(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1544);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82130b54
	if (ctx.cr6.eq) goto loc_82130B54;
loc_82130B3C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82130b7c
	if (ctx.cr6.eq) goto loc_82130B7C;
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82130b3c
	if (!ctx.cr6.eq) goto loc_82130B3C;
loc_82130B54:
	// srawi r11,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 4;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,120
	ctx.r9.s64 = 120;
	// clrlwi r8,r31,28
	ctx.r8.u64 = ctx.r31.u32 & 0xF;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x82130b98
	if (!ctx.cr6.gt) goto loc_82130B98;
	// addi r11,r11,87
	ctx.r11.s64 = ctx.r11.s64 + 87;
	// b 0x82130b9c
	goto loc_82130B9C;
loc_82130B7C:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-9928
	ctx.r4.s64 = ctx.r11.s64 + -9928;
	// bl 0x82280900
	ctx.lr = 0x82130B90;
	sub_82280900(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130B98:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
loc_82130B9C:
	// stb r11,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// addi r11,r8,87
	ctx.r11.s64 = ctx.r8.s64 + 87;
	// bgt cr6,0x82130bb0
	if (ctx.cr6.gt) goto loc_82130BB0;
	// addi r11,r8,48
	ctx.r11.s64 = ctx.r8.s64 + 48;
loc_82130BB0:
	// stb r11,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r11.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r20,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r20.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-9928
	ctx.r4.s64 = ctx.r11.s64 + -9928;
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// bl 0x82280900
	ctx.lr = 0x82130BD0;
	sub_82280900(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130BD8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r5,r11,-6348
	ctx.r5.s64 = ctx.r11.s64 + -6348;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-9928
	ctx.r4.s64 = ctx.r11.s64 + -9928;
	// bl 0x82280900
	ctx.lr = 0x82130BF0;
	sub_82280900(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130BF8:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bne cr6,0x82130c34
	if (!ctx.cr6.eq) goto loc_82130C34;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// addi r5,r11,-9940
	ctx.r5.s64 = ctx.r11.s64 + -9940;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x82130C20;
	sub_822E8368(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8227cf18
	ctx.lr = 0x82130C2C;
	sub_8227CF18(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130C34:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8227cf18
	ctx.lr = 0x82130C40;
	sub_8227CF18(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// bl 0x8227cf18
	ctx.lr = 0x82130C50;
	sub_8227CF18(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82130C58:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82130764
	if (ctx.cr6.eq) goto loc_82130764;
	// lwz r11,1920(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130760
	if (ctx.cr6.eq) goto loc_82130760;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82125e58
	ctx.lr = 0x82130C74;
	sub_82125E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82130c84
	if (!ctx.cr6.eq) goto loc_82130C84;
	// bl 0x82125f30
	ctx.lr = 0x82130C84;
	sub_82125F30(ctx, base);
loc_82130C84:
	// bl 0x82125740
	ctx.lr = 0x82130C88;
	sub_82125740(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82130578) {
	__imp__sub_82130578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130C90) {
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
	// bl 0x82141110
	ctx.lr = 0x82130CB0;
	sub_82141110(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-32488
	ctx.r5.s64 = ctx.r11.s64 + -32488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8212ff90
	ctx.lr = 0x82130CC8;
	sub_8212FF90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82130cdc
	if (ctx.cr6.eq) goto loc_82130CDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82125478
	ctx.lr = 0x82130CDC;
	sub_82125478(ctx, base);
loc_82130CDC:
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

PPC_WEAK_FUNC(sub_82130C90) {
	__imp__sub_82130C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82130CF4) {
	__imp__sub_82130CF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130CF8) {
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
	// cmpwi cr6,r4,96
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 96, ctx.xer);
	// beq cr6,0x82130d98
	if (ctx.cr6.eq) goto loc_82130D98;
	// cmpwi cr6,r4,126
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 126, ctx.xer);
	// beq cr6,0x82130d98
	if (ctx.cr6.eq) goto loc_82130D98;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82130d5c
	if (ctx.cr6.eq) goto loc_82130D5C;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x82130d8c
	if (!ctx.cr6.eq) goto loc_82130D8C;
	// bl 0x82125420
	ctx.lr = 0x82130D50;
	sub_82125420(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x82130d88
	goto loc_82130D88;
loc_82130D5C:
	// rlwinm r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82130d7c
	if (ctx.cr6.eq) goto loc_82130D7C;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r30,1024
	ctx.r4.u64 = ctx.r30.u64 | 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3bc0
	ctx.lr = 0x82130D78;
	sub_822C3BC0(ctx, base);
	// b 0x82130d98
	goto loc_82130D98;
loc_82130D7C:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82130D88:
	// bne cr6,0x82130d98
	if (!ctx.cr6.eq) goto loc_82130D98;
loc_82130D8C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130c90
	ctx.lr = 0x82130D98;
	sub_82130C90(ctx, base);
loc_82130D98:
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

PPC_WEAK_FUNC(sub_82130CF8) {
	__imp__sub_82130CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130DB0) {
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822c3cc8
	ctx.lr = 0x82130DD4;
	sub_822C3CC8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82130de8
	if (ctx.cr6.eq) goto loc_82130DE8;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82130dec
	if (!ctx.cr6.eq) goto loc_82130DEC;
loc_82130DE8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82130DEC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82130e0c
	if (ctx.cr6.eq) goto loc_82130E0C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82130e10
	if (!ctx.cr6.eq) goto loc_82130E10;
loc_82130E0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82130E10:
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

PPC_WEAK_FUNC(sub_82130DB0) {
	__imp__sub_82130DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82130E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-30024
	ctx.r29.s64 = ctx.r11.s64 + -30024;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
loc_82130E44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c3cc8
	ctx.lr = 0x82130E4C;
	sub_822C3CC8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82130e60
	if (ctx.cr6.eq) goto loc_82130E60;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82130e64
	if (!ctx.cr6.eq) goto loc_82130E64;
loc_82130E60:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82130E64:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82130e84
	if (ctx.cr6.eq) goto loc_82130E84;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82130e88
	if (!ctx.cr6.eq) goto loc_82130E88;
loc_82130E84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82130E88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82130eb4
	if (!ctx.cr6.eq) goto loc_82130EB4;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 + 68;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82130e44
	if (ctx.cr6.lt) goto loc_82130E44;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82130EB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82130E28) {
	__imp__sub_82130E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130EC0) {
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
	// bl 0x821fc6c8
	ctx.lr = 0x82130EE0;
	sub_821FC6C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82130f68
	if (!ctx.cr6.eq) goto loc_82130F68;
	// bl 0x8233e418
	ctx.lr = 0x82130EEC;
	sub_8233E418(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82130f68
	if (ctx.cr6.eq) goto loc_82130F68;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec4e8
	ctx.lr = 0x82130F00;
	sub_822EC4E8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r31,12824
	ctx.r10.s64 = ctx.r31.s64 * 12824;
	// addi r11,r11,-16408
	ctx.r11.s64 = ctx.r11.s64 + -16408;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r8,128
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 128, ctx.xer);
	// ble cr6,0x82130f3c
	if (!ctx.cr6.gt) goto loc_82130F3C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec500
	ctx.lr = 0x82130F2C;
	sub_822EC500(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-5656
	ctx.r4.s64 = ctx.r11.s64 + -5656;
	// bl 0x822830e8
	ctx.lr = 0x82130F3C;
	sub_822830E8(ctx, base);
loc_82130F3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rlwinm r11,r11,6,19,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1FC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x822e7e98
	ctx.lr = 0x82130F60;
	sub_822E7E98(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec500
	ctx.lr = 0x82130F68;
	sub_822EC500(ctx, base);
loc_82130F68:
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

PPC_WEAK_FUNC(sub_82130EC0) {
	__imp__sub_82130EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130F80) {
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
	// bl 0x82283000
	ctx.lr = 0x82130F90;
	sub_82283000(ctx, base);
	// bl 0x8211ff88
	ctx.lr = 0x82130F94;
	sub_8211FF88(ctx, base);
	// bl 0x82136080
	ctx.lr = 0x82130F98;
	sub_82136080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82130F80) {
	__imp__sub_82130F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130FA8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r11,r11,48796
	ctx.r11.u64 = ctx.r11.u64 | 48796;
	// addi r8,r10,-29944
	ctx.r8.s64 = ctx.r10.s64 + -29944;
	// mullw r9,r4,r11
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e40f0
	ctx.lr = 0x82130FDC;
	sub_822E40F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82130FA8) {
	__imp__sub_82130FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82130FEC) {
	__imp__sub_82130FEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82130FF0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e4480
	ctx.lr = 0x82131014;
	sub_822E4480(ctx, base);
	// lbz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82131028
	if (ctx.cr6.lt) goto loc_82131028;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x8213104c
	if (!ctx.cr6.gt) goto loc_8213104C;
loc_82131028:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-5600
	ctx.r4.s64 = ctx.r11.s64 + -5600;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x82131040;
	sub_82280B08(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-5628
	ctx.r3.s64 = ctx.r10.s64 + -5628;
	// bl 0x8230d720
	ctx.lr = 0x8213104C;
	sub_8230D720(ctx, base);
loc_8213104C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// ori r8,r11,48796
	ctx.r8.u64 = ctx.r11.u64 | 48796;
	// neg r7,r31
	ctx.r7.s64 = -ctx.r31.s64;
	// mullw r10,r30,r8
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// addi r11,r9,-29944
	ctx.r11.s64 = ctx.r9.s64 + -29944;
	// andc r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r31.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
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

PPC_WEAK_FUNC(sub_82130FF0) {
	__imp__sub_82130FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x82131090;
	__savegprlr_16(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r31,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// addi r26,r11,-5968
	ctx.r26.s64 = ctx.r11.s64 + -5968;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// bl 0x822e5ed0
	ctx.lr = 0x821310BC;
	sub_822E5ED0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r27,r11,-5312
	ctx.r27.s64 = ctx.r11.s64 + -5312;
	// addi r29,r10,13712
	ctx.r29.s64 = ctx.r10.s64 + 13712;
	// addi r25,r9,-5356
	ctx.r25.s64 = ctx.r9.s64 + -5356;
	// addi r24,r8,-5400
	ctx.r24.s64 = ctx.r8.s64 + -5400;
	// addi r23,r7,-5416
	ctx.r23.s64 = ctx.r7.s64 + -5416;
	// addi r22,r6,-5436
	ctx.r22.s64 = ctx.r6.s64 + -5436;
	// addi r21,r5,-6052
	ctx.r21.s64 = ctx.r5.s64 + -6052;
	// addi r20,r4,-6060
	ctx.r20.s64 = ctx.r4.s64 + -6060;
loc_821310FC:
	// addi r3,r1,820
	ctx.r3.s64 = ctx.r1.s64 + 820;
	// bl 0x822e6d10
	ctx.lr = 0x82131104;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131668
	if (ctx.cr6.eq) goto loc_82131668;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82131194
	if (ctx.cr6.eq) goto loc_82131194;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82131124:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82131148
	if (ctx.cr6.eq) goto loc_82131148;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82131124
	if (ctx.cr6.eq) goto loc_82131124;
loc_82131148:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82131158
	if (!ctx.cr6.eq) goto loc_82131158;
	// addi r18,r18,-1
	ctx.r18.s64 = ctx.r18.s64 + -1;
	// b 0x8213165c
	goto loc_8213165C;
loc_82131158:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82131160:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82131184
	if (ctx.cr6.eq) goto loc_82131184;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82131160
	if (ctx.cr6.eq) goto loc_82131160;
loc_82131184:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8213165c
	if (!ctx.cr6.eq) goto loc_8213165C;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// b 0x8213165c
	goto loc_8213165C;
loc_82131194:
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// addi r28,r26,24
	ctx.r28.s64 = ctx.r26.s64 + 24;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821311e4
	if (ctx.cr6.eq) goto loc_821311E4;
loc_821311A4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821311A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821311cc
	if (ctx.cr6.eq) goto loc_821311CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821311a8
	if (ctx.cr6.eq) goto loc_821311A8;
loc_821311CC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821311e4
	if (ctx.cr6.eq) goto loc_821311E4;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821311a4
	if (!ctx.cr6.eq) goto loc_821311A4;
loc_821311E4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82131218
	if (!ctx.cr6.lt) goto loc_82131218;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82131204
	if (!ctx.cr6.eq) goto loc_82131204;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_82131204:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x82131218;
	sub_822830E8(ctx, base);
loc_82131218:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x82131258
	if (ctx.cr6.lt) goto loc_82131258;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82131244
	if (!ctx.cr6.eq) goto loc_82131244;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_82131244:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x82131258;
	sub_822830E8(ctx, base);
loc_82131258:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x8213164c
	if (ctx.cr6.gt) goto loc_8213164C;
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4732
	ctx.r12.s64 = ctx.r12.s64 + 4732;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821312C4;
	case 1:
		goto loc_8213130C;
	case 2:
		goto loc_82131354;
	case 3:
		goto loc_8213139C;
	case 4:
		goto loc_821313F4;
	case 5:
		goto loc_8213144C;
	case 6:
		goto loc_8213149C;
	case 7:
		goto loc_821314F4;
	case 8:
		goto loc_82131534;
	case 9:
		goto loc_82131568;
	case 10:
		goto loc_8213164C;
	case 11:
		goto loc_8213157C;
	case 12:
		goto loc_821315C8;
	case 13:
		goto loc_821315EC;
	case 14:
		goto loc_821315F4;
	case 15:
		goto loc_8213164C;
	case 16:
		goto loc_82131618;
	case 17:
		goto loc_82131634;
	default:
		return;
	}
	// lwz r16,4804(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4804);
	// lwz r16,4876(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4876);
	// lwz r16,4948(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4948);
	// lwz r16,5020(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5020);
	// lwz r16,5108(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5108);
	// lwz r16,5196(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5196);
	// lwz r16,5276(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5276);
	// lwz r16,5364(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5364);
	// lwz r16,5428(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5428);
	// lwz r16,5480(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5480);
	// lwz r16,5708(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5708);
	// lwz r16,5500(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5500);
	// lwz r16,5576(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5576);
	// lwz r16,5612(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5612);
	// lwz r16,5620(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5620);
	// lwz r16,5708(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5708);
	// lwz r16,5656(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5656);
	// lwz r16,5684(r19)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5684);
loc_821312C4:
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r8,r31,-2
	ctx.r8.s64 = ctx.r31.s64 + -2;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r3,r9,-64
	ctx.r3.s64 = ctx.r9.s64 + -64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823deaf8
	ctx.lr = 0x821312E8;
	sub_823DEAF8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x821312F4;
	sub_823DEAF8(ctx, base);
	// add r6,r16,r3
	ctx.r6.u64 = ctx.r16.u64 + ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb70
	ctx.lr = 0x82131308;
	sub_823DFB70(ctx, base);
	// b 0x8213164c
	goto loc_8213164C;
loc_8213130C:
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r31,-2
	ctx.r8.s64 = ctx.r31.s64 + -2;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r3,r9,-64
	ctx.r3.s64 = ctx.r9.s64 + -64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82131330;
	sub_823DEAF8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x8213133C;
	sub_823DEAF8(ctx, base);
	// subf r6,r16,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r16.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb70
	ctx.lr = 0x82131350;
	sub_823DFB70(ctx, base);
	// b 0x8213164c
	goto loc_8213164C;
loc_82131354:
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r31,-2
	ctx.r8.s64 = ctx.r31.s64 + -2;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r3,r9,-64
	ctx.r3.s64 = ctx.r9.s64 + -64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82131378;
	sub_823DEAF8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82131384;
	sub_823DEAF8(ctx, base);
	// mullw r6,r16,r3
	ctx.r6.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r3.s32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb70
	ctx.lr = 0x82131398;
	sub_823DFB70(ctx, base);
	// b 0x8213164c
	goto loc_8213164C;
loc_8213139C:
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r31,-2
	ctx.r8.s64 = ctx.r31.s64 + -2;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r3,r9,-64
	ctx.r3.s64 = ctx.r9.s64 + -64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823deaf8
	ctx.lr = 0x821313C0;
	sub_823DEAF8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x821313CC;
	sub_823DEAF8(ctx, base);
	// subfc r7,r3,r16
	ctx.xer.ca = ctx.r16.u32 >= ctx.r3.u32;
	ctx.r7.s64 = ctx.r16.s64 - ctx.r3.s64;
	// eqv r6,r3,r16
	ctx.r6.u64 = ~(ctx.r3.u64 ^ ctx.r16.u64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// li r4,64
	ctx.r4.s64 = 64;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	// bl 0x823dfb70
	ctx.lr = 0x821313F0;
	sub_823DFB70(ctx, base);
	// b 0x8213164c
	goto loc_8213164C;
loc_821313F4:
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r31,-2
	ctx.r8.s64 = ctx.r31.s64 + -2;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r3,r9,-64
	ctx.r3.s64 = ctx.r9.s64 + -64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82131418;
	sub_823DEAF8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82131424;
	sub_823DEAF8(ctx, base);
	// subfc r7,r16,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r16.u32;
	ctx.r7.s64 = ctx.r3.s64 - ctx.r16.s64;
	// eqv r6,r16,r3
	ctx.r6.u64 = ~(ctx.r16.u64 ^ ctx.r3.u64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// li r4,64
	ctx.r4.s64 = 64;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	// bl 0x823dfb70
	ctx.lr = 0x82131448;
	sub_823DFB70(ctx, base);
	// b 0x8213164c
	goto loc_8213164C;
loc_8213144C:
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r31,-2
	ctx.r8.s64 = ctx.r31.s64 + -2;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r3,r9,-64
	ctx.r3.s64 = ctx.r9.s64 + -64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82131470;
	sub_823DEAF8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x8213147C;
	sub_823DEAF8(ctx, base);
	// subf r7,r3,r16
	ctx.r7.s64 = ctx.r16.s64 - ctx.r3.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb70
	ctx.lr = 0x82131498;
	sub_823DFB70(ctx, base);
	// b 0x8213164c
	goto loc_8213164C;
loc_8213149C:
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
loc_821314C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821314e4
	if (ctx.cr6.eq) goto loc_821314E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821314c0
	if (ctx.cr6.eq) goto loc_821314C0;
loc_821314E4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x823dfb70
	ctx.lr = 0x821314F0;
	sub_823DFB70(ctx, base);
	// b 0x8213164c
	goto loc_8213164C;
loc_821314F4:
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r11,-64
	ctx.r7.s64 = ctx.r11.s64 + -64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823dfb70
	ctx.lr = 0x82131528;
	sub_823DFB70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82131644
	goto loc_82131644;
loc_82131534:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-64
	ctx.r30.s64 = ctx.r11.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x8213154C;
	sub_823DEAF8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfb70
	ctx.lr = 0x82131564;
	sub_823DFB70(ctx, base);
	// b 0x8213164c
	goto loc_8213164C;
loc_82131568:
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r3,-64
	ctx.r4.s64 = ctx.r3.s64 + -64;
	// b 0x82131644
	goto loc_82131644;
loc_8213157C:
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8213159C;
	sub_822E7E98(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r30,r11,-64
	ctx.r30.s64 = ctx.r11.s64 + -64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x821315BC;
	sub_822E7E98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82131644
	goto loc_82131644;
loc_821315C8:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-64
	ctx.r30.s64 = ctx.r11.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e0578
	ctx.lr = 0x821315E0;
	sub_822E0578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82131644
	goto loc_82131644;
loc_821315EC:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// b 0x82131638
	goto loc_82131638;
loc_821315F4:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// bl 0x823deaf8
	ctx.lr = 0x82131608;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213164c
	if (!ctx.cr6.eq) goto loc_8213164C;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8213164c
	goto loc_8213164C;
loc_82131618:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// li r5,256
	ctx.r5.s64 = 256;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// b 0x82131648
	goto loc_82131648;
loc_82131634:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82131638:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82131644:
	// li r5,64
	ctx.r5.s64 = 64;
loc_82131648:
	// bl 0x822e7e98
	ctx.lr = 0x8213164C;
	sub_822E7E98(ctx, base);
loc_8213164C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8213165C:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821310fc
	if (ctx.cr6.eq) goto loc_821310FC;
loc_82131668:
	// bl 0x822e5fb0
	ctx.lr = 0x8213166C;
	sub_822E5FB0(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82131688
	if (ctx.cr6.eq) goto loc_82131688;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-5460
	ctx.r4.s64 = ctx.r11.s64 + -5460;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x82131688;
	sub_822830E8(ctx, base);
loc_82131688:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821316a8
	if (!ctx.cr6.eq) goto loc_821316A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-5496
	ctx.r4.s64 = ctx.r11.s64 + -5496;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x821316A8;
	sub_822830E8(ctx, base);
loc_821316A8:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82131088) {
	__imp__sub_82131088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821316B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821316B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x822db808
	ctx.lr = 0x821316D4;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x821316DC;
	sub_822DB8F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r30,r11,-5968
	ctx.r30.s64 = ctx.r11.s64 + -5968;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821775a8
	ctx.lr = 0x821316F8;
	sub_821775A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82131714
	if (!ctx.cr6.eq) goto loc_82131714;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-5304
	ctx.r4.s64 = ctx.r11.s64 + -5304;
	// bl 0x822830e8
	ctx.lr = 0x82131714;
	sub_822830E8(ctx, base);
loc_82131714:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82131088
	ctx.lr = 0x82131724;
	sub_82131088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x8213172C;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821316B0) {
	__imp__sub_821316B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82131734) {
	__imp__sub_82131734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821316b0
	ctx.lr = 0x8213174C;
	sub_821316B0(ctx, base);
	// bl 0x82176638
	ctx.lr = 0x82131750;
	sub_82176638(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238d450
	ctx.lr = 0x8213175C;
	sub_8238D450(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82131738) {
	__imp__sub_82131738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213176C) {
	__imp__sub_8213176C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821316b0
	ctx.lr = 0x82131784;
	sub_821316B0(ctx, base);
	// bl 0x82176638
	ctx.lr = 0x82131788;
	sub_82176638(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238d450
	ctx.lr = 0x82131794;
	sub_8238D450(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82131770) {
	__imp__sub_82131770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821317A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821317A4) {
	__imp__sub_821317A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821317A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821317A8) {
	__imp__sub_821317A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821317AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821317AC) {
	__imp__sub_821317AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821317B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,28832
	ctx.r11.s64 = ctx.r11.s64 + 28832;
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 584, ctx.r10.u32);
	// bne 0x821317d0
	if (!ctx.cr0.eq) goto loc_821317D0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 584, ctx.r10.u32);
loc_821317D0:
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,607
	ctx.r9.s64 = ctx.r11.s64 + 607;
	// ori r8,r10,592
	ctx.r8.u64 = ctx.r10.u64 | 592;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r9,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r7,588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 588, ctx.r7.u32);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821317B0) {
	__imp__sub_821317B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821317F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821317F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,28832
	ctx.r30.s64 = ctx.r11.s64 + 28832;
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// addi r31,r11,598
	ctx.r31.s64 = ctx.r11.s64 + 598;
loc_82131810:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131824
	if (ctx.cr6.eq) goto loc_82131824;
	// bl 0x822a2468
	ctx.lr = 0x82131820;
	sub_822A2468(ctx, base);
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
loc_82131824:
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r11,6632
	ctx.r11.s64 = ctx.r11.s64 + 6632;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82131810
	if (ctx.cr6.lt) goto loc_82131810;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821317F0) {
	__imp__sub_821317F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82131848;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822576c8
	ctx.lr = 0x82131854;
	sub_822576C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210ca80
	ctx.lr = 0x82131868;
	sub_8210CA80(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r28,-32190
	ctx.r28.s64 = -2109603840;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
	// lis r27,-32166
	ctx.r27.s64 = -2108030976;
loc_82131888:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821318ac
	if (!ctx.cr6.eq) goto loc_821318AC;
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
	// b 0x821318bc
	goto loc_821318BC;
loc_821318AC:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_821318BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821318e8
	if (ctx.cr6.eq) goto loc_821318E8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x821318d8
	if (ctx.cr6.eq) goto loc_821318D8;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_821318D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210cdd8
	ctx.lr = 0x821318E4;
	sub_8210CDD8(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_821318E8:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r29,19584
	ctx.r11.s64 = ctx.r29.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82131888
	if (ctx.cr6.lt) goto loc_82131888;
	// bl 0x8210c0d0
	ctx.lr = 0x82131900;
	sub_8210C0D0(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
loc_8213190C:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82131930
	if (!ctx.cr6.eq) goto loc_82131930;
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
	// b 0x82131940
	goto loc_82131940;
loc_82131930:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82131940:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131964
	if (ctx.cr6.eq) goto loc_82131964;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8213195c
	if (ctx.cr6.eq) goto loc_8213195C;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_8213195C:
	// bl 0x8210c648
	ctx.lr = 0x82131960;
	sub_8210C648(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_82131964:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r29,19584
	ctx.r11.s64 = ctx.r29.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213190c
	if (ctx.cr6.lt) goto loc_8213190C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82367820
	ctx.lr = 0x82131980;
	sub_82367820(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r30,r11,28832
	ctx.r30.s64 = ctx.r11.s64 + 28832;
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// addi r31,r11,598
	ctx.r31.s64 = ctx.r11.s64 + 598;
loc_82131990:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821319a4
	if (ctx.cr6.eq) goto loc_821319A4;
	// bl 0x822a2468
	ctx.lr = 0x821319A0;
	sub_822A2468(ctx, base);
	// sth r26,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r26.u16);
loc_821319A4:
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r11,6632
	ctx.r11.s64 = ctx.r11.s64 + 6632;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82131990
	if (ctx.cr6.lt) goto loc_82131990;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r3,r11,-29944
	ctx.r3.s64 = ctx.r11.s64 + -29944;
	// ori r5,r5,32056
	ctx.r5.u64 = ctx.r5.u64 | 32056;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821319D0;
	sub_823DE090(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82284950
	ctx.lr = 0x821319D8;
	sub_82284950(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r5,25648
	ctx.r5.s64 = 25648;
	// addi r3,r10,-16408
	ctx.r3.s64 = ctx.r10.s64 + -16408;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821319EC;
	sub_823DE090(ctx, base);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r8,r9,6636
	ctx.r8.u64 = ctx.r9.u64 | 6636;
	// stwx r26,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82131840) {
	__imp__sub_82131840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131A08) {
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
	// beq cr6,0x82131aa0
	if (ctx.cr6.eq) goto loc_82131AA0;
	// bl 0x821213a8
	ctx.lr = 0x82131A3C;
	sub_821213A8(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// bl 0x822576c8
	ctx.lr = 0x82131A58;
	sub_822576C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ef70
	ctx.lr = 0x82131A60;
	sub_8217EF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a4a0
	ctx.lr = 0x82131A68;
	sub_8236A4A0(ctx, base);
	// bl 0x821285f0
	ctx.lr = 0x82131A6C;
	sub_821285F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82131A74;
	sub_82141340(ctx, base);
	// bl 0x8230fd50
	ctx.lr = 0x82131A78;
	sub_8230FD50(ctx, base);
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r3,r11,-360
	ctx.r3.s64 = ctx.r11.s64 + -360;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131a90
	if (ctx.cr6.eq) goto loc_82131A90;
	// bl 0x8235aba0
	ctx.lr = 0x82131A90;
	sub_8235ABA0(ctx, base);
loc_82131A90:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141400
	ctx.lr = 0x82131A9C;
	sub_82141400(ctx, base);
	// bl 0x82120800
	ctx.lr = 0x82131AA0;
	sub_82120800(ctx, base);
loc_82131AA0:
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

PPC_WEAK_FUNC(sub_82131A08) {
	__imp__sub_82131A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82131AB4) {
	__imp__sub_82131AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131AB8) {
	PPC_FUNC_PROLOGUE();
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
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82131ae8
	if (!ctx.cr6.gt) goto loc_82131AE8;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82131af0
	goto loc_82131AF0;
loc_82131AE8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
loc_82131AF0:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,45
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 45, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r8,r11,28832
	ctx.r8.s64 = ctx.r11.s64 + 28832;
	// lbz r7,388(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 388);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82131b4c
	if (!ctx.cr6.eq) goto loc_82131B4C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r8,r3,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82131b4c
	if (ctx.cr6.eq) goto loc_82131B4C;
	// cmpwi cr6,r10,43
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 43, ctx.xer);
	// beq cr6,0x82131b4c
	if (ctx.cr6.eq) goto loc_82131B4C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82131b44
	if (!ctx.cr6.gt) goto loc_82131B44;
	// b 0x82130ec0
	sub_82130EC0(ctx, base);
	return;
loc_82131B44:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82130ec0
	sub_82130EC0(ctx, base);
	return;
loc_82131B4C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-5284
	ctx.r4.s64 = ctx.r11.s64 + -5284;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82131AB8) {
	__imp__sub_82131AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131B5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82131B5C) {
	__imp__sub_82131B5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r10,r10,-30024
	ctx.r10.s64 = ctx.r10.s64 + -30024;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r31,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// bne cr6,0x82131bf8
	if (!ctx.cr6.eq) goto loc_82131BF8;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r8,r9,28832
	ctx.r8.s64 = ctx.r9.s64 + 28832;
	// lbz r7,388(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 388);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82131bf8
	if (!ctx.cr6.eq) goto loc_82131BF8;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82131c08
	if (!ctx.cr6.gt) goto loc_82131C08;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8227d3c8
	ctx.lr = 0x82131BD8;
	sub_8227D3C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130ec0
	ctx.lr = 0x82131BE4;
	sub_82130EC0(ctx, base);
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82131BF8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-5260
	ctx.r4.s64 = ctx.r11.s64 + -5260;
	// bl 0x82280900
	ctx.lr = 0x82131C08;
	sub_82280900(ctx, base);
loc_82131C08:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82131B60) {
	__imp__sub_82131B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82131C1C) {
	__imp__sub_82131C1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r11,r11,28832
	ctx.r11.s64 = ctx.r11.s64 + 28832;
	// ori r9,r10,6632
	ctx.r9.u64 = ctx.r10.u64 | 6632;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// ori r8,r10,6633
	ctx.r8.u64 = ctx.r10.u64 | 6633;
	// addi r7,r9,-30024
	ctx.r7.s64 = ctx.r9.s64 + -30024;
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82131C20) {
	__imp__sub_82131C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131C68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82131C68) {
	__imp__sub_82131C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82131C6C) {
	__imp__sub_82131C6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131C70) {
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
	// beq cr6,0x82131cec
	if (ctx.cr6.eq) goto loc_82131CEC;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r11,-9420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9420, ctx.r11.u32);
	// addi r4,r8,-28736
	ctx.r4.s64 = ctx.r8.s64 + -28736;
	// lwz r3,-9396(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9396);
	// bl 0x822e1fa8
	ctx.lr = 0x82131CC0;
	sub_822E1FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82131a08
	ctx.lr = 0x82131CC8;
	sub_82131A08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141400
	ctx.lr = 0x82131CD4;
	sub_82141400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c2b88
	ctx.lr = 0x82131CDC;
	sub_822C2B88(ctx, base);
	// lis r7,-32155
	ctx.r7.s64 = -2107310080;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r6,r7,-30024
	ctx.r6.s64 = ctx.r7.s64 + -30024;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
loc_82131CEC:
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

PPC_WEAK_FUNC(sub_82131C70) {
	__imp__sub_82131C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131D00) {
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
	// bl 0x82287ba0
	ctx.lr = 0x82131D20;
	sub_82287BA0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// ori r8,r10,6636
	ctx.r8.u64 = ctx.r10.u64 | 6636;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r31,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u32);
	// bl 0x82134f18
	ctx.lr = 0x82131D3C;
	sub_82134F18(ctx, base);
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

PPC_WEAK_FUNC(sub_82131D00) {
	__imp__sub_82131D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82131D54) {
	__imp__sub_82131D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// stw r3,348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 348, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82131D58) {
	__imp__sub_82131D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131D68) {
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
	// bl 0x8230be48
	ctx.lr = 0x82131D80;
	sub_8230BE48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131e0c
	if (ctx.cr6.eq) goto loc_82131E0C;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82131e0c
	if (!ctx.cr6.eq) goto loc_82131E0C;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82131e0c
	if (ctx.cr6.eq) goto loc_82131E0C;
	// bl 0x8238da10
	ctx.lr = 0x82131DB8;
	sub_8238DA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82131dd4
	if (!ctx.cr6.eq) goto loc_82131DD4;
	// bl 0x8238da68
	ctx.lr = 0x82131DC8;
	sub_8238DA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131de8
	if (ctx.cr6.eq) goto loc_82131DE8;
loc_82131DD4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,18812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18812);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82131e0c
	if (!ctx.cr6.eq) goto loc_82131E0C;
loc_82131DE8:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa08
	ctx.lr = 0x82131DF4;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82131e0c
	if (!ctx.cr6.eq) goto loc_82131E0C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c4c00
	ctx.lr = 0x82131E0C;
	sub_822C4C00(ctx, base);
loc_82131E0C:
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

PPC_WEAK_FUNC(sub_82131D68) {
	__imp__sub_82131D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82131E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// ori r8,r10,6632
	ctx.r8.u64 = ctx.r10.u64 | 6632;
	// addi r11,r11,28832
	ctx.r11.s64 = ctx.r11.s64 + 28832;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r30,r10,-30024
	ctx.r30.s64 = ctx.r10.s64 + -30024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// add r29,r9,r30
	ctx.r29.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82131f5c
	if (ctx.cr6.eq) goto loc_82131F5C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82131f00
	if (!ctx.cr6.eq) goto loc_82131F00;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,336
	ctx.r7.s64 = ctx.r11.s64 + 336;
loc_82131E6C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82131e6c
	if (!ctx.cr0.eq) goto loc_82131E6C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82131e9c
	if (ctx.cr6.eq) goto loc_82131E9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x82131E9C;
	sub_822C4C00(ctx, base);
loc_82131E9C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82131f00
	if (!ctx.cr6.eq) goto loc_82131F00;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82131f00
	if (!ctx.cr6.eq) goto loc_82131F00;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lwz r10,-9384(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9384);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82131f00
	if (!ctx.cr6.eq) goto loc_82131F00;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82131ee8
	if (ctx.cr6.eq) goto loc_82131EE8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8212fa30
	ctx.lr = 0x82131EE4;
	sub_8212FA30(ctx, base);
	// b 0x82131f00
	goto loc_82131F00;
loc_82131EE8:
	// bl 0x82367820
	ctx.lr = 0x82131EEC;
	sub_82367820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822cc298
	ctx.lr = 0x82131EF4;
	sub_822CC298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x82131F00;
	sub_822C4C00(ctx, base);
loc_82131F00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821413c8
	ctx.lr = 0x82131F08;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131f5c
	if (ctx.cr6.eq) goto loc_82131F5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82131d68
	ctx.lr = 0x82131F1C;
	sub_82131D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821385e0
	ctx.lr = 0x82131F24;
	sub_821385E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82131F2C;
	sub_82141340(ctx, base);
	// bl 0x823606e8
	ctx.lr = 0x82131F30;
	sub_823606E8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82131f54
	if (ctx.cr6.eq) goto loc_82131F54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82131F48;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821297d8
	ctx.lr = 0x82131F54;
	sub_821297D8(ctx, base);
loc_82131F54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f7c48
	ctx.lr = 0x82131F5C;
	sub_820F7C48(ctx, base);
loc_82131F5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82131E20) {
	__imp__sub_82131E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82131F64) {
	__imp__sub_82131F64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131F68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r8,r11,-6
	ctx.r8.s64 = ctx.r11.s64 + -6;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82131F68) {
	__imp__sub_82131F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82131F8C) {
	__imp__sub_82131F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// neg r6,r7
	ctx.r6.s64 = -ctx.r7.s64;
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// rlwinm r3,r5,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82131F90) {
	__imp__sub_82131F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131FB8) {
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
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82131fe4
	if (ctx.cr6.eq) goto loc_82131FE4;
	// bl 0x82140fd8
	ctx.lr = 0x82131FDC;
	sub_82140FD8(ctx, base);
	// bl 0x82141040
	ctx.lr = 0x82131FE0;
	sub_82141040(ctx, base);
	// bl 0x82120800
	ctx.lr = 0x82131FE4;
	sub_82120800(ctx, base);
loc_82131FE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82131FB8) {
	__imp__sub_82131FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82131FF4) {
	__imp__sub_82131FF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82131FF8) {
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,28832
	ctx.r31.s64 = ctx.r10.s64 + 28832;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// bl 0x8238eb10
	ctx.lr = 0x82132020;
	sub_8238EB10(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82132038
	if (ctx.cr6.eq) goto loc_82132038;
	// bl 0x82140fd8
	ctx.lr = 0x82132030;
	sub_82140FD8(ctx, base);
	// bl 0x82141040
	ctx.lr = 0x82132034;
	sub_82141040(ctx, base);
	// bl 0x82120800
	ctx.lr = 0x82132038;
	sub_82120800(ctx, base);
loc_82132038:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-32736
	ctx.r3.s64 = ctx.r11.s64 + -32736;
	// bl 0x8238bd98
	ctx.lr = 0x82132048;
	sub_8238BD98(ctx, base);
	// stw r3,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r10,-5212
	ctx.r3.s64 = ctx.r10.s64 + -5212;
	// bl 0x8238bd98
	ctx.lr = 0x8213205C;
	sub_8238BD98(ctx, base);
	// stw r3,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r9,-5232
	ctx.r3.s64 = ctx.r9.s64 + -5232;
	// bl 0x8238b538
	ctx.lr = 0x82132070;
	sub_8238B538(ctx, base);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r6,r8,-32488
	ctx.r6.s64 = ctx.r8.s64 + -32488;
	// stw r3,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
	// lis r5,-32191
	ctx.r5.s64 = -2109669376;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,1360(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stw r10,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r10.u32);
	// stw r11,1356(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1356, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// bl 0x8228b080
	ctx.lr = 0x821320A8;
	sub_8228B080(ctx, base);
	// bl 0x82121ce8
	ctx.lr = 0x821320AC;
	sub_82121CE8(ctx, base);
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

PPC_WEAK_FUNC(sub_82131FF8) {
	__imp__sub_82131FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821320C0) {
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
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,28832
	ctx.r31.s64 = ctx.r10.s64 + 28832;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// bl 0x8238ea00
	ctx.lr = 0x821320E4;
	sub_8238EA00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// bl 0x82121d10
	ctx.lr = 0x82132100;
	sub_82121D10(ctx, base);
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

PPC_WEAK_FUNC(sub_821320C0) {
	__imp__sub_821320C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82132114) {
	__imp__sub_82132114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r11,r11,28832
	ctx.r11.s64 = ctx.r11.s64 + 28832;
	// ori r9,r10,6632
	ctx.r9.u64 = ctx.r10.u64 | 6632;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x821360f0
	sub_821360F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82132118) {
	__imp__sub_82132118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132144) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82132144) {
	__imp__sub_82132144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r3,352(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82132148) {
	__imp__sub_82132148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132158) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-5204
	ctx.r4.s64 = ctx.r11.s64 + -5204;
	// bl 0x82280900
	ctx.lr = 0x82132174;
	sub_82280900(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,2080
	ctx.r9.s64 = 2080;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,2047
	ctx.r8.s64 = 2047;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r7,2046
	ctx.r7.s64 = 2046;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r4,37
	ctx.r4.s64 = 37;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r11.u16);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// bl 0x8238eed0
	ctx.lr = 0x821321C4;
	sub_8238EED0(ctx, base);
	// lis r3,-31936
	ctx.r3.s64 = -2092957696;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9404(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9404);
	// bl 0x822e1f80
	ctx.lr = 0x821321D4;
	sub_822E1F80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82132158) {
	__imp__sub_82132158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821321E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821321E4) {
	__imp__sub_821321E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821321E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821321E8) {
	__imp__sub_821321E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821321EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821321EC) {
	__imp__sub_821321EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821321F0) {
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
	// bl 0x821414f0
	ctx.lr = 0x82132200;
	sub_821414F0(ctx, base);
	// bl 0x82360460
	ctx.lr = 0x82132204;
	sub_82360460(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x82132208;
	sub_8230A490(ctx, base);
	// bl 0x8213a288
	ctx.lr = 0x8213220C;
	sub_8213A288(ctx, base);
	// bl 0x82283000
	ctx.lr = 0x82132210;
	sub_82283000(ctx, base);
	// bl 0x8228beb8
	ctx.lr = 0x82132214;
	sub_8228BEB8(ctx, base);
	// bl 0x8238e840
	ctx.lr = 0x82132218;
	sub_8238E840(ctx, base);
	// bl 0x82280530
	ctx.lr = 0x8213221C;
	sub_82280530(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// addi r9,r10,11336
	ctx.r9.s64 = ctx.r10.s64 + 11336;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r11,-16764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16764);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r8,4
	ctx.r11.u64 = ctx.r8.u64 | 4;
	// stb r11,905(r9)
	PPC_STORE_U8(ctx.r9.u32 + 905, ctx.r11.u8);
	// bl 0x823f1114
	ctx.lr = 0x82132244;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,-5168
	ctx.r3.s64 = ctx.r7.s64 + -5168;
	// bl 0x8236b030
	ctx.lr = 0x82132254;
	sub_8236B030(ctx, base);
}

PPC_WEAK_FUNC(sub_821321F0) {
	__imp__sub_821321F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82132254) {
	__imp__sub_82132254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132258) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-5068
	ctx.r4.s64 = ctx.r11.s64 + -5068;
	// bl 0x82280a68
	ctx.lr = 0x8213227C;
	sub_82280A68(ctx, base);
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
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
	// ble cr6,0x821322b4
	if (!ctx.cr6.gt) goto loc_821322B4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x821322b8
	goto loc_821322B8;
loc_821322B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821322B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-5076
	ctx.r4.s64 = ctx.r11.s64 + -5076;
	// bl 0x822e8058
	ctx.lr = 0x821322C4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821322e0
	if (ctx.cr6.eq) goto loc_821322E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-5152
	ctx.r4.s64 = ctx.r11.s64 + -5152;
	// bl 0x82280a68
	ctx.lr = 0x821322DC;
	sub_82280A68(ctx, base);
	// b 0x82132358
	goto loc_82132358;
loc_821322E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bge cr6,0x82132300
	if (!ctx.cr6.lt) goto loc_82132300;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82132328
	goto loc_82132328;
loc_82132300:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82132318
	if (!ctx.cr6.gt) goto loc_82132318;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x8213231c
	goto loc_8213231C;
loc_82132318:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8213231C:
	// bl 0x823deaf8
	ctx.lr = 0x82132320;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82132328:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8213234c
	if (!ctx.cr6.gt) goto loc_8213234C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82132350
	goto loc_82132350;
loc_8213234C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82132350:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8230d718
	ctx.lr = 0x82132358;
	sub_8230D718(ctx, base);
loc_82132358:
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

PPC_WEAK_FUNC(sub_82132258) {
	__imp__sub_82132258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132370) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,14160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14160);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,340(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// lwz r3,28800(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28800);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// lfs f12,13988(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13988);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// fmadds f31,f7,f12,f8
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821323d8
	if (!ctx.cr6.gt) goto loc_821323D8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821323D8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1f88
	ctx.lr = 0x821323E0;
	sub_822E1F88(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-5044
	ctx.r4.s64 = ctx.r11.s64 + -5044;
	// bl 0x82280900
	ctx.lr = 0x821323FC;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_82132370) {
	__imp__sub_82132370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132410) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,14160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14160);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,340(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// lwz r3,28800(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28800);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// lfs f12,13988(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13988);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// fnmsubs f31,f7,f12,f8
	ctx.f31.f64 = double(float(-(ctx.f7.f64 * ctx.f12.f64 - ctx.f8.f64)));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82132478
	if (!ctx.cr6.lt) goto loc_82132478;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82132478:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1f88
	ctx.lr = 0x82132480;
	sub_822E1F88(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-5044
	ctx.r4.s64 = ctx.r11.s64 + -5044;
	// bl 0x82280900
	ctx.lr = 0x8213249C;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_82132410) {
	__imp__sub_82132410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821324B0) {
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
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82132528
	if (!ctx.cr6.eq) goto loc_82132528;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x821285f0
	ctx.lr = 0x821324E8;
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
	// beq cr6,0x82132528
	if (ctx.cr6.eq) goto loc_82132528;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-27340
	ctx.r3.s64 = ctx.r11.s64 + -27340;
	// bl 0x822e84f0
	ctx.lr = 0x8213250C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x82132518;
	sub_8227CF18(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,-9396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9396);
	// addi r4,r10,-28736
	ctx.r4.s64 = ctx.r10.s64 + -28736;
	// bl 0x822e1fa8
	ctx.lr = 0x82132528;
	sub_822E1FA8(ctx, base);
loc_82132528:
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

PPC_WEAK_FUNC(sub_821324B0) {
	__imp__sub_821324B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213253C) {
	__imp__sub_8213253C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82132548;
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r11,-17592
	ctx.r30.s64 = ctx.r11.s64 + -17592;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x82132594
	if (ctx.cr6.eq) goto loc_82132594;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-5000
	ctx.r4.s64 = ctx.r11.s64 + -5000;
	// bl 0x82280900
	ctx.lr = 0x82132584;
	sub_82280900(ctx, base);
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
loc_82132594:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-5016
	ctx.r4.s64 = ctx.r11.s64 + -5016;
	// bl 0x82280a68
	ctx.lr = 0x821325A0;
	sub_82280A68(ctx, base);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// addi r11,r10,-30024
	ctx.r11.s64 = ctx.r10.s64 + -30024;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r7,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r6,r29,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821325d8
	if (!ctx.cr6.eq) goto loc_821325D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821213a8
	ctx.lr = 0x821325D4;
	sub_821213A8(ctx, base);
	// b 0x821325f4
	goto loc_821325F4;
loc_821325D8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821325ec
	if (!ctx.cr6.eq) goto loc_821325EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821324b0
	ctx.lr = 0x821325E8;
	sub_821324B0(ctx, base);
	// b 0x821325f4
	goto loc_821325F4;
loc_821325EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821327b4
	if (!ctx.cr6.eq) goto loc_821327B4;
loc_821325F4:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82132614
	if (ctx.cr6.eq) goto loc_82132614;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c4c00
	ctx.lr = 0x82132614;
	sub_822C4C00(ctx, base);
loc_82132614:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82367820
	ctx.lr = 0x8213261C;
	sub_82367820(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x8213262C;
	sub_8236A638(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8213265c
	if (!ctx.cr6.gt) goto loc_8213265C;
	// addi r9,r30,100
	ctx.r9.s64 = ctx.r30.s64 + 100;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82132660
	goto loc_82132660;
loc_8213265C:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82132660:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x82132678
	if (!ctx.cr6.gt) goto loc_82132678;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8213267c
	goto loc_8213267C;
loc_82132678:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8213267C:
	// bl 0x823dec00
	ctx.lr = 0x82132680;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821326A0;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// ble cr6,0x821326dc
	if (!ctx.cr6.gt) goto loc_821326DC;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x821326e0
	goto loc_821326E0;
loc_821326DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821326E0:
	// bl 0x823dec00
	ctx.lr = 0x821326E4;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821326F4;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// ble cr6,0x82132730
	if (!ctx.cr6.gt) goto loc_82132730;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82132734
	goto loc_82132734;
loc_82132730:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82132734:
	// bl 0x823dec00
	ctx.lr = 0x82132738;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82132748;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-5020
	ctx.r3.s64 = ctx.r11.s64 + -5020;
	// lwz r9,368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// bl 0x822e84f0
	ctx.lr = 0x82132780;
	sub_822E84F0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8238bd98
	ctx.lr = 0x82132788;
	sub_8238BD98(ctx, base);
	// stw r3,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r10,-5024
	ctx.r3.s64 = ctx.r10.s64 + -5024;
	// bl 0x822e84f0
	ctx.lr = 0x8213279C;
	sub_822E84F0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8238bd98
	ctx.lr = 0x821327A4;
	sub_8238BD98(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
loc_821327B4:
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

PPC_WEAK_FUNC(sub_82132540) {
	__imp__sub_82132540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821327C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821327C4) {
	__imp__sub_821327C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821327C8) {
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
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82132804
	if (!ctx.cr6.eq) goto loc_82132804;
	// bl 0x82121440
	ctx.lr = 0x82132800;
	sub_82121440(ctx, base);
	// b 0x82132808
	goto loc_82132808;
loc_82132804:
	// bl 0x821324b0
	ctx.lr = 0x82132808;
	sub_821324B0(ctx, base);
loc_82132808:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82367820
	ctx.lr = 0x82132810;
	sub_82367820(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82132824
	if (ctx.cr6.eq) goto loc_82132824;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82132824:
	// bl 0x822c4c00
	ctx.lr = 0x82132828;
	sub_822C4C00(ctx, base);
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

PPC_WEAK_FUNC(sub_821327C8) {
	__imp__sub_821327C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132840) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213285C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa08
	ctx.lr = 0x82132868;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213289c
	if (!ctx.cr6.eq) goto loc_8213289C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8213285c
	if (ctx.cr6.lt) goto loc_8213285C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82132884:
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
loc_8213289C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82132884
	goto loc_82132884;
}

PPC_WEAK_FUNC(sub_82132840) {
	__imp__sub_82132840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821328A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821328A4) {
	__imp__sub_821328A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821328A8) {
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
	// lis r30,-31936
	ctx.r30.s64 = -2092957696;
	// lwz r11,-9404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9404);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82132904
	if (!ctx.cr6.eq) goto loc_82132904;
	// bl 0x8238da10
	ctx.lr = 0x821328D4;
	sub_8238DA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821328f0
	if (!ctx.cr6.eq) goto loc_821328F0;
	// bl 0x8238da68
	ctx.lr = 0x821328E4;
	sub_8238DA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82132904
	if (ctx.cr6.eq) goto loc_82132904;
loc_821328F0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,18812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18812);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821329b0
	if (!ctx.cr6.eq) goto loc_821329B0;
loc_82132904:
	// bl 0x822c6d68
	ctx.lr = 0x82132908;
	sub_822C6D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821329b0
	if (!ctx.cr6.eq) goto loc_821329B0;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130db0
	ctx.lr = 0x82132934;
	sub_82130DB0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8213295c
	if (!ctx.cr6.eq) goto loc_8213295C;
	// bl 0x82130e28
	ctx.lr = 0x82132944;
	sub_82130E28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213295c
	if (ctx.cr6.eq) goto loc_8213295C;
	// bl 0x821360d8
	ctx.lr = 0x82132954;
	sub_821360D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821329b0
	if (!ctx.cr6.eq) goto loc_821329B0;
loc_8213295C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82130db0
	ctx.lr = 0x82132964;
	sub_82130DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x8213297c
	if (!ctx.cr6.eq) goto loc_8213297C;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8213297C:
	// bl 0x822c4c00
	ctx.lr = 0x82132980;
	sub_822C4C00(ctx, base);
	// bl 0x821360d8
	ctx.lr = 0x82132984;
	sub_821360D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821329b0
	if (ctx.cr6.eq) goto loc_821329B0;
	// lwz r11,-9404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9404);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821329b0
	if (!ctx.cr6.eq) goto loc_821329B0;
	// bl 0x82130e28
	ctx.lr = 0x821329A0;
	sub_82130E28(ctx, base);
	// lwz r11,-9404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9404);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822e1f80
	ctx.lr = 0x821329B0;
	sub_822E1F80(ctx, base);
loc_821329B0:
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

PPC_WEAK_FUNC(sub_821328A8) {
	__imp__sub_821328A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821329C8) {
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
	// bne cr6,0x82132a34
	if (!ctx.cr6.eq) goto loc_82132A34;
	// bl 0x82130db0
	ctx.lr = 0x821329FC;
	sub_82130DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82132a34
	if (!ctx.cr6.eq) goto loc_82132A34;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c4c00
	ctx.lr = 0x82132A14;
	sub_822C4C00(ctx, base);
	// bl 0x821360d8
	ctx.lr = 0x82132A18;
	sub_821360D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82132a34
	if (ctx.cr6.eq) goto loc_82132A34;
	// bl 0x82130e28
	ctx.lr = 0x82132A24;
	sub_82130E28(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,-9404(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// bl 0x822e1f80
	ctx.lr = 0x82132A34;
	sub_822E1F80(ctx, base);
loc_82132A34:
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

PPC_WEAK_FUNC(sub_821329C8) {
	__imp__sub_821329C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132A48) {
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
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82132a74
	if (ctx.cr6.eq) goto loc_82132A74;
	// bl 0x82140fd8
	ctx.lr = 0x82132A6C;
	sub_82140FD8(ctx, base);
	// bl 0x82141040
	ctx.lr = 0x82132A70;
	sub_82141040(ctx, base);
	// bl 0x82120800
	ctx.lr = 0x82132A74;
	sub_82120800(ctx, base);
loc_82132A74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82132A48) {
	__imp__sub_82132A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82132A84) {
	__imp__sub_82132A84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82132A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230c668
	ctx.lr = 0x82132AB4;
	sub_8230C668(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82132ad8
	if (!ctx.cr6.eq) goto loc_82132AD8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-4728
	ctx.r4.s64 = ctx.r11.s64 + -4728;
	// bl 0x82280b08
	ctx.lr = 0x82132AD0;
	sub_82280B08(ctx, base);
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82132AD8:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82132b04
	if (!ctx.cr6.gt) goto loc_82132B04;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-4816
	ctx.r4.s64 = ctx.r11.s64 + -4816;
	// bl 0x82280b08
	ctx.lr = 0x82132AFC;
	sub_82280B08(ctx, base);
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82132B04:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-4836
	ctx.r5.s64 = ctx.r11.s64 + -4836;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227ebd8
	ctx.lr = 0x82132B18;
	sub_8227EBD8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r10,-4852
	ctx.r5.s64 = ctx.r10.s64 + -4852;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227ebd8
	ctx.lr = 0x82132B2C;
	sub_8227EBD8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82132b5c
	if (!ctx.cr6.gt) goto loc_82132B5C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82132b60
	goto loc_82132B60;
loc_82132B5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82132B60:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8228acc0
	ctx.lr = 0x82132B68;
	sub_8228ACC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x82132c94
	if (ctx.cr6.eq) goto loc_82132C94;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82132b98
	if (!ctx.cr6.gt) goto loc_82132B98;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82132b9c
	goto loc_82132B9C;
loc_82132B98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82132B9C:
	// bl 0x823deaf8
	ctx.lr = 0x82132BA0;
	sub_823DEAF8(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r3,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r3.u16);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,625(r10)
	PPC_STORE_U8(ctx.r10.u32 + 625, ctx.r11.u8);
	// bl 0x82287b40
	ctx.lr = 0x82132BC0;
	sub_82287B40(ctx, base);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r8,9240
	ctx.r4.s64 = ctx.r8.s64 + 9240;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r10,r4,5664
	ctx.r10.s64 = ctx.r4.s64 + 5664;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r11,9760(r4)
	PPC_STORE_U32(ctx.r4.u32 + 9760, ctx.r11.u32);
	// addi r8,r4,1568
	ctx.r8.s64 = ctx.r4.s64 + 1568;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289880
	ctx.lr = 0x82132C04;
	sub_82289880(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bd88
	ctx.lr = 0x82132C0C;
	sub_8230BD88(ctx, base);
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-4864
	ctx.r4.s64 = ctx.r10.s64 + -4864;
	// bl 0x82288048
	ctx.lr = 0x82132C20;
	sub_82288048(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82287e08
	ctx.lr = 0x82132C2C;
	sub_82287E08(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82287e40
	ctx.lr = 0x82132C3C;
	sub_82287E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ac10
	ctx.lr = 0x82132C44;
	sub_8230AC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82288048
	ctx.lr = 0x82132C50;
	sub_82288048(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822eb398
	ctx.lr = 0x82132C5C;
	sub_822EB398(ctx, base);
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r8,-4876
	ctx.r3.s64 = ctx.r8.s64 + -4876;
	// stb r11,29088(r9)
	PPC_STORE_U8(ctx.r9.u32 + 29088, ctx.r11.u8);
	// bl 0x822e20d0
	ctx.lr = 0x82132C78;
	sub_822E20D0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x82132C84;
	sub_822C4C00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8213a1c8
	ctx.lr = 0x82132C8C;
	sub_8213A1C8(ctx, base);
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82132C94:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82132cac
	if (!ctx.cr6.gt) goto loc_82132CAC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82132cb0
	goto loc_82132CB0;
loc_82132CAC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82132CB0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-4912
	ctx.r4.s64 = ctx.r11.s64 + -4912;
	// bl 0x82280b08
	ctx.lr = 0x82132CC0;
	sub_82280B08(ctx, base);
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82132A88) {
	__imp__sub_82132A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82132CD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82132d00
	if (!ctx.cr6.gt) goto loc_82132D00;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-4648
	ctx.r4.s64 = ctx.r11.s64 + -4648;
	// bl 0x82280b08
	ctx.lr = 0x82132CF8;
	sub_82280B08(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82132D00:
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r28,r11,-17592
	ctx.r28.s64 = ctx.r11.s64 + -17592;
	// addi r10,r28,36
	ctx.r10.s64 = ctx.r28.s64 + 36;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8230c668
	ctx.lr = 0x82132D1C;
	sub_8230C668(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82132d40
	if (!ctx.cr6.eq) goto loc_82132D40;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-4728
	ctx.r4.s64 = ctx.r11.s64 + -4728;
	// bl 0x82280b08
	ctx.lr = 0x82132D38;
	sub_82280B08(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82132D40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-4664
	ctx.r4.s64 = ctx.r11.s64 + -4664;
	// bl 0x8227cf18
	ctx.lr = 0x82132D50;
	sub_8227CF18(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// bl 0x82283040
	ctx.lr = 0x82132D6C;
	sub_82283040(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r9,127
	ctx.r9.s64 = 127;
	// stb r30,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r30.u8);
	// addi r31,r11,9240
	ctx.r31.s64 = ctx.r11.s64 + 9240;
	// stb r30,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r30.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r8,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r8.u8);
	// stw r30,9760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9760, ctx.r30.u32);
	// bl 0x82310170
	ctx.lr = 0x82132D98;
	sub_82310170(ctx, base);
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r3,-16416(r7)
	PPC_STORE_U32(ctx.r7.u32 + -16416, ctx.r3.u32);
loc_82132DA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82283040
	ctx.lr = 0x82132DB0;
	sub_82283040(ctx, base);
	// addi r29,r29,9780
	ctx.r29.s64 = ctx.r29.s64 + 9780;
	// addi r11,r31,19576
	ctx.r11.s64 = ctx.r31.s64 + 19576;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82132da4
	if (ctx.cr6.lt) goto loc_82132DA4;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82283040
	ctx.lr = 0x82132DCC;
	sub_82283040(ctx, base);
	// lis r8,-31833
	ctx.r8.s64 = -2086207488;
	// lis r9,-31833
	ctx.r9.s64 = -2086207488;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r30,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r30.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,17064(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17064, ctx.r11.u32);
	// li r6,4096
	ctx.r6.s64 = 4096;
	// stb r10,17033(r9)
	PPC_STORE_U8(ctx.r9.u32 + 17033, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r10,r31,5664
	ctx.r10.s64 = ctx.r31.s64 + 5664;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// addi r8,r31,1568
	ctx.r8.s64 = ctx.r31.s64 + 1568;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289880
	ctx.lr = 0x82132E20;
	sub_82289880(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,-4876
	ctx.r3.s64 = ctx.r9.s64 + -4876;
	// stb r11,29088(r10)
	PPC_STORE_U8(ctx.r10.u32 + 29088, ctx.r11.u8);
	// bl 0x822e20d0
	ctx.lr = 0x82132E3C;
	sub_822E20D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8213a430
	ctx.lr = 0x82132E44;
	sub_8213A430(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r8,r28,36
	ctx.r8.s64 = ctx.r28.s64 + 36;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwzx r30,r7,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8230f3d0
	ctx.lr = 0x82132E70;
	sub_8230F3D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bd88
	ctx.lr = 0x82132E7C;
	sub_8230BD88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ac10
	ctx.lr = 0x82132E88;
	sub_8230AC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x8213a360
	ctx.lr = 0x82132EB4;
	sub_8213A360(ctx, base);
	// bl 0x8230bee8
	ctx.lr = 0x82132EB8;
	sub_8230BEE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821396b8
	ctx.lr = 0x82132EC4;
	sub_821396B8(ctx, base);
	// bl 0x8230bef8
	ctx.lr = 0x82132EC8;
	sub_8230BEF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82139708
	ctx.lr = 0x82132ED4;
	sub_82139708(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x82132EE0;
	sub_822C4C00(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82132CC8) {
	__imp__sub_82132CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132EE8) {
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
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lbz r10,17033(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17033);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82132f34
	if (ctx.cr6.eq) goto loc_82132F34;
	// bl 0x82338da8
	ctx.lr = 0x82132F08;
	sub_82338DA8(ctx, base);
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
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
	// bl 0x82338ca8
	ctx.lr = 0x82132F24;
	sub_82338CA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82132F34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-4540
	ctx.r4.s64 = ctx.r11.s64 + -4540;
	// bl 0x82280900
	ctx.lr = 0x82132F44;
	sub_82280900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82132EE8) {
	__imp__sub_82132EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82132F54) {
	__imp__sub_82132F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82132F58) {
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
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82132fa0
	if (ctx.cr6.eq) goto loc_82132FA0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-4408
	ctx.r4.s64 = ctx.r11.s64 + -4408;
	// bl 0x82280900
	ctx.lr = 0x82132F9C;
	sub_82280900(ctx, base);
	// b 0x82133010
	goto loc_82133010;
loc_82132FA0:
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8230bd88
	ctx.lr = 0x82132FAC;
	sub_8230BD88(ctx, base);
	// bl 0x82139fe0
	ctx.lr = 0x82132FB0;
	sub_82139FE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82132fd0
	if (!ctx.cr6.lt) goto loc_82132FD0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-4480
	ctx.r4.s64 = ctx.r11.s64 + -4480;
	// bl 0x82280900
	ctx.lr = 0x82132FCC;
	sub_82280900(ctx, base);
	// b 0x82133010
	goto loc_82133010;
loc_82132FD0:
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
	// ble cr6,0x82132ff8
	if (!ctx.cr6.gt) goto loc_82132FF8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82133000
	goto loc_82133000;
loc_82132FF8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82133000:
	// bl 0x823deaf8
	ctx.lr = 0x82133004;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82139688
	ctx.lr = 0x82133010;
	sub_82139688(ctx, base);
loc_82133010:
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

PPC_WEAK_FUNC(sub_82132F58) {
	__imp__sub_82132F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// ori r8,r10,6644
	ctx.r8.u64 = ctx.r10.u64 | 6644;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82133028) {
	__imp__sub_82133028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// ori r8,r10,6644
	ctx.r8.u64 = ctx.r10.u64 | 6644;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82133040) {
	__imp__sub_82133040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133058) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822e2720
	sub_822E2720(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133058) {
	__imp__sub_82133058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,12376
	ctx.r3.s64 = ctx.r11.s64 + 12376;
	// b 0x822e3358
	sub_822E3358(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133060) {
	__imp__sub_82133060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133070) {
	PPC_FUNC_PROLOGUE();
	// b 0x822e3588
	sub_822E3588(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133070) {
	__imp__sub_82133070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133074) {
	__imp__sub_82133074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133078) {
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
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821330a8
	if (ctx.cr6.eq) goto loc_821330A8;
	// bl 0x82139f68
	ctx.lr = 0x82133098;
	sub_82139F68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821330A8:
	// bl 0x82141340
	ctx.lr = 0x821330AC;
	sub_82141340(ctx, base);
	// bl 0x82141c30
	ctx.lr = 0x821330B0;
	sub_82141C30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82133078) {
	__imp__sub_82133078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821330C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x8230be88
	sub_8230BE88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821330C0) {
	__imp__sub_821330C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821330DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821330DC) {
	__imp__sub_821330DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821330E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x8230b3d0
	sub_8230B3D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821330E0) {
	__imp__sub_821330E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821330FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821330FC) {
	__imp__sub_821330FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133100) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x8230c568
	sub_8230C568(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133100) {
	__imp__sub_82133100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213311C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213311C) {
	__imp__sub_8213311C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133120) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x8230c5d8
	sub_8230C5D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133120) {
	__imp__sub_82133120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213313C) {
	__imp__sub_8213313C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133140) {
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
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x8230c668
	ctx.lr = 0x82133168;
	sub_8230C668(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82133188
	if (!ctx.cr6.eq) goto loc_82133188;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,-4364
	ctx.r4.s64 = ctx.r10.s64 + -4364;
	// lwz r3,-4836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4836);
	// bl 0x822e1fa8
	ctx.lr = 0x82133188;
	sub_822E1FA8(ctx, base);
loc_82133188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82133140) {
	__imp__sub_82133140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133198) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,2204
	ctx.r5.s64 = ctx.r11.s64 + 2204;
	// addi r3,r9,-4292
	ctx.r3.s64 = ctx.r9.s64 + -4292;
	// addi r4,r10,12480
	ctx.r4.s64 = ctx.r10.s64 + 12480;
	// bl 0x8227da10
	ctx.lr = 0x821331C0;
	sub_8227DA10(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,2184
	ctx.r5.s64 = ctx.r8.s64 + 2184;
	// addi r3,r6,-4304
	ctx.r3.s64 = ctx.r6.s64 + -4304;
	// addi r4,r7,12512
	ctx.r4.s64 = ctx.r7.s64 + 12512;
	// bl 0x8227da10
	ctx.lr = 0x821331DC;
	sub_8227DA10(ctx, base);
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,2164
	ctx.r5.s64 = ctx.r5.s64 + 2164;
	// addi r3,r3,-4320
	ctx.r3.s64 = ctx.r3.s64 + -4320;
	// addi r4,r4,12544
	ctx.r4.s64 = ctx.r4.s64 + 12544;
	// bl 0x8227da10
	ctx.lr = 0x821331F8;
	sub_8227DA10(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,2144
	ctx.r5.s64 = ctx.r11.s64 + 2144;
	// addi r3,r9,-4328
	ctx.r3.s64 = ctx.r9.s64 + -4328;
	// addi r4,r10,12576
	ctx.r4.s64 = ctx.r10.s64 + 12576;
	// bl 0x8227da10
	ctx.lr = 0x82133214;
	sub_8227DA10(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,2124
	ctx.r5.s64 = ctx.r8.s64 + 2124;
	// addi r3,r6,-4348
	ctx.r3.s64 = ctx.r6.s64 + -4348;
	// addi r4,r7,12608
	ctx.r4.s64 = ctx.r7.s64 + 12608;
	// bl 0x8227da10
	ctx.lr = 0x82133230;
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

PPC_WEAK_FUNC(sub_82133198) {
	__imp__sub_82133198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133240) {
	PPC_FUNC_PROLOGUE();
	// b 0x82360960
	sub_82360960(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133240) {
	__imp__sub_82133240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133244) {
	__imp__sub_82133244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133248) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82360d68
	sub_82360D68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133248) {
	__imp__sub_82133248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133264) {
	__imp__sub_82133264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133268) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82360460
	sub_82360460(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133268) {
	__imp__sub_82133268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133284) {
	__imp__sub_82133284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133288) {
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
	// bl 0x82360320
	ctx.lr = 0x82133298;
	sub_82360320(ctx, base);
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x823606e8
	ctx.lr = 0x821332B4;
	sub_823606E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82133288) {
	__imp__sub_82133288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821332C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821332C4) {
	__imp__sub_821332C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821332C8) {
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
	// bl 0x82141340
	ctx.lr = 0x821332D8;
	sub_82141340(ctx, base);
	// bl 0x8213c2c8
	ctx.lr = 0x821332DC;
	sub_8213C2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821332C8) {
	__imp__sub_821332C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821332EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821332EC) {
	__imp__sub_821332EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821332F0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_82133304:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82104db8
	ctx.lr = 0x8213330C;
	sub_82104DB8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82133304
	if (ctx.cr6.lt) goto loc_82133304;
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

PPC_WEAK_FUNC(sub_821332F0) {
	__imp__sub_821332F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213332C) {
	__imp__sub_8213332C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133330) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
	// bl 0x82141340
	ctx.lr = 0x82133364;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227f038
	ctx.lr = 0x82133370;
	sub_8227F038(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32155
	ctx.r7.s64 = -2107310080;
	// ori r6,r8,48796
	ctx.r6.u64 = ctx.r8.u64 | 48796;
	// addi r5,r7,-29944
	ctx.r5.s64 = ctx.r7.s64 + -29944;
	// mullw r4,r30,r6
	ctx.r4.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r6.s32);
	// stbx r31,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r31.u8);
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

PPC_WEAK_FUNC(sub_82133330) {
	__imp__sub_82133330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821333A0) {
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
	// bl 0x82283000
	ctx.lr = 0x821333BC;
	sub_82283000(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-4220
	ctx.r4.s64 = ctx.r11.s64 + -4220;
	// bl 0x82280900
	ctx.lr = 0x821333CC;
	sub_82280900(ctx, base);
	// lis r31,-32154
	ctx.r31.s64 = -2107244544;
	// lwz r11,2224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821333ec
	if (ctx.cr6.eq) goto loc_821333EC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-4244
	ctx.r3.s64 = ctx.r11.s64 + -4244;
	// bl 0x823dfc88
	ctx.lr = 0x821333E8;
	sub_823DFC88(ctx, base);
	// b 0x82133414
	goto loc_82133414;
loc_821333EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r11.u32);
	// bl 0x82131a08
	ctx.lr = 0x821333FC;
	sub_82131A08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r11.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r10,-4272
	ctx.r4.s64 = ctx.r10.s64 + -4272;
	// bl 0x82280900
	ctx.lr = 0x82133414;
	sub_82280900(ctx, base);
loc_82133414:
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

PPC_WEAK_FUNC(sub_821333A0) {
	__imp__sub_821333A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213342C) {
	__imp__sub_8213342C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133430) {
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
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-3888
	ctx.r4.s64 = ctx.r11.s64 + -3888;
	// bl 0x82280900
	ctx.lr = 0x82133450;
	sub_82280900(ctx, base);
	// lis r31,-32154
	ctx.r31.s64 = -2107244544;
	// lbz r10,2228(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2228);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82133480
	if (ctx.cr6.eq) goto loc_82133480;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-3928
	ctx.r3.s64 = ctx.r11.s64 + -3928;
	// bl 0x823dfc88
	ctx.lr = 0x8213346C;
	sub_823DFC88(ctx, base);
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
loc_82133480:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2228, ctx.r11.u8);
	// bl 0x82128540
	ctx.lr = 0x8213348C;
	sub_82128540(ctx, base);
	// bl 0x82283000
	ctx.lr = 0x82133490;
	sub_82283000(ctx, base);
	// bl 0x8211ff88
	ctx.lr = 0x82133494;
	sub_8211FF88(ctx, base);
	// bl 0x82136080
	ctx.lr = 0x82133498;
	sub_82136080(ctx, base);
	// bl 0x8238d5d0
	ctx.lr = 0x8213349C;
	sub_8238D5D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8238d710
	ctx.lr = 0x821334A4;
	sub_8238D710(ctx, base);
	// bl 0x82368468
	ctx.lr = 0x821334A8;
	sub_82368468(ctx, base);
	// bl 0x8212ccf0
	ctx.lr = 0x821334AC;
	sub_8212CCF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-3932
	ctx.r3.s64 = ctx.r11.s64 + -3932;
	// bl 0x8227da80
	ctx.lr = 0x821334B8;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-13248
	ctx.r3.s64 = ctx.r10.s64 + -13248;
	// bl 0x8227da80
	ctx.lr = 0x821334C4;
	sub_8227DA80(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-3940
	ctx.r3.s64 = ctx.r9.s64 + -3940;
	// bl 0x8227da80
	ctx.lr = 0x821334D0;
	sub_8227DA80(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-3948
	ctx.r3.s64 = ctx.r8.s64 + -3948;
	// bl 0x8227da80
	ctx.lr = 0x821334DC;
	sub_8227DA80(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-3964
	ctx.r3.s64 = ctx.r7.s64 + -3964;
	// bl 0x8227da80
	ctx.lr = 0x821334E8;
	sub_8227DA80(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-3992
	ctx.r3.s64 = ctx.r6.s64 + -3992;
	// bl 0x8227da80
	ctx.lr = 0x821334F4;
	sub_8227DA80(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-4004
	ctx.r3.s64 = ctx.r5.s64 + -4004;
	// bl 0x8227da80
	ctx.lr = 0x82133500;
	sub_8227DA80(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-4028
	ctx.r3.s64 = ctx.r4.s64 + -4028;
	// bl 0x8227da80
	ctx.lr = 0x8213350C;
	sub_8227DA80(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,-4036
	ctx.r3.s64 = ctx.r3.s64 + -4036;
	// bl 0x8227da80
	ctx.lr = 0x82133518;
	sub_8227DA80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-4048
	ctx.r3.s64 = ctx.r11.s64 + -4048;
	// bl 0x8227da80
	ctx.lr = 0x82133524;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-4056
	ctx.r3.s64 = ctx.r10.s64 + -4056;
	// bl 0x8227da80
	ctx.lr = 0x82133530;
	sub_8227DA80(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-4072
	ctx.r3.s64 = ctx.r9.s64 + -4072;
	// bl 0x8227da80
	ctx.lr = 0x8213353C;
	sub_8227DA80(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-4092
	ctx.r3.s64 = ctx.r8.s64 + -4092;
	// bl 0x8227da80
	ctx.lr = 0x82133548;
	sub_8227DA80(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-4108
	ctx.r3.s64 = ctx.r7.s64 + -4108;
	// bl 0x8227da80
	ctx.lr = 0x82133554;
	sub_8227DA80(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-4112
	ctx.r3.s64 = ctx.r6.s64 + -4112;
	// bl 0x8227da80
	ctx.lr = 0x82133560;
	sub_8227DA80(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-4132
	ctx.r3.s64 = ctx.r5.s64 + -4132;
	// bl 0x8227da80
	ctx.lr = 0x8213356C;
	sub_8227DA80(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-4148
	ctx.r3.s64 = ctx.r4.s64 + -4148;
	// bl 0x8227da80
	ctx.lr = 0x82133578;
	sub_8227DA80(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,-4164
	ctx.r3.s64 = ctx.r3.s64 + -4164;
	// bl 0x8227da80
	ctx.lr = 0x82133584;
	sub_8227DA80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-4180
	ctx.r3.s64 = ctx.r11.s64 + -4180;
	// bl 0x8227da80
	ctx.lr = 0x82133590;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-4192
	ctx.r3.s64 = ctx.r10.s64 + -4192;
	// bl 0x8227da80
	ctx.lr = 0x8213359C;
	sub_8227DA80(ctx, base);
	// bl 0x821317f0
	ctx.lr = 0x821335A0;
	sub_821317F0(ctx, base);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// addi r3,r9,28832
	ctx.r3.s64 = ctx.r9.s64 + 28832;
	// ori r5,r5,6652
	ctx.r5.u64 = ctx.r5.u64 | 6652;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821335B8;
	sub_823DE090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stb r11,2228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2228, ctx.r11.u8);
	// addi r4,r8,-4272
	ctx.r4.s64 = ctx.r8.s64 + -4272;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821335D0;
	sub_82280900(ctx, base);
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

PPC_WEAK_FUNC(sub_82133430) {
	__imp__sub_82133430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821335E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821335E4) {
	__imp__sub_821335E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821335E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,28832
	ctx.r9.s64 = ctx.r10.s64 + 28832;
	// stb r11,356(r9)
	PPC_STORE_U8(ctx.r9.u32 + 356, ctx.r11.u8);
	// b 0x8238eca8
	sub_8238ECA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821335E8) {
	__imp__sub_821335E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821335FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821335FC) {
	__imp__sub_821335FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133600) {
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
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f5,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82391e90
	ctx.lr = 0x82133624;
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

PPC_WEAK_FUNC(sub_82133600) {
	__imp__sub_82133600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133634) {
	__imp__sub_82133634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82133640;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r7,316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r31,300(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lfs f5,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r30,292(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r29,276(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x823921a8
	ctx.lr = 0x82133694;
	sub_823921A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133638) {
	__imp__sub_82133638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213369C) {
	__imp__sub_8213369C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821336A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821336A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stfs f2,188(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stfs f3,212(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stfs f4,220(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r7,r1,220
	ctx.r7.s64 = ctx.r1.s64 + 220;
	// addi r6,r1,212
	ctx.r6.s64 = ctx.r1.s64 + 212;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x82140bc8
	ctx.lr = 0x821336E4;
	sub_82140BC8(ctx, base);
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f4,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f3,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lfs f5,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82391e90
	ctx.lr = 0x8213371C;
	sub_82391E90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821336A0) {
	__imp__sub_821336A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133724) {
	__imp__sub_82133724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82133730;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,196(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stfs f2,204(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stfs f4,236(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stfs f5,244(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r7,r1,244
	ctx.r7.s64 = ctx.r1.s64 + 244;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r6,r1,236
	ctx.r6.s64 = ctx.r1.s64 + 236;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x82140bc8
	ctx.lr = 0x82133774;
	sub_82140BC8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f4,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f1,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82391e90
	ctx.lr = 0x821337A8;
	sub_82391E90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133728) {
	__imp__sub_82133728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821337B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821337B4) {
	__imp__sub_821337B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821337B8) {
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
	// lbz r9,231(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 231);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,220(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f5,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// stb r9,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r9.u8);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x82391d38
	ctx.lr = 0x821337EC;
	sub_82391D38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821337B8) {
	__imp__sub_821337B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821337FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821337FC) {
	__imp__sub_821337FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82133808;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stfs f2,204(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stfs f3,228(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stfs f4,236(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r7,r1,236
	ctx.r7.s64 = ctx.r1.s64 + 236;
	// addi r6,r1,228
	ctx.r6.s64 = ctx.r1.s64 + 228;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x82140bc8
	ctx.lr = 0x82133844;
	sub_82140BC8(ctx, base);
	// lbz r10,271(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 271);
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// lfs f5,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f2,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f2.f64 = double(temp.f32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f1,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82391d38
	ctx.lr = 0x8213388C;
	sub_82391D38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133800) {
	__imp__sub_82133800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133894) {
	__imp__sub_82133894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133898) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238b538
	sub_8238B538(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133898) {
	__imp__sub_82133898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213389C) {
	__imp__sub_8213389C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821338A0) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822ec4e8
	ctx.lr = 0x821338B4;
	sub_822EC4E8(ctx, base);
	// bl 0x82366120
	ctx.lr = 0x821338B8;
	sub_82366120(ctx, base);
	// bl 0x8236a8c0
	ctx.lr = 0x821338BC;
	sub_8236A8C0(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822ec500
	ctx.lr = 0x821338C4;
	sub_822EC500(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821338A0) {
	__imp__sub_821338A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821338D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821338D4) {
	__imp__sub_821338D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821338D8) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-3800
	ctx.r4.s64 = ctx.r11.s64 + -3800;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e7f80
	ctx.lr = 0x821338FC;
	sub_822E7F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213391c
	if (!ctx.cr6.eq) goto loc_8213391C;
loc_82133904:
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
loc_8213391C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3820
	ctx.r4.s64 = ctx.r11.s64 + -3820;
	// bl 0x822e8058
	ctx.lr = 0x8213392C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82133904
	if (ctx.cr6.eq) goto loc_82133904;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3844
	ctx.r4.s64 = ctx.r11.s64 + -3844;
	// bl 0x822e8058
	ctx.lr = 0x82133944;
	sub_822E8058(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r3,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_821338D8) {
	__imp__sub_821338D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82133968;
	__savegprlr_25(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8233e418
	ctx.lr = 0x82133974;
	sub_8233E418(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133af4
	if (ctx.cr6.eq) goto loc_82133AF4;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82133af4
	if (!ctx.cr6.eq) goto loc_82133AF4;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r30,r11,-17592
	ctx.r30.s64 = ctx.r11.s64 + -17592;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82133af4
	if (!ctx.cr6.eq) goto loc_82133AF4;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r26,r10,-28736
	ctx.r26.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x821339c8
	if (!ctx.cr6.gt) goto loc_821339C8;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821339cc
	goto loc_821339CC;
loc_821339C8:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_821339CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821338d8
	ctx.lr = 0x821339D4;
	sub_821338D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133af4
	if (ctx.cr6.eq) goto loc_82133AF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227dcb0
	ctx.lr = 0x821339E8;
	sub_8227DCB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bge cr6,0x82133a0c
	if (!ctx.cr6.lt) goto loc_82133A0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-3780
	ctx.r5.s64 = ctx.r11.s64 + -3780;
	// b 0x82133a14
	goto loc_82133A14;
loc_82133A0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,-3788
	ctx.r5.s64 = ctx.r11.s64 + -3788;
loc_82133A14:
	// bl 0x822e8368
	ctx.lr = 0x82133A18;
	sub_822E8368(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82133A20:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82133a20
	if (!ctx.cr6.eq) goto loc_82133A20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r30,68
	ctx.r7.s64 = ctx.r30.s64 + 68;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x82133ae8
	if (!ctx.cr6.gt) goto loc_82133AE8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r27,r9,-29604
	ctx.r27.s64 = ctx.r9.s64 + -29604;
loc_82133A70:
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82133a88
	if (!ctx.cr6.lt) goto loc_82133A88;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r6,r9,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// b 0x82133a8c
	goto loc_82133A8C;
loc_82133A88:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_82133A8C:
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x82133AA0;
	sub_822E8368(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82133AA4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82133aa4
	if (!ctx.cr6.eq) goto loc_82133AA4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82133a70
	if (ctx.cr6.lt) goto loc_82133A70;
loc_82133AE8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82130ec0
	ctx.lr = 0x82133AF4;
	sub_82130EC0(ctx, base);
loc_82133AF4:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133960) {
	__imp__sub_82133960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133AFC) {
	__imp__sub_82133AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82133B08;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82287790
	ctx.lr = 0x82133B1C;
	sub_82287790(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82133b38
	if (ctx.cr6.eq) goto loc_82133B38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230d678
	ctx.lr = 0x82133B34;
	sub_8230D678(ctx, base);
	// b 0x82133b40
	goto loc_82133B40;
loc_82133B38:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2112, ctx.r10.u32);
loc_82133B40:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// lbz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82133b64
	if (!ctx.cr6.eq) goto loc_82133B64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 356, ctx.r11.u8);
	// bl 0x8238eca8
	ctx.lr = 0x82133B64;
	sub_8238ECA8(ctx, base);
loc_82133B64:
	// lbz r11,357(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 357);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82133b74
	if (!ctx.cr6.eq) goto loc_82133B74;
	// bl 0x82308a18
	ctx.lr = 0x82133B74;
	sub_82308A18(ctx, base);
loc_82133B74:
	// lis r30,-31936
	ctx.r30.s64 = -2092957696;
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// stb r10,357(r31)
	PPC_STORE_U8(ctx.r31.u32 + 357, ctx.r10.u8);
	// stb r11,356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 356, ctx.r11.u8);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r10,-9404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9404);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82133bd0
	if (!ctx.cr6.eq) goto loc_82133BD0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82133bd0
	if (!ctx.cr6.eq) goto loc_82133BD0;
	// bl 0x82130e28
	ctx.lr = 0x82133BC0;
	sub_82130E28(ctx, base);
	// lwz r11,-9404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9404);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822e1f80
	ctx.lr = 0x82133BD0;
	sub_822E1F80(ctx, base);
loc_82133BD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133B00) {
	__imp__sub_82133B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133BDC) {
	__imp__sub_82133BDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133BE0) {
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
	// bl 0x82390a98
	ctx.lr = 0x82133BF4;
	sub_82390A98(ctx, base);
	// bl 0x82283000
	ctx.lr = 0x82133BF8;
	sub_82283000(ctx, base);
	// bl 0x8211ff88
	ctx.lr = 0x82133BFC;
	sub_8211FF88(ctx, base);
	// bl 0x82136080
	ctx.lr = 0x82133C00;
	sub_82136080(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133c40
	if (ctx.cr6.eq) goto loc_82133C40;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// bl 0x8238ea00
	ctx.lr = 0x82133C24;
	sub_8238EA00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// bl 0x82121d10
	ctx.lr = 0x82133C40;
	sub_82121D10(ctx, base);
loc_82133C40:
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

PPC_WEAK_FUNC(sub_82133BE0) {
	__imp__sub_82133BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133C54) {
	__imp__sub_82133C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82133C60;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r30,r11,28832
	ctx.r30.s64 = ctx.r11.s64 + 28832;
	// ori r9,r10,6632
	ctx.r9.u64 = ctx.r10.u64 | 6632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82133d18
	if (ctx.cr6.eq) goto loc_82133D18;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82125cf8
	ctx.lr = 0x82133C8C;
	sub_82125CF8(ctx, base);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r10,-30024
	ctx.r29.s64 = ctx.r10.s64 + -30024;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r9,-3772
	ctx.r4.s64 = ctx.r9.s64 + -3772;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
	// bl 0x822e7e98
	ctx.lr = 0x82133CB8;
	sub_822E7E98(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bl 0x82367820
	ctx.lr = 0x82133CC8;
	sub_82367820(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x82133CD8;
	sub_8236A638(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822ec4e8
	ctx.lr = 0x82133CE0;
	sub_822EC4E8(ctx, base);
	// bl 0x82366120
	ctx.lr = 0x82133CE4;
	sub_82366120(ctx, base);
	// bl 0x8236a8c0
	ctx.lr = 0x82133CE8;
	sub_8236A8C0(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822ec500
	ctx.lr = 0x82133CF0;
	sub_822EC500(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821316b0
	ctx.lr = 0x82133CFC;
	sub_821316B0(ctx, base);
	// bl 0x82176638
	ctx.lr = 0x82133D00;
	sub_82176638(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238d450
	ctx.lr = 0x82133D0C;
	sub_8238D450(ctx, base);
	// bl 0x822c52a8
	ctx.lr = 0x82133D10;
	sub_822C52A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82310050
	ctx.lr = 0x82133D18;
	sub_82310050(ctx, base);
loc_82133D18:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133C58) {
	__imp__sub_82133C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82133D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82365378
	ctx.lr = 0x82133D38;
	sub_82365378(ctx, base);
	// bl 0x823653a0
	ctx.lr = 0x82133D3C;
	sub_823653A0(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82133d64
	if (!ctx.cr6.eq) goto loc_82133D64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821213a8
	ctx.lr = 0x82133D60;
	sub_821213A8(ctx, base);
	// b 0x82133d74
	goto loc_82133D74;
loc_82133D64:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82133d74
	if (!ctx.cr6.eq) goto loc_82133D74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821324b0
	ctx.lr = 0x82133D74;
	sub_821324B0(ctx, base);
loc_82133D74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-3672
	ctx.r3.s64 = ctx.r11.s64 + -3672;
	// bl 0x822e2170
	ctx.lr = 0x82133D84;
	sub_822E2170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82133D8C;
	sub_82141340(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lwz r11,4688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82133da0
	if (!ctx.cr6.eq) goto loc_82133DA0;
	// bl 0x8213e638
	ctx.lr = 0x82133DA0;
	sub_8213E638(ctx, base);
loc_82133DA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82131a08
	ctx.lr = 0x82133DA8;
	sub_82131A08(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82133e44
	if (ctx.cr6.eq) goto loc_82133E44;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82133e44
	if (ctx.cr6.eq) goto loc_82133E44;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82133e44
	if (ctx.cr6.eq) goto loc_82133E44;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82133e34
	if (ctx.cr6.eq) goto loc_82133E34;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133df4
	if (ctx.cr6.eq) goto loc_82133DF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,-3696
	ctx.r4.s64 = ctx.r11.s64 + -3696;
	// bl 0x822830e8
	ctx.lr = 0x82133DEC;
	sub_822830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82133DF4:
	// bl 0x82139410
	ctx.lr = 0x82133DF8;
	sub_82139410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133e1c
	if (ctx.cr6.eq) goto loc_82133E1C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,-3716
	ctx.r4.s64 = ctx.r11.s64 + -3716;
	// bl 0x822830e8
	ctx.lr = 0x82133E14;
	sub_822830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82133E1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,-3740
	ctx.r4.s64 = ctx.r11.s64 + -3740;
	// bl 0x822830e8
	ctx.lr = 0x82133E2C;
	sub_822830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82133E34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,-3760
	ctx.r4.s64 = ctx.r11.s64 + -3760;
	// bl 0x822830e8
	ctx.lr = 0x82133E44;
	sub_822830E8(ctx, base);
loc_82133E44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133D20) {
	__imp__sub_82133D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82133E4C) {
	__imp__sub_82133E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133E50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// li r4,0
	ctx.r4.s64 = 0;
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
	// b 0x82133d20
	sub_82133D20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133E50) {
	__imp__sub_82133E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133E70) {
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
	// b 0x82133d20
	sub_82133D20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82133E70) {
	__imp__sub_82133E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133E90) {
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
	// bl 0x82390a98
	ctx.lr = 0x82133EA4;
	sub_82390A98(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,28832
	ctx.r31.s64 = ctx.r10.s64 + 28832;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// bl 0x8238ea00
	ctx.lr = 0x82133EBC;
	sub_8238EA00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// bl 0x82121d10
	ctx.lr = 0x82133ED8;
	sub_82121D10(ctx, base);
	// bl 0x8228b080
	ctx.lr = 0x82133EDC;
	sub_8228B080(ctx, base);
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

PPC_WEAK_FUNC(sub_82133E90) {
	__imp__sub_82133E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82133EF0) {
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
	ctx.lr = 0x82133F08;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lfs f30,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82133f6c
	if (!ctx.cr6.lt) goto loc_82133F6C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// b 0x82133fb0
	goto loc_82133FB0;
loc_82133F6C:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82133fc8
	if (!ctx.cr6.gt) goto loc_82133FC8;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
loc_82133FB0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82133fc0
	if (!ctx.cr6.lt) goto loc_82133FC0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82133fcc
	goto loc_82133FCC;
loc_82133FC0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82133fcc
	if (!ctx.cr6.gt) goto loc_82133FCC;
loc_82133FC8:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82133FCC:
	// lwz r7,400(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r6,404(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f13,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// lfs f0,-3660(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3660);
	ctx.f0.f64 = double(temp.f32);
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f29,f4
	ctx.f29.f64 = double(float(ctx.f4.f64));
	// fmuls f3,f9,f13
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f28,f3,f0
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fsubs f27,f9,f28
	ctx.f27.f64 = double(float(ctx.f9.f64 - ctx.f28.f64));
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// bl 0x823915b0
	ctx.lr = 0x82134054;
	sub_823915B0(ctx, base);
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f8,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f30.f64;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823915b0
	ctx.lr = 0x82134088;
	sub_823915B0(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8213409c
	if (!ctx.cr6.gt) goto loc_8213409C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821324b0
	ctx.lr = 0x8213409C;
	sub_821324B0(ctx, base);
loc_8213409C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de070
	ctx.lr = 0x821340A8;
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

PPC_WEAK_FUNC(sub_82133EF0) {
	__imp__sub_82133EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821340BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821340BC) {
	__imp__sub_821340BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821340C0) {
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
	ctx.lr = 0x821340D8;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-2044
	ctx.r4.s64 = ctx.r11.s64 + -2044;
	// bl 0x82280900
	ctx.lr = 0x821340EC;
	sub_82280900(ctx, base);
	// bl 0x8228d6b0
	ctx.lr = 0x821340F0;
	sub_8228D6B0(ctx, base);
	// bl 0x82310170
	ctx.lr = 0x821340F4;
	sub_82310170(ctx, base);
	// bl 0x823df8d0
	ctx.lr = 0x821340F8;
	sub_823DF8D0(ctx, base);
	// bl 0x82121be8
	ctx.lr = 0x821340FC;
	sub_82121BE8(ctx, base);
	// bl 0x821285f0
	ctx.lr = 0x82134100;
	sub_821285F0(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,28832
	ctx.r31.s64 = ctx.r10.s64 + 28832;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// bl 0x8212d100
	ctx.lr = 0x82134114;
	sub_8212D100(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r9,-2076
	ctx.r6.s64 = ctx.r9.s64 + -2076;
	// addi r3,r8,-2088
	ctx.r3.s64 = ctx.r8.s64 + -2088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82134130;
	sub_822E15D0(ctx, base);
	// lis r7,-32155
	ctx.r7.s64 = -2107310080;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r6,-2128
	ctx.r8.s64 = ctx.r6.s64 + -2128;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r3,-29956(r7)
	PPC_STORE_U32(ctx.r7.u32 + -29956, ctx.r3.u32);
	// addi r3,r5,-2140
	ctx.r3.s64 = ctx.r5.s64 + -2140;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x8213415C;
	sub_822E1618(ctx, base);
	// lis r4,-32154
	ctx.r4.s64 = -2107244544;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r11,-2180
	ctx.r6.s64 = ctx.r11.s64 + -2180;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,2120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 2120, ctx.r3.u32);
	// addi r3,r10,-2204
	ctx.r3.s64 = ctx.r10.s64 + -2204;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82134180;
	sub_822E15D0(ctx, base);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,28808(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28808, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f30,6912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6912);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r5,-2256
	ctx.r8.s64 = ctx.r5.s64 + -2256;
	// lfs f31,6688(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6688);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r4,-2268
	ctx.r3.s64 = ctx.r4.s64 + -2268;
	// lfs f29,8528(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8528);
	ctx.f29.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x821341C4;
	sub_822E1660(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r10,-2308
	ctx.r8.s64 = ctx.r10.s64 + -2308;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,29312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29312, ctx.r3.u32);
	// addi r3,r9,-2324
	ctx.r3.s64 = ctx.r9.s64 + -2324;
	// bl 0x822e1660
	ctx.lr = 0x821341F0;
	sub_822E1660(ctx, base);
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,29332(r7)
	PPC_STORE_U32(ctx.r7.u32 + 29332, ctx.r3.u32);
	// addi r8,r6,-2380
	ctx.r8.s64 = ctx.r6.s64 + -2380;
	// lfs f31,5484(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r5,-2400
	ctx.r3.s64 = ctx.r5.s64 + -2400;
	// lfs f1,6820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6820);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x82134228;
	sub_822E1660(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,30496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30496, ctx.r3.u32);
	// addi r8,r6,-2480
	ctx.r8.s64 = ctx.r6.s64 + -2480;
	// lfs f1,-23144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23144);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-2508
	ctx.r3.s64 = ctx.r5.s64 + -2508;
	// lfs f30,11804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11804);
	ctx.f30.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x82134260;
	sub_822E1660(ctx, base);
	// lis r4,-32166
	ctx.r4.s64 = -2108030976;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r3,29328(r4)
	PPC_STORE_U32(ctx.r4.u32 + 29328, ctx.r3.u32);
	// addi r8,r9,-2528
	ctx.r8.s64 = ctx.r9.s64 + -2528;
	// lfs f30,-14540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f30.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r6,-2540
	ctx.r3.s64 = ctx.r6.s64 + -2540;
	// lfs f1,7324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7324);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x82134298;
	sub_822E1660(ctx, base);
	// lis r5,-32165
	ctx.r5.s64 = -2107965440;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r8,r4,-2560
	ctx.r8.s64 = ctx.r4.s64 + -2560;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,28816(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28816, ctx.r3.u32);
	// addi r3,r11,-2576
	ctx.r3.s64 = ctx.r11.s64 + -2576;
	// bl 0x822e1660
	ctx.lr = 0x821342C4;
	sub_822E1660(ctx, base);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r9,-2604
	ctx.r6.s64 = ctx.r9.s64 + -2604;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-30032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30032, ctx.r3.u32);
	// addi r3,r8,-2616
	ctx.r3.s64 = ctx.r8.s64 + -2616;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821342E8;
	sub_822E15D0(ctx, base);
	// lis r7,-32154
	ctx.r7.s64 = -2107244544;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r6,-2692
	ctx.r6.s64 = ctx.r6.s64 + -2692;
	// stw r3,2116(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2116, ctx.r3.u32);
	// addi r3,r5,-2636
	ctx.r3.s64 = ctx.r5.s64 + -2636;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8213430C;
	sub_822E15D0(ctx, base);
	// lis r4,-32155
	ctx.r4.s64 = -2107310080;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r11,-2720
	ctx.r6.s64 = ctx.r11.s64 + -2720;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-30048(r4)
	PPC_STORE_U32(ctx.r4.u32 + -30048, ctx.r3.u32);
	// addi r3,r10,-2736
	ctx.r3.s64 = ctx.r10.s64 + -2736;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x82134330;
	sub_822E15D0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f30,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,2424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2424);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r5,-2756
	ctx.r8.s64 = ctx.r5.s64 + -2756;
	// stw r3,-29960(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29960, ctx.r3.u32);
	// addi r3,r4,-2764
	ctx.r3.s64 = ctx.r4.s64 + -2764;
	// lfs f28,-2740(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -2740);
	ctx.f28.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x82134374;
	sub_822E1660(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r8,r10,-2776
	ctx.r8.s64 = ctx.r10.s64 + -2776;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,28824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28824, ctx.r3.u32);
	// addi r3,r9,-2784
	ctx.r3.s64 = ctx.r9.s64 + -2784;
	// bl 0x822e1660
	ctx.lr = 0x821343A0;
	sub_822E1660(ctx, base);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,28820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28820, ctx.r3.u32);
	// addi r8,r6,-2820
	ctx.r8.s64 = ctx.r6.s64 + -2820;
	// lfs f28,5880(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5880);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r5,-2832
	ctx.r3.s64 = ctx.r5.s64 + -2832;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x821343D4;
	sub_822E1660(ctx, base);
	// lis r4,-32155
	ctx.r4.s64 = -2107310080;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r11,-2868
	ctx.r8.s64 = ctx.r11.s64 + -2868;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-30040(r4)
	PPC_STORE_U32(ctx.r4.u32 + -30040, ctx.r3.u32);
	// addi r3,r10,-2876
	ctx.r3.s64 = ctx.r10.s64 + -2876;
	// bl 0x822e1660
	ctx.lr = 0x82134400;
	sub_822E1660(ctx, base);
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r8,-2908
	ctx.r6.s64 = ctx.r8.s64 + -2908;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-29952(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29952, ctx.r3.u32);
	// addi r3,r7,-2920
	ctx.r3.s64 = ctx.r7.s64 + -2920;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82134424;
	sub_822E15D0(ctx, base);
	// lis r5,-32155
	ctx.r5.s64 = -2107310080;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r4,-2948
	ctx.r6.s64 = ctx.r4.s64 + -2948;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-29948(r5)
	PPC_STORE_U32(ctx.r5.u32 + -29948, ctx.r3.u32);
	// addi r3,r11,-2968
	ctx.r3.s64 = ctx.r11.s64 + -2968;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e15d0
	ctx.lr = 0x82134448;
	sub_822E15D0(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r9,-3004
	ctx.r6.s64 = ctx.r9.s64 + -3004;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r3,8668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8668, ctx.r3.u32);
	// addi r3,r8,-3016
	ctx.r3.s64 = ctx.r8.s64 + -3016;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8213446C;
	sub_822E15D0(ctx, base);
	// lis r7,-32021
	ctx.r7.s64 = -2098528256;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-3032
	ctx.r3.s64 = ctx.r6.s64 + -3032;
	// stw r11,-14904(r7)
	PPC_STORE_U32(ctx.r7.u32 + -14904, ctx.r11.u32);
	// bl 0x822b6ff0
	ctx.lr = 0x82134484;
	sub_822B6FF0(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r5,-3040
	ctx.r10.s64 = ctx.r5.s64 + -3040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,-3060
	ctx.r6.s64 = ctx.r11.s64 + -3060;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e17e0
	ctx.lr = 0x821344A4;
	sub_822E17E0(ctx, base);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// stw r3,28812(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28812, ctx.r3.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r30,r8,-28736
	ctx.r30.s64 = ctx.r8.s64 + -28736;
	// addi r3,r5,-3068
	ctx.r3.s64 = ctx.r5.s64 + -3068;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r7,-3088
	ctx.r6.s64 = ctx.r7.s64 + -3088;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e17e0
	ctx.lr = 0x821344D0;
	sub_822E17E0(ctx, base);
	// lis r4,-31936
	ctx.r4.s64 = -2092957696;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r11,-3112
	ctx.r6.s64 = ctx.r11.s64 + -3112;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-9396(r4)
	PPC_STORE_U32(ctx.r4.u32 + -9396, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r10,-3124
	ctx.r3.s64 = ctx.r10.s64 + -3124;
	// bl 0x822e17e0
	ctx.lr = 0x821344F4;
	sub_822E17E0(ctx, base);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// addi r8,r8,-3184
	ctx.r8.s64 = ctx.r8.s64 + -3184;
	// stw r3,28828(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28828, ctx.r3.u32);
	// addi r3,r7,-3140
	ctx.r3.s64 = ctx.r7.s64 + -3140;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x822e1618
	ctx.lr = 0x82134520;
	sub_822E1618(ctx, base);
	// lis r5,-32155
	ctx.r5.s64 = -2107310080;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r4,-3232
	ctx.r6.s64 = ctx.r4.s64 + -3232;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-30028(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30028, ctx.r3.u32);
	// addi r3,r11,-3244
	ctx.r3.s64 = ctx.r11.s64 + -3244;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82134544;
	sub_822E15D0(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r8,r9,-3288
	ctx.r8.s64 = ctx.r9.s64 + -3288;
	// stw r3,-16412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16412, ctx.r3.u32);
	// addi r3,r7,-3260
	ctx.r3.s64 = ctx.r7.s64 + -3260;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x82134570;
	sub_822E1618(ctx, base);
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r3,-30036(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30036, ctx.r3.u32);
	// addi r6,r5,-3300
	ctx.r6.s64 = ctx.r5.s64 + -3300;
	// addi r3,r4,21864
	ctx.r3.s64 = ctx.r4.s64 + 21864;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x82134594;
	sub_822E15D0(ctx, base);
	// bl 0x822b7f20
	ctx.lr = 0x82134598;
	sub_822B7F20(ctx, base);
	// lis r3,-32154
	ctx.r3.s64 = -2107244544;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r3,2812
	ctx.r5.s64 = ctx.r3.s64 + 2812;
	// addi r3,r10,-3932
	ctx.r3.s64 = ctx.r10.s64 + -3932;
	// addi r4,r11,7008
	ctx.r4.s64 = ctx.r11.s64 + 7008;
	// bl 0x8227da10
	ctx.lr = 0x821345B4;
	sub_8227DA10(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r30,r9,-13248
	ctx.r30.s64 = ctx.r9.s64 + -13248;
	// addi r5,r8,2792
	ctx.r5.s64 = ctx.r8.s64 + 2792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,-11984
	ctx.r4.s64 = ctx.r7.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x821345D4;
	sub_8227DA10(ctx, base);
	// lis r6,-32154
	ctx.r6.s64 = -2107244544;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// addi r5,r6,2772
	ctx.r5.s64 = ctx.r6.s64 + 2772;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r4,15952
	ctx.r4.s64 = ctx.r4.s64 + 15952;
	// bl 0x8227d138
	ctx.lr = 0x821345EC;
	sub_8227D138(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r30,r3,-3324
	ctx.r30.s64 = ctx.r3.s64 + -3324;
	// addi r5,r11,2752
	ctx.r5.s64 = ctx.r11.s64 + 2752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-11984
	ctx.r4.s64 = ctx.r10.s64 + -11984;
	// bl 0x8227da10
	ctx.lr = 0x8213460C;
	sub_8227DA10(ctx, base);
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r5,r9,2732
	ctx.r5.s64 = ctx.r9.s64 + 2732;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r8,15984
	ctx.r4.s64 = ctx.r8.s64 + 15984;
	// bl 0x8227d138
	ctx.lr = 0x82134624;
	sub_8227D138(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r7,-32154
	ctx.r7.s64 = -2107244544;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// addi r3,r4,-4036
	ctx.r3.s64 = ctx.r4.s64 + -4036;
	// addi r5,r7,2712
	ctx.r5.s64 = ctx.r7.s64 + 2712;
	// addi r4,r6,9536
	ctx.r4.s64 = ctx.r6.s64 + 9536;
	// bl 0x8227da10
	ctx.lr = 0x82134640;
	sub_8227DA10(ctx, base);
	// lis r3,-32154
	ctx.r3.s64 = -2107244544;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r3,2692
	ctx.r5.s64 = ctx.r3.s64 + 2692;
	// addi r3,r10,-3964
	ctx.r3.s64 = ctx.r10.s64 + -3964;
	// addi r4,r11,4920
	ctx.r4.s64 = ctx.r11.s64 + 4920;
	// bl 0x8227da10
	ctx.lr = 0x8213465C;
	sub_8227DA10(ctx, base);
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r5,r9,2672
	ctx.r5.s64 = ctx.r9.s64 + 2672;
	// addi r3,r7,-3992
	ctx.r3.s64 = ctx.r7.s64 + -3992;
	// addi r4,r8,5544
	ctx.r4.s64 = ctx.r8.s64 + 5544;
	// bl 0x8227da10
	ctx.lr = 0x82134678;
	sub_8227DA10(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// addi r30,r6,-4004
	ctx.r30.s64 = ctx.r6.s64 + -4004;
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// addi r5,r5,2652
	ctx.r5.s64 = ctx.r5.s64 + 2652;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r4,4800
	ctx.r4.s64 = ctx.r4.s64 + 4800;
	// bl 0x8227da10
	ctx.lr = 0x82134698;
	sub_8227DA10(ctx, base);
	// lis r3,-32154
	ctx.r3.s64 = -2107244544;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r3,2632
	ctx.r5.s64 = ctx.r3.s64 + 2632;
	// addi r3,r10,-4028
	ctx.r3.s64 = ctx.r10.s64 + -4028;
	// addi r4,r11,4984
	ctx.r4.s64 = ctx.r11.s64 + 4984;
	// bl 0x8227da10
	ctx.lr = 0x821346B4;
	sub_8227DA10(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r5,r9,-3328
	ctx.r5.s64 = ctx.r9.s64 + -3328;
	// addi r4,r8,-3336
	ctx.r4.s64 = ctx.r8.s64 + -3336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227dae8
	ctx.lr = 0x821346CC;
	sub_8227DAE8(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r7,-32154
	ctx.r7.s64 = -2107244544;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// addi r3,r4,-3344
	ctx.r3.s64 = ctx.r4.s64 + -3344;
	// addi r5,r7,2612
	ctx.r5.s64 = ctx.r7.s64 + 2612;
	// addi r4,r6,10408
	ctx.r4.s64 = ctx.r6.s64 + 10408;
	// bl 0x8227da10
	ctx.lr = 0x821346E8;
	sub_8227DA10(ctx, base);
	// lis r3,-32154
	ctx.r3.s64 = -2107244544;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r3,2592
	ctx.r5.s64 = ctx.r3.s64 + 2592;
	// addi r3,r10,-4112
	ctx.r3.s64 = ctx.r10.s64 + -4112;
	// addi r4,r11,8680
	ctx.r4.s64 = ctx.r11.s64 + 8680;
	// bl 0x8227da10
	ctx.lr = 0x82134704;
	sub_8227DA10(ctx, base);
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r5,r9,2572
	ctx.r5.s64 = ctx.r9.s64 + 2572;
	// addi r3,r7,-4132
	ctx.r3.s64 = ctx.r7.s64 + -4132;
	// addi r4,r8,8688
	ctx.r4.s64 = ctx.r8.s64 + 8688;
	// bl 0x8227da10
	ctx.lr = 0x82134720;
	sub_8227DA10(ctx, base);
	// lis r6,-32154
	ctx.r6.s64 = -2107244544;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r6,2552
	ctx.r5.s64 = ctx.r6.s64 + 2552;
	// addi r3,r3,-3360
	ctx.r3.s64 = ctx.r3.s64 + -3360;
	// addi r4,r4,10824
	ctx.r4.s64 = ctx.r4.s64 + 10824;
	// bl 0x8227da10
	ctx.lr = 0x8213473C;
	sub_8227DA10(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,2532
	ctx.r5.s64 = ctx.r11.s64 + 2532;
	// addi r3,r9,-4148
	ctx.r3.s64 = ctx.r9.s64 + -4148;
	// addi r4,r10,8792
	ctx.r4.s64 = ctx.r10.s64 + 8792;
	// bl 0x8227da10
	ctx.lr = 0x82134758;
	sub_8227DA10(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,2512
	ctx.r5.s64 = ctx.r8.s64 + 2512;
	// addi r3,r6,-4164
	ctx.r3.s64 = ctx.r6.s64 + -4164;
	// addi r4,r7,9072
	ctx.r4.s64 = ctx.r7.s64 + 9072;
	// bl 0x8227da10
	ctx.lr = 0x82134774;
	sub_8227DA10(ctx, base);
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,2492
	ctx.r5.s64 = ctx.r5.s64 + 2492;
	// addi r3,r3,-4180
	ctx.r3.s64 = ctx.r3.s64 + -4180;
	// addi r4,r4,9232
	ctx.r4.s64 = ctx.r4.s64 + 9232;
	// bl 0x8227da10
	ctx.lr = 0x82134790;
	sub_8227DA10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,-3388
	ctx.r8.s64 = ctx.r11.s64 + -3388;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r3,r10,-3408
	ctx.r3.s64 = ctx.r10.s64 + -3408;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x821347B4;
	sub_822E1660(ctx, base);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// stw r3,28800(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28800, ctx.r3.u32);
	// bl 0x82134c00
	ctx.lr = 0x821347C0;
	sub_82134C00(ctx, base);
	// bl 0x82134b90
	ctx.lr = 0x821347C4;
	sub_82134B90(ctx, base);
	// bl 0x82133198
	ctx.lr = 0x821347C8;
	sub_82133198(ctx, base);
	// bl 0x82142640
	ctx.lr = 0x821347CC;
	sub_82142640(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,2472
	ctx.r5.s64 = ctx.r8.s64 + 2472;
	// addi r3,r6,-3432
	ctx.r3.s64 = ctx.r6.s64 + -3432;
	// addi r4,r7,13040
	ctx.r4.s64 = ctx.r7.s64 + 13040;
	// bl 0x8227da10
	ctx.lr = 0x821347E8;
	sub_8227DA10(ctx, base);
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,2452
	ctx.r5.s64 = ctx.r5.s64 + 2452;
	// addi r3,r3,-3440
	ctx.r3.s64 = ctx.r3.s64 + -3440;
	// addi r4,r4,10888
	ctx.r4.s64 = ctx.r4.s64 + 10888;
	// bl 0x8227da10
	ctx.lr = 0x82134804;
	sub_8227DA10(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,2432
	ctx.r5.s64 = ctx.r11.s64 + 2432;
	// addi r3,r9,-3448
	ctx.r3.s64 = ctx.r9.s64 + -3448;
	// addi r4,r10,11464
	ctx.r4.s64 = ctx.r10.s64 + 11464;
	// bl 0x8227da10
	ctx.lr = 0x82134820;
	sub_8227DA10(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32204
	ctx.r7.s64 = -2110521344;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,2412
	ctx.r5.s64 = ctx.r8.s64 + 2412;
	// addi r3,r6,-3464
	ctx.r3.s64 = ctx.r6.s64 + -3464;
	// addi r4,r7,-19552
	ctx.r4.s64 = ctx.r7.s64 + -19552;
	// bl 0x8227da10
	ctx.lr = 0x8213483C;
	sub_8227DA10(ctx, base);
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,2392
	ctx.r5.s64 = ctx.r5.s64 + 2392;
	// addi r3,r3,-3476
	ctx.r3.s64 = ctx.r3.s64 + -3476;
	// addi r4,r4,12008
	ctx.r4.s64 = ctx.r4.s64 + 12008;
	// bl 0x8227da10
	ctx.lr = 0x82134858;
	sub_8227DA10(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,2372
	ctx.r5.s64 = ctx.r11.s64 + 2372;
	// addi r3,r9,-3500
	ctx.r3.s64 = ctx.r9.s64 + -3500;
	// addi r4,r10,12384
	ctx.r4.s64 = ctx.r10.s64 + 12384;
	// bl 0x8227da10
	ctx.lr = 0x82134874;
	sub_8227DA10(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,2352
	ctx.r5.s64 = ctx.r8.s64 + 2352;
	// addi r3,r6,-3524
	ctx.r3.s64 = ctx.r6.s64 + -3524;
	// addi r4,r7,12400
	ctx.r4.s64 = ctx.r7.s64 + 12400;
	// bl 0x8227da10
	ctx.lr = 0x82134890;
	sub_8227DA10(ctx, base);
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,2332
	ctx.r5.s64 = ctx.r5.s64 + 2332;
	// addi r3,r3,-3548
	ctx.r3.s64 = ctx.r3.s64 + -3548;
	// addi r4,r4,12120
	ctx.r4.s64 = ctx.r4.s64 + 12120;
	// bl 0x8227da10
	ctx.lr = 0x821348AC;
	sub_8227DA10(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,2312
	ctx.r5.s64 = ctx.r11.s64 + 2312;
	// addi r3,r9,-3560
	ctx.r3.s64 = ctx.r9.s64 + -3560;
	// addi r4,r10,12864
	ctx.r4.s64 = ctx.r10.s64 + 12864;
	// bl 0x8227da10
	ctx.lr = 0x821348C8;
	sub_8227DA10(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,2292
	ctx.r5.s64 = ctx.r8.s64 + 2292;
	// addi r3,r6,-3572
	ctx.r3.s64 = ctx.r6.s64 + -3572;
	// addi r4,r7,12872
	ctx.r4.s64 = ctx.r7.s64 + 12872;
	// bl 0x8227da10
	ctx.lr = 0x821348E4;
	sub_8227DA10(ctx, base);
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,2272
	ctx.r5.s64 = ctx.r5.s64 + 2272;
	// addi r3,r3,-3580
	ctx.r3.s64 = ctx.r3.s64 + -3580;
	// addi r4,r4,12904
	ctx.r4.s64 = ctx.r4.s64 + 12904;
	// bl 0x8227da10
	ctx.lr = 0x82134900;
	sub_8227DA10(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,2252
	ctx.r5.s64 = ctx.r11.s64 + 2252;
	// addi r3,r9,-3596
	ctx.r3.s64 = ctx.r9.s64 + -3596;
	// addi r4,r10,12936
	ctx.r4.s64 = ctx.r10.s64 + 12936;
	// bl 0x8227da10
	ctx.lr = 0x8213491C;
	sub_8227DA10(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32212
	ctx.r7.s64 = -2111045632;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,2232
	ctx.r5.s64 = ctx.r8.s64 + 2232;
	// addi r3,r6,-3612
	ctx.r3.s64 = ctx.r6.s64 + -3612;
	// addi r4,r7,3832
	ctx.r4.s64 = ctx.r7.s64 + 3832;
	// bl 0x8227da10
	ctx.lr = 0x82134938;
	sub_8227DA10(ctx, base);
	// bl 0x8213d150
	ctx.lr = 0x8213493C;
	sub_8213D150(ctx, base);
	// bl 0x8213c750
	ctx.lr = 0x82134940;
	sub_8213C750(ctx, base);
	// bl 0x821352e0
	ctx.lr = 0x82134944;
	sub_821352E0(ctx, base);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r5,6632
	ctx.r10.u64 = ctx.r5.u64 | 6632;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r9,-3656
	ctx.r4.s64 = ctx.r9.s64 + -3656;
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x82280900
	ctx.lr = 0x82134964;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x82134970;
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

PPC_WEAK_FUNC(sub_821340C0) {
	__imp__sub_821340C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82134984) {
	__imp__sub_82134984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134988) {
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
	// bl 0x82141458
	ctx.lr = 0x821349A0;
	sub_82141458(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821349e4
	if (ctx.cr6.eq) goto loc_821349E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x821349B4;
	sub_82141280(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821413c8
	ctx.lr = 0x821349BC;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821349e4
	if (ctx.cr6.eq) goto loc_821349E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3cc8
	ctx.lr = 0x821349D0;
	sub_822C3CC8(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x821349e4
	if (!ctx.cr6.eq) goto loc_821349E4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c4c00
	ctx.lr = 0x821349E4;
	sub_822C4C00(ctx, base);
loc_821349E4:
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

PPC_WEAK_FUNC(sub_82134988) {
	__imp__sub_82134988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821349F8) {
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
	// bl 0x82308950
	ctx.lr = 0x82134A10;
	sub_82308950(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141458
	ctx.lr = 0x82134A18;
	sub_82141458(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82134a74
	if (ctx.cr6.eq) goto loc_82134A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x82134A2C;
	sub_82141280(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821413c8
	ctx.lr = 0x82134A34;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82134a74
	if (ctx.cr6.eq) goto loc_82134A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3cc8
	ctx.lr = 0x82134A48;
	sub_822C3CC8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82134a68
	if (ctx.cr6.eq) goto loc_82134A68;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa08
	ctx.lr = 0x82134A5C;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82134a74
	if (!ctx.cr6.eq) goto loc_82134A74;
loc_82134A68:
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c4c00
	ctx.lr = 0x82134A74;
	sub_822C4C00(ctx, base);
loc_82134A74:
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

PPC_WEAK_FUNC(sub_821349F8) {
	__imp__sub_821349F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134A88) {
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
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82134ad4
	if (ctx.cr6.eq) goto loc_82134AD4;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16764);
	// bl 0x8213e760
	ctx.lr = 0x82134AC4;
	sub_8213E760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82134AD4:
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x82134AE4;
	sub_823DEAF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8213e760
	ctx.lr = 0x82134AEC;
	sub_8213E760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82134A88) {
	__imp__sub_82134A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82134AFC) {
	__imp__sub_82134AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134B00) {
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
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82134b48
	if (ctx.cr6.eq) goto loc_82134B48;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r3,-16764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16764);
	// bl 0x8213b9f0
	ctx.lr = 0x82134B38;
	sub_8213B9F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82134B48:
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x82134B58;
	sub_823DEAF8(ctx, base);
	// bl 0x8213b9f0
	ctx.lr = 0x82134B5C;
	sub_8213B9F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82134B00) {
	__imp__sub_82134B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82134B6C) {
	__imp__sub_82134B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134B70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x8230ca50
	sub_8230CA50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82134B70) {
	__imp__sub_82134B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82134B8C) {
	__imp__sub_82134B8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134B90) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,2872
	ctx.r5.s64 = ctx.r11.s64 + 2872;
	// addi r3,r9,-3820
	ctx.r3.s64 = ctx.r9.s64 + -3820;
	// addi r4,r10,19080
	ctx.r4.s64 = ctx.r10.s64 + 19080;
	// bl 0x8227da10
	ctx.lr = 0x82134BB8;
	sub_8227DA10(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,2852
	ctx.r5.s64 = ctx.r8.s64 + 2852;
	// addi r3,r6,-1992
	ctx.r3.s64 = ctx.r6.s64 + -1992;
	// addi r4,r7,19200
	ctx.r4.s64 = ctx.r7.s64 + 19200;
	// bl 0x8227da10
	ctx.lr = 0x82134BD4;
	sub_8227DA10(ctx, base);
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,2832
	ctx.r5.s64 = ctx.r5.s64 + 2832;
	// addi r3,r3,-2008
	ctx.r3.s64 = ctx.r3.s64 + -2008;
	// addi r4,r4,19312
	ctx.r4.s64 = ctx.r4.s64 + 19312;
	// bl 0x8227da10
	ctx.lr = 0x82134BF0;
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

PPC_WEAK_FUNC(sub_82134B90) {
	__imp__sub_82134B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134C00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82134C00) {
	__imp__sub_82134C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82134C04) {
	__imp__sub_82134C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r11,2120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r10,-1944
	ctx.r4.s64 = ctx.r10.s64 + -1944;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82134C08) {
	__imp__sub_82134C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134C3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82134C3C) {
	__imp__sub_82134C3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134C40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r9,29088(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82134c68
	if (ctx.cr6.eq) goto loc_82134C68;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mulli r9,r3,9780
	ctx.r9.s64 = ctx.r3.s64 * 9780;
	// addi r11,r10,9240
	ctx.r11.s64 = ctx.r10.s64 + 9240;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lhzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
loc_82134C68:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-29944
	ctx.r10.s64 = ctx.r10.s64 + -29944;
	// ori r8,r9,48796
	ctx.r8.u64 = ctx.r9.u64 | 48796;
	// addi r10,r10,4216
	ctx.r10.s64 = ctx.r10.s64 + 4216;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r5,r5,44196
	ctx.r5.u64 = ctx.r5.u64 | 44196;
	// b 0x823de1f0
	sub_823DE1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82134C40) {
	__imp__sub_82134C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134C90) {
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
	// bl 0x82288288
	ctx.lr = 0x82134CAC;
	sub_82288288(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,28832
	ctx.r31.s64 = ctx.r10.s64 + 28832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// bl 0x822881b0
	ctx.lr = 0x82134CC4;
	sub_822881B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// bl 0x820f1d50
	ctx.lr = 0x82134CD4;
	sub_820F1D50(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lwz r11,2120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2120);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82134d04
	if (!ctx.cr6.eq) goto loc_82134D04;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r9,r11,6636
	ctx.r9.u64 = ctx.r11.u64 | 6636;
	// addi r4,r10,-1932
	ctx.r4.s64 = ctx.r10.s64 + -1932;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82280900
	ctx.lr = 0x82134D04;
	sub_82280900(ctx, base);
loc_82134D04:
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

PPC_WEAK_FUNC(sub_82134C90) {
	__imp__sub_82134C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82134D1C) {
	__imp__sub_82134D1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82134D28;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r27,r11,28832
	ctx.r27.s64 = ctx.r11.s64 + 28832;
	// ori r9,r10,6635
	ctx.r9.u64 = ctx.r10.u64 | 6635;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r8,r27,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82134d60
	if (ctx.cr6.eq) goto loc_82134D60;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r3,-356(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -356);
	// bl 0x820f7df0
	ctx.lr = 0x82134D58;
	sub_820F7DF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82131d58
	ctx.lr = 0x82134D60;
	sub_82131D58(ctx, base);
loc_82134D60:
	// addis r11,r27,9
	ctx.r11.s64 = ctx.r27.s64 + 589824;
	// addis r10,r27,9
	ctx.r10.s64 = ctx.r27.s64 + 589824;
	// addi r11,r11,598
	ctx.r11.s64 = ctx.r11.s64 + 598;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r24,r11,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r29,r10,598
	ctx.r29.s64 = ctx.r10.s64 + 598;
	// lis r25,-32190
	ctx.r25.s64 = -2109603840;
	// lis r23,-32166
	ctx.r23.s64 = -2108030976;
	// addi r26,r11,9240
	ctx.r26.s64 = ctx.r11.s64 + 9240;
loc_82134D88:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhzx r4,r24,r29
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82134da0
	if (ctx.cr6.eq) goto loc_82134DA0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82134e38
	if (ctx.cr6.eq) goto loc_82134E38;
loc_82134DA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a24e0
	ctx.lr = 0x82134DA8;
	sub_822A24E0(ctx, base);
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,6635
	ctx.r10.u64 = ctx.r11.u64 | 6635;
	// lbzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82134e38
	if (ctx.cr6.eq) goto loc_82134E38;
	// lwz r10,-32312(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r26,24
	ctx.r31.s64 = ctx.r26.s64 + 24;
loc_82134DC8:
	// lbz r9,29088(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82134dec
	if (!ctx.cr6.eq) goto loc_82134DEC;
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
	// b 0x82134dfc
	goto loc_82134DFC;
loc_82134DEC:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82134DFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82134e24
	if (ctx.cr6.eq) goto loc_82134E24;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82134e18
	if (ctx.cr6.eq) goto loc_82134E18;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_82134E18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82106658
	ctx.lr = 0x82134E20;
	sub_82106658(ctx, base);
	// lwz r10,-32312(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
loc_82134E24:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r26,19584
	ctx.r11.s64 = ctx.r26.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82134dc8
	if (ctx.cr6.lt) goto loc_82134DC8;
loc_82134E38:
	// addis r11,r27,9
	ctx.r11.s64 = ctx.r27.s64 + 589824;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r11,r11,6632
	ctx.r11.s64 = ctx.r11.s64 + 6632;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82134d88
	if (ctx.cr6.lt) goto loc_82134D88;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82134D20) {
	__imp__sub_82134D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134E58) {
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
	// mulli r10,r3,12824
	ctx.r10.s64 = ctx.r3.s64 * 12824;
	// addi r11,r11,-16408
	ctx.r11.s64 = ctx.r11.s64 + -16408;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,8208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8208);
	// bl 0x8210a4f0
	ctx.lr = 0x82134E88;
	sub_8210A4F0(ctx, base);
	// lwz r10,8208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8208);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82134f00
	if (ctx.cr6.eq) goto loc_82134F00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r30,8216
	ctx.r3.s64 = ctx.r30.s64 + 8216;
	// stw r11,8204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8204, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8208, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8212, ctx.r9.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823de1f0
	ctx.lr = 0x82134EC0;
	sub_823DE1F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82134f00
	if (ctx.cr6.gt) goto loc_82134F00;
loc_82134ED4:
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,1027
	ctx.r9.s64 = ctx.r10.s64 + 1027;
	// addi r8,r10,3078
	ctx.r8.s64 = ctx.r10.s64 + 3078;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stwx r5,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r5.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82134ed4
	if (!ctx.cr6.gt) goto loc_82134ED4;
loc_82134F00:
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

PPC_WEAK_FUNC(sub_82134E58) {
	__imp__sub_82134E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82134F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82134F20;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32154
	ctx.r24.s64 = -2107244544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2120(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2120);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82134f54
	if (!ctx.cr6.eq) goto loc_82134F54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,12256
	ctx.r4.s64 = ctx.r11.s64 + 12256;
	// bl 0x82280900
	ctx.lr = 0x82134F50;
	sub_82280900(ctx, base);
	// b 0x82134f6c
	goto loc_82134F6C;
loc_82134F54:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82134f6c
	if (ctx.cr6.lt) goto loc_82134F6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-1772
	ctx.r4.s64 = ctx.r11.s64 + -1772;
	// bl 0x82280900
	ctx.lr = 0x82134F6C;
	sub_82280900(ctx, base);
loc_82134F6C:
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32165
	ctx.r5.s64 = -2107965440;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r6,-1932
	ctx.r26.s64 = ctx.r6.s64 + -1932;
	// addi r29,r5,28832
	ctx.r29.s64 = ctx.r5.s64 + 28832;
	// addi r28,r7,-1944
	ctx.r28.s64 = ctx.r7.s64 + -1944;
	// addi r23,r8,-1828
	ctx.r23.s64 = ctx.r8.s64 + -1828;
	// addi r27,r9,-1844
	ctx.r27.s64 = ctx.r9.s64 + -1844;
	// addi r25,r10,3440
	ctx.r25.s64 = ctx.r10.s64 + 3440;
	// addi r22,r11,-1900
	ctx.r22.s64 = ctx.r11.s64 + -1900;
loc_82134FA4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82134fc0
	if (!ctx.cr6.gt) goto loc_82134FC0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82134FC0;
	sub_822830E8(ctx, base);
loc_82134FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x82134FC8;
	sub_822881B0(ctx, base);
	// lwz r11,2120(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x8213508c
	if (ctx.cr6.eq) goto loc_8213508C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8213501c
	if (ctx.cr6.lt) goto loc_8213501C;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwzx r7,r11,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82135010
	if (!ctx.cr6.eq) goto loc_82135010;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82280900
	ctx.lr = 0x8213500C;
	sub_82280900(ctx, base);
	// b 0x8213501c
	goto loc_8213501C;
loc_82135010:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82280900
	ctx.lr = 0x8213501C;
	sub_82280900(ctx, base);
loc_8213501C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82135038
	if (ctx.cr6.eq) goto loc_82135038;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82135034;
	sub_822830E8(ctx, base);
	// b 0x82134fa4
	goto loc_82134FA4;
loc_82135038:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288288
	ctx.lr = 0x82135040;
	sub_82288288(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,580(r29)
	PPC_STORE_U32(ctx.r29.u32 + 580, ctx.r11.u32);
	// bl 0x822881b0
	ctx.lr = 0x82135050;
	sub_822881B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,576(r29)
	PPC_STORE_U32(ctx.r29.u32 + 576, ctx.r11.u32);
	// bl 0x820f1d50
	ctx.lr = 0x82135060;
	sub_820F1D50(ctx, base);
	// lwz r11,2120(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2120);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82134fa4
	if (!ctx.cr6.eq) goto loc_82134FA4;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ori r10,r11,6636
	ctx.r10.u64 = ctx.r11.u64 | 6636;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwzx r5,r29,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x82280900
	ctx.lr = 0x82135088;
	sub_82280900(ctx, base);
	// b 0x82134fa4
	goto loc_82134FA4;
loc_8213508C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821350b4
	if (ctx.cr6.lt) goto loc_821350B4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r10,-1916
	ctx.r7.s64 = ctx.r10.s64 + -1916;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821350B4;
	sub_82280900(ctx, base);
loc_821350B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82134F18) {
	__imp__sub_82134F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821350BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821350BC) {
	__imp__sub_821350BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821350C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r4,15
	ctx.r6.s64 = ctx.r4.s64 + 15;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// rlwinm r11,r6,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r5,r10,588
	ctx.r5.s64 = ctx.r10.s64 + 588;
loc_821350D4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821350d4
	if (!ctx.cr0.eq) goto loc_821350D4;
	// mr r9,r9
	ctx.r9.u64 = ctx.r9.u64;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r11,r4,65520
	ctx.r11.u64 = ctx.r4.u64 | 65520;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8213511c
	if (ctx.cr6.gt) goto loc_8213511C;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r8,r11,592
	ctx.r8.u64 = ctx.r11.u64 | 592;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
loc_8213511C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821350C0) {
	__imp__sub_821350C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82135124) {
	__imp__sub_82135124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r3,584(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 584);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82135128) {
	__imp__sub_82135128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82135140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r29,584(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 584);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822f2260
	ctx.lr = 0x82135164;
	sub_822F2260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8213518c
	if (ctx.cr6.eq) goto loc_8213518C;
	// bl 0x822f2360
	ctx.lr = 0x82135174;
	sub_822F2360(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f22f8
	ctx.lr = 0x82135184;
	sub_822F22F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213518C:
	// bl 0x822f2340
	ctx.lr = 0x82135190;
	sub_822F2340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821350c0
	ctx.lr = 0x8213519C;
	sub_821350C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821351c4
	if (ctx.cr6.eq) goto loc_821351C4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f2350
	ctx.lr = 0x821351B8;
	sub_822F2350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821351C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,-13208
	ctx.r4.s64 = ctx.r10.s64 + -13208;
	// bl 0x822830e8
	ctx.lr = 0x821351DC;
	sub_822830E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82135138) {
	__imp__sub_82135138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821351E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82135228
	if (ctx.cr6.eq) goto loc_82135228;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r9,r11,9240
	ctx.r9.s64 = ctx.r11.s64 + 9240;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
loc_82135204:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82135218
	if (ctx.cr6.eq) goto loc_82135218;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82135230
	if (!ctx.cr6.eq) goto loc_82135230;
loc_82135218:
	// addi r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 + 9780;
	// addi r10,r9,19576
	ctx.r10.s64 = ctx.r9.s64 + 19576;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82135204
	if (ctx.cr6.lt) goto loc_82135204;
loc_82135228:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82135230:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821351E8) {
	__imp__sub_821351E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82135240;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,28832
	ctx.r27.s64 = ctx.r11.s64 + 28832;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,384(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// bl 0x8238b698
	ctx.lr = 0x82135264;
	sub_8238B698(ctx, base);
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// lwz r5,384(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// extsw r9,r31
	ctx.r9.s64 = ctx.r31.s32;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lfs f4,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f5,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// fadds f2,f9,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// bl 0x82391e90
	ctx.lr = 0x821352D8;
	sub_82391E90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82135238) {
	__imp__sub_82135238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821352E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2900, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821352E0) {
	__imp__sub_821352E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821352F0) {
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
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82135324
	if (!ctx.cr6.eq) goto loc_82135324;
loc_82135310:
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
loc_82135324:
	// bl 0x821351e8
	ctx.lr = 0x82135328;
	sub_821351E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82135344
	if (ctx.cr6.eq) goto loc_82135344;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c3f30
	ctx.lr = 0x8213533C;
	sub_822C3F30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82135310
	if (!ctx.cr6.eq) goto loc_82135310;
loc_82135344:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
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
}

PPC_WEAK_FUNC(sub_821352F0) {
	__imp__sub_821352F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213536C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213536C) {
	__imp__sub_8213536C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135370) {
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
	// bl 0x821fc6c8
	ctx.lr = 0x82135380;
	sub_821FC6C8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82135370) {
	__imp__sub_82135370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821353A0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82113110
	ctx.lr = 0x821353C0;
	sub_82113110(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa08
	ctx.lr = 0x821353CC;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821353e0
	if (ctx.cr6.eq) goto loc_821353E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c4808
	ctx.lr = 0x821353E0;
	sub_822C4808(ctx, base);
loc_821353E0:
	// bl 0x823912a8
	ctx.lr = 0x821353E4;
	sub_823912A8(ctx, base);
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

PPC_WEAK_FUNC(sub_821353A0) {
	__imp__sub_821353A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821353F8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213540C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e4260
	ctx.lr = 0x82135414;
	sub_820E4260(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c2688
	ctx.lr = 0x8213541C;
	sub_822C2688(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8213540c
	if (ctx.cr6.lt) goto loc_8213540C;
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

PPC_WEAK_FUNC(sub_821353F8) {
	__imp__sub_821353F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213543C) {
	__imp__sub_8213543C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135440) {
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
	// bl 0x821202a0
	ctx.lr = 0x82135450;
	sub_821202A0(ctx, base);
	// bl 0x82393cc0
	ctx.lr = 0x82135454;
	sub_82393CC0(ctx, base);
	// bl 0x821353f8
	ctx.lr = 0x82135458;
	sub_821353F8(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82135474
	if (!ctx.cr6.eq) goto loc_82135474;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e5f18
	ctx.lr = 0x82135474;
	sub_820E5F18(ctx, base);
loc_82135474:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82127500
	ctx.lr = 0x8213547C;
	sub_82127500(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82135440) {
	__imp__sub_82135440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213548C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213548C) {
	__imp__sub_8213548C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-2296
	ctx.r4.s64 = ctx.r10.s64 + -2296;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823933e8
	sub_823933E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82135490) {
	__imp__sub_82135490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821354AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821354AC) {
	__imp__sub_821354AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821354B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821354B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821410d8
	ctx.lr = 0x821354C4;
	sub_821410D8(ctx, base);
	// bl 0x82391280
	ctx.lr = 0x821354C8;
	sub_82391280(ctx, base);
	// bl 0x82393cc0
	ctx.lr = 0x821354CC;
	sub_82393CC0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r30,r11,28832
	ctx.r30.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82135504
	if (!ctx.cr6.eq) goto loc_82135504;
loc_821354E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-2296
	ctx.r4.s64 = ctx.r10.s64 + -2296;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823933e8
	ctx.lr = 0x821354FC;
	sub_823933E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82135504:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// beq cr6,0x821354e0
	if (ctx.cr6.eq) goto loc_821354E0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213551C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821413c8
	ctx.lr = 0x82135524;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213553c
	if (ctx.cr6.eq) goto loc_8213553C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,352(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// bl 0x822c2360
	ctx.lr = 0x8213553C;
	sub_822C2360(ctx, base);
loc_8213553C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8213551c
	if (ctx.cr6.lt) goto loc_8213551C;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// bgt cr6,0x82135654
	if (ctx.cr6.gt) goto loc_82135654;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82135634
	if (ctx.cr6.eq) goto loc_82135634;
	// bdz 0x82135574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82135574;
	// bdz 0x821355b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821355B8;
	// bdz 0x82135608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82135608;
	// bdz 0x821355dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821355DC;
	// bdz 0x82135654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82135654;
	// b 0x82135608
	goto loc_82135608;
loc_82135574:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-2296
	ctx.r4.s64 = ctx.r10.s64 + -2296;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823933e8
	ctx.lr = 0x82135590;
	sub_823933E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82121608
	ctx.lr = 0x82135598;
	sub_82121608(ctx, base);
	// lis r9,-31859
	ctx.r9.s64 = -2087911424;
	// lwz r11,31492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31492);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82135664
	if (ctx.cr6.eq) goto loc_82135664;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4670
	ctx.lr = 0x821355B4;
	sub_822C4670(ctx, base);
	// b 0x82135664
	goto loc_82135664;
loc_821355B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-2296
	ctx.r4.s64 = ctx.r10.s64 + -2296;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823933e8
	ctx.lr = 0x821355D4;
	sub_823933E8(ctx, base);
	// bl 0x82133ef0
	ctx.lr = 0x821355D8;
	sub_82133EF0(ctx, base);
	// b 0x82135664
	goto loc_82135664;
loc_821355DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-2296
	ctx.r4.s64 = ctx.r10.s64 + -2296;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823933e8
	ctx.lr = 0x821355F8;
	sub_823933E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4808
	ctx.lr = 0x82135600;
	sub_822C4808(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82135608:
	// bl 0x82141398
	ctx.lr = 0x8213560C;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82135618
	if (!ctx.cr6.eq) goto loc_82135618;
	// bl 0x82110818
	ctx.lr = 0x82135618;
	sub_82110818(ctx, base);
loc_82135618:
	// bl 0x8228bc50
	ctx.lr = 0x8213561C;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82135664
	if (ctx.cr6.eq) goto loc_82135664;
	// bl 0x82393f58
	ctx.lr = 0x8213562C;
	sub_82393F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82135664
	if (ctx.cr6.eq) goto loc_82135664;
loc_82135634:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-2296
	ctx.r4.s64 = ctx.r10.s64 + -2296;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823933e8
	ctx.lr = 0x82135650;
	sub_823933E8(ctx, base);
	// b 0x82135664
	goto loc_82135664;
loc_82135654:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-1752
	ctx.r4.s64 = ctx.r11.s64 + -1752;
	// bl 0x822830e8
	ctx.lr = 0x82135664;
	sub_822830E8(ctx, base);
loc_82135664:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8213568c
	if (!ctx.cr6.eq) goto loc_8213568C;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212fa08
	ctx.lr = 0x82135678;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213568c
	if (ctx.cr6.eq) goto loc_8213568C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4808
	ctx.lr = 0x8213568C;
	sub_822C4808(ctx, base);
loc_8213568C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821354B0) {
	__imp__sub_821354B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82135694) {
	__imp__sub_82135694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135698) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8212fa08
	ctx.lr = 0x821356B4;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213570c
	if (ctx.cr6.eq) goto loc_8213570C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213570c
	if (ctx.cr6.eq) goto loc_8213570C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8213570c
	if (ctx.cr6.eq) goto loc_8213570C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c3f50
	ctx.lr = 0x821356F8;
	sub_822C3F50(ctx, base);
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
loc_8213570C:
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82135698) {
	__imp__sub_82135698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82135730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821357ac
	if (!ctx.cr6.eq) goto loc_821357AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8213574C;
	sub_82141340(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82135780
	if (!ctx.cr6.eq) goto loc_82135780;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82135780
	if (!ctx.cr6.eq) goto loc_82135780;
	// bl 0x82307c68
	ctx.lr = 0x8213577C;
	sub_82307C68(ctx, base);
	// b 0x82135784
	goto loc_82135784;
loc_82135780:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82135784:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82135788:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82135798
	if (ctx.cr6.eq) goto loc_82135798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307c40
	ctx.lr = 0x82135798;
	sub_82307C40(ctx, base);
loc_82135798:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82135788
	if (ctx.cr6.lt) goto loc_82135788;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821357AC:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-30024
	ctx.r29.s64 = ctx.r11.s64 + -30024;
	// lis r28,-31936
	ctx.r28.s64 = -2092957696;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
loc_821357C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821357ec
	if (!ctx.cr6.eq) goto loc_821357EC;
	// lwz r11,-9404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9404);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821357ec
	if (!ctx.cr6.eq) goto loc_821357EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141340
	ctx.lr = 0x821357E4;
	sub_82141340(ctx, base);
	// bl 0x82307c68
	ctx.lr = 0x821357E8;
	sub_82307C68(ctx, base);
	// b 0x821357f8
	goto loc_821357F8;
loc_821357EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141340
	ctx.lr = 0x821357F4;
	sub_82141340(ctx, base);
	// bl 0x82307c40
	ctx.lr = 0x821357F8;
	sub_82307C40(ctx, base);
loc_821357F8:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r29,76
	ctx.r11.s64 = ctx.r29.s64 + 76;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821357c0
	if (ctx.cr6.lt) goto loc_821357C0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82135728) {
	__imp__sub_82135728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82135814) {
	__imp__sub_82135814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82135820;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823932c0
	ctx.lr = 0x82135828;
	sub_823932C0(ctx, base);
	// bl 0x82364ad8
	ctx.lr = 0x8213582C;
	sub_82364AD8(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x8228bcc0
	ctx.lr = 0x8213583C;
	sub_8228BCC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r26,r11,-30024
	ctx.r26.s64 = ctx.r11.s64 + -30024;
	// beq cr6,0x821359dc
	if (ctx.cr6.eq) goto loc_821359DC;
	// bl 0x822576c8
	ctx.lr = 0x82135854;
	sub_822576C8(ctx, base);
	// bl 0x82141b20
	ctx.lr = 0x82135858;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
loc_82135870:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821413c8
	ctx.lr = 0x82135878;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213589c
	if (ctx.cr6.eq) goto loc_8213589C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_8213589C:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r26,76
	ctx.r11.s64 = ctx.r26.s64 + 76;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82135870
	if (ctx.cr6.lt) goto loc_82135870;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821359d4
	if (ctx.cr6.eq) goto loc_821359D4;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x821358cc
	if (!ctx.cr6.gt) goto loc_821358CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82389e18
	ctx.lr = 0x821358CC;
	sub_82389E18(ctx, base);
loc_821358CC:
	// bl 0x821fc6c8
	ctx.lr = 0x821358D0;
	sub_821FC6C8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// subfic r8,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r3.s64;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 & ctx.r6.u64;
	// lwz r3,-356(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -356);
	// lwz r5,348(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// bl 0x82112738
	ctx.lr = 0x821358F8;
	sub_82112738(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821358FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821413c8
	ctx.lr = 0x82135904;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82135918
	if (ctx.cr6.eq) goto loc_82135918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821127a0
	ctx.lr = 0x82135918;
	sub_821127A0(ctx, base);
loc_82135918:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x821358fc
	if (ctx.cr6.lt) goto loc_821358FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c3f30
	ctx.lr = 0x8213592C;
	sub_822C3F30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821359d4
	if (!ctx.cr6.eq) goto loc_821359D4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213593C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821413c8
	ctx.lr = 0x82135944;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821359c0
	if (ctx.cr6.eq) goto loc_821359C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82113110
	ctx.lr = 0x82135960;
	sub_82113110(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa08
	ctx.lr = 0x8213596C;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82135980
	if (ctx.cr6.eq) goto loc_82135980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c4808
	ctx.lr = 0x82135980;
	sub_822C4808(ctx, base);
loc_82135980:
	// bl 0x823912a8
	ctx.lr = 0x82135984;
	sub_823912A8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82135994
	if (!ctx.cr6.eq) goto loc_82135994;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82135994:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x821359c0
	if (ctx.cr6.eq) goto loc_821359C0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x821359b8
	if (!ctx.cr6.eq) goto loc_821359B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82390e20
	ctx.lr = 0x821359B0;
	sub_82390E20(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x821359c0
	goto loc_821359C0;
loc_821359B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82390e20
	ctx.lr = 0x821359C0;
	sub_82390E20(ctx, base);
loc_821359C0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8213593c
	if (ctx.cr6.lt) goto loc_8213593C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x821359e0
	if (!ctx.cr6.eq) goto loc_821359E0;
loc_821359D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8217a6e8
	ctx.lr = 0x821359DC;
	sub_8217A6E8(ctx, base);
loc_821359DC:
	// bl 0x821338a0
	ctx.lr = 0x821359E0;
	sub_821338A0(ctx, base);
loc_821359E0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x821359ec
	if (!ctx.cr6.eq) goto loc_821359EC;
	// bl 0x82391320
	ctx.lr = 0x821359EC;
	sub_82391320(ctx, base);
loc_821359EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821354b0
	ctx.lr = 0x821359F4;
	sub_821354B0(ctx, base);
	// bl 0x821202a0
	ctx.lr = 0x821359F8;
	sub_821202A0(ctx, base);
	// bl 0x82393cc0
	ctx.lr = 0x821359FC;
	sub_82393CC0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82135A00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e4260
	ctx.lr = 0x82135A08;
	sub_820E4260(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c2688
	ctx.lr = 0x82135A10;
	sub_822C2688(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82135a00
	if (ctx.cr6.lt) goto loc_82135A00;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82135a30
	if (!ctx.cr6.eq) goto loc_82135A30;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e5f18
	ctx.lr = 0x82135A30;
	sub_820E5F18(ctx, base);
loc_82135A30:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82127500
	ctx.lr = 0x82135A38;
	sub_82127500(ctx, base);
	// bl 0x821410e8
	ctx.lr = 0x82135A3C;
	sub_821410E8(ctx, base);
	// bl 0x82393360
	ctx.lr = 0x82135A40;
	sub_82393360(ctx, base);
	// cntlzw r11,r24
	ctx.r11.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x82390e20
	ctx.lr = 0x82135A50;
	sub_82390E20(ctx, base);
	// bl 0x82390bf0
	ctx.lr = 0x82135A54;
	sub_82390BF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82135a84
	if (ctx.cr6.eq) goto loc_82135A84;
	// lis r31,-32052
	ctx.r31.s64 = -2100559872;
	// lwz r11,-17704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82135a84
	if (ctx.cr6.eq) goto loc_82135A84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-1716
	ctx.r4.s64 = ctx.r11.s64 + -1716;
	// bl 0x82130ec0
	ctx.lr = 0x82135A7C;
	sub_82130EC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17704, ctx.r11.u32);
loc_82135A84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82135818) {
	__imp__sub_82135818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82135A8C) {
	__imp__sub_82135A8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135A90) {
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
	// lis r31,-32154
	ctx.r31.s64 = -2107244544;
	// lbz r11,2904(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82135afc
	if (!ctx.cr6.eq) goto loc_82135AFC;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82135ac8
	if (!ctx.cr6.eq) goto loc_82135AC8;
	// bl 0x8230d978
	ctx.lr = 0x82135AC8;
	sub_8230D978(ctx, base);
loc_82135AC8:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lwz r11,2900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82135afc
	if (ctx.cr6.eq) goto loc_82135AFC;
	// bl 0x82280f20
	ctx.lr = 0x82135ADC;
	sub_82280F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82135afc
	if (!ctx.cr6.eq) goto loc_82135AFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2904(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2904, ctx.r11.u8);
	// bl 0x82135818
	ctx.lr = 0x82135AF4;
	sub_82135818(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2904(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2904, ctx.r11.u8);
loc_82135AFC:
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

PPC_WEAK_FUNC(sub_82135A90) {
	__imp__sub_82135A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135B10) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-960
	ctx.r4.s64 = ctx.r11.s64 + -960;
	// bl 0x82280900
	ctx.lr = 0x82135B2C;
	sub_82280900(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-1032
	ctx.r4.s64 = ctx.r10.s64 + -1032;
	// bl 0x82280900
	ctx.lr = 0x82135B3C;
	sub_82280900(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,-1096
	ctx.r4.s64 = ctx.r9.s64 + -1096;
	// bl 0x82280900
	ctx.lr = 0x82135B4C;
	sub_82280900(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r4,r8,-1140
	ctx.r4.s64 = ctx.r8.s64 + -1140;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82135B60;
	sub_82280900(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r7,-1232
	ctx.r4.s64 = ctx.r7.s64 + -1232;
	// bl 0x82280900
	ctx.lr = 0x82135B70;
	sub_82280900(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r6,-1296
	ctx.r4.s64 = ctx.r6.s64 + -1296;
	// bl 0x82280900
	ctx.lr = 0x82135B80;
	sub_82280900(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r5,-1360
	ctx.r4.s64 = ctx.r5.s64 + -1360;
	// bl 0x82280900
	ctx.lr = 0x82135B90;
	sub_82280900(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r4,-1456
	ctx.r4.s64 = ctx.r4.s64 + -1456;
	// bl 0x82280900
	ctx.lr = 0x82135BA0;
	sub_82280900(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-1552
	ctx.r4.s64 = ctx.r11.s64 + -1552;
	// bl 0x82280900
	ctx.lr = 0x82135BB0;
	sub_82280900(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-1608
	ctx.r4.s64 = ctx.r10.s64 + -1608;
	// bl 0x82280900
	ctx.lr = 0x82135BC0;
	sub_82280900(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,-1696
	ctx.r4.s64 = ctx.r9.s64 + -1696;
	// bl 0x82280900
	ctx.lr = 0x82135BD0;
	sub_82280900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82135B10) {
	__imp__sub_82135B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82135BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82135BE8;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82121098
	ctx.lr = 0x82135C00;
	sub_82121098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82135c28
	if (!ctx.cr6.eq) goto loc_82135C28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-712
	ctx.r4.s64 = ctx.r11.s64 + -712;
	// bl 0x82280900
	ctx.lr = 0x82135C14;
	sub_82280900(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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
loc_82135C28:
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// blt cr6,0x82135ed0
	if (ctx.cr6.lt) goto loc_82135ED0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// addi r30,r11,-28736
	ctx.r30.s64 = ctx.r11.s64 + -28736;
	// ble cr6,0x82135c68
	if (!ctx.cr6.gt) goto loc_82135C68;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82135c6c
	goto loc_82135C6C;
loc_82135C68:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82135C6C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82135C70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82135c70
	if (!ctx.cr6.eq) goto loc_82135C70;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// bgt cr6,0x82135ed0
	if (ctx.cr6.gt) goto loc_82135ED0;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x82135cac
	if (!ctx.cr6.gt) goto loc_82135CAC;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82135cb0
	goto loc_82135CB0;
loc_82135CAC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82135CB0:
	// addi r9,r1,95
	ctx.r9.s64 = ctx.r1.s64 + 95;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_82135CB8:
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
	// bne cr6,0x82135cb8
	if (!ctx.cr6.eq) goto loc_82135CB8;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x82135ce0
	if (!ctx.cr6.gt) goto loc_82135CE0;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82135ce4
	goto loc_82135CE4;
loc_82135CE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82135CE4:
	// bl 0x823deaf8
	ctx.lr = 0x82135CE8;
	sub_823DEAF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x82135ed0
	if (ctx.cr6.lt) goto loc_82135ED0;
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// bgt cr6,0x82135ed0
	if (ctx.cr6.gt) goto loc_82135ED0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82135ed0
	if (!ctx.cr6.eq) goto loc_82135ED0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f30,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,-716(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -716);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x82135e30
	if (!ctx.cr6.eq) goto loc_82135E30;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r4,r9,-728
	ctx.r4.s64 = ctx.r9.s64 + -728;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x822e8058
	ctx.lr = 0x82135D68;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82135ed0
	if (!ctx.cr6.eq) goto loc_82135ED0;
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
	// ble cr6,0x82135d98
	if (!ctx.cr6.gt) goto loc_82135D98;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82135d9c
	goto loc_82135D9C;
loc_82135D98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82135D9C:
	// bl 0x823dec00
	ctx.lr = 0x82135DA0;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x82135dd0
	if (!ctx.cr6.gt) goto loc_82135DD0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x82135dd4
	goto loc_82135DD4;
loc_82135DD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82135DD4:
	// bl 0x823dec00
	ctx.lr = 0x82135DD8;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// ble cr6,0x82135e18
	if (!ctx.cr6.gt) goto loc_82135E18;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// bl 0x823dec00
	ctx.lr = 0x82135E08;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82135ef0
	goto loc_82135EF0;
loc_82135E18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dec00
	ctx.lr = 0x82135E20;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82135ef0
	goto loc_82135EF0;
loc_82135E30:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82135ee8
	if (!ctx.cr6.eq) goto loc_82135EE8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r4,r9,-736
	ctx.r4.s64 = ctx.r9.s64 + -736;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x822e8058
	ctx.lr = 0x82135E50;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82135ed0
	if (!ctx.cr6.eq) goto loc_82135ED0;
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
	// ble cr6,0x82135e80
	if (!ctx.cr6.gt) goto loc_82135E80;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82135e84
	goto loc_82135E84;
loc_82135E80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82135E84:
	// bl 0x823dec00
	ctx.lr = 0x82135E88;
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
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x82135eb4
	if (!ctx.cr6.gt) goto loc_82135EB4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x82135eb8
	goto loc_82135EB8;
loc_82135EB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82135EB8:
	// bl 0x823dec00
	ctx.lr = 0x82135EBC;
	sub_823DEC00(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// blt cr6,0x82135ed0
	if (ctx.cr6.lt) goto loc_82135ED0;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82135ef0
	if (!ctx.cr6.lt) goto loc_82135EF0;
loc_82135ED0:
	// bl 0x82135b10
	ctx.lr = 0x82135ED4;
	sub_82135B10(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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
loc_82135EE8:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82135ed0
	if (!ctx.cr6.eq) goto loc_82135ED0;
loc_82135EF0:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	// lwz r10,400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82135f0c
	if (ctx.cr6.lt) goto loc_82135F0C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82135F0C:
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r27,r5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82135f3c
	if (!ctx.cr6.gt) goto loc_82135F3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-872
	ctx.r4.s64 = ctx.r11.s64 + -872;
	// bl 0x82280900
	ctx.lr = 0x82135F28;
	sub_82280900(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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
loc_82135F3C:
	// bl 0x82390a98
	ctx.lr = 0x82135F40;
	sub_82390A98(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r29,2
	ctx.r29.s64 = 2;
	// lis r30,-31822
	ctx.r30.s64 = -2085486592;
loc_82135F4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a2730
	ctx.lr = 0x82135F58;
	sub_823A2730(ctx, base);
	// bl 0x823932c0
	ctx.lr = 0x82135F5C;
	sub_823932C0(ctx, base);
	// bl 0x82391320
	ctx.lr = 0x82135F60;
	sub_82391320(ctx, base);
	// bl 0x82391280
	ctx.lr = 0x82135F64;
	sub_82391280(ctx, base);
	// bl 0x821fc6c8
	ctx.lr = 0x82135F68;
	sub_821FC6C8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -356);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r9,r29
	ctx.r4.u64 = ctx.r9.u64 & ctx.r29.u64;
	// bl 0x82112738
	ctx.lr = 0x82135F80;
	sub_82112738(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821127a0
	ctx.lr = 0x82135F88;
	sub_821127A0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82113110
	ctx.lr = 0x82135F98;
	sub_82113110(ctx, base);
	// bl 0x82391258
	ctx.lr = 0x82135F9C;
	sub_82391258(ctx, base);
	// bl 0x82393360
	ctx.lr = 0x82135FA0;
	sub_82393360(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82390e20
	ctx.lr = 0x82135FA8;
	sub_82390E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a2758
	ctx.lr = 0x82135FB0;
	sub_823A2758(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// blt cr6,0x82135f4c
	if (ctx.cr6.lt) goto loc_82135F4C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82135fd0
	if (ctx.cr6.eq) goto loc_82135FD0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a2ed0
	ctx.lr = 0x82135FD0;
	sub_823A2ED0(ctx, base);
loc_82135FD0:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r11,4464
	ctx.r29.s64 = ctx.r11.s64 + 4464;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r29,-16
	ctx.r31.s64 = ctx.r29.s64 + -16;
	// addi r28,r11,-888
	ctx.r28.s64 = ctx.r11.s64 + -888;
loc_82135FE8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822e84f0
	ctx.lr = 0x82135FF8;
	sub_822E84F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x823a27e0
	ctx.lr = 0x82136008;
	sub_823A27E0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82135fe8
	if (ctx.cr6.lt) goto loc_82135FE8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

PPC_WEAK_FUNC(sub_82135BE0) {
	__imp__sub_82135BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136030) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8212ea80
	ctx.lr = 0x82136054;
	sub_8212EA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x82136064;
	sub_822E7E98(ctx, base);
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

PPC_WEAK_FUNC(sub_82136030) {
	__imp__sub_82136030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213607C) {
	__imp__sub_8213607C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136080) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821360c0
	if (ctx.cr6.eq) goto loc_821360C0;
	// li r4,-17
	ctx.r4.s64 = -17;
	// bl 0x8212fa50
	ctx.lr = 0x821360B0;
	sub_8212FA50(ctx, base);
	// bl 0x822c26f8
	ctx.lr = 0x821360B4;
	sub_822C26F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
loc_821360C0:
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

PPC_WEAK_FUNC(sub_82136080) {
	__imp__sub_82136080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821360D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821360D4) {
	__imp__sub_821360D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821360D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821360D8) {
	__imp__sub_821360D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821360EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821360EC) {
	__imp__sub_821360EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821360F0) {
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
	// bl 0x822c3aa8
	ctx.lr = 0x82136100;
	sub_822C3AA8(ctx, base);
	// bl 0x82393ee8
	ctx.lr = 0x82136104;
	sub_82393EE8(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,28832
	ctx.r9.s64 = ctx.r10.s64 + 28832;
	// stw r11,332(r9)
	PPC_STORE_U32(ctx.r9.u32 + 332, ctx.r11.u32);
	// bl 0x82393e28
	ctx.lr = 0x82136118;
	sub_82393E28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821360F0) {
	__imp__sub_821360F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r12,-3823
	ctx.r12.s64 = -250544128;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// ori r6,r10,4
	ctx.r6.u64 = ctx.r10.u64 | 4;
	// ori r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 4369;
	// ori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 | 1;
	// ori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 | 1;
	// ori r4,r8,4
	ctx.r4.u64 = ctx.r8.u64 | 4;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// rldicl r11,r3,48,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 48) & 0xFFFF;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// clrldi r10,r3,48
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFF;
	// mulld r7,r11,r7
	ctx.r7.s64 = ctx.r11.s64 * ctx.r7.s64;
	// oris r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 286326784;
	// mulld r6,r10,r5
	ctx.r6.s64 = ctx.r10.s64 * ctx.r5.s64;
	// ori r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 4369;
	// rldicl r10,r7,61,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// lis r9,4097
	ctx.r9.s64 = 268500992;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,-3823
	ctx.r12.s64 = -250544128;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// ori r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 4369;
	// rldicl r11,r6,61,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r5,r9,17
	ctx.r5.u64 = ctx.r9.u64 | 17;
	// oris r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 286326784;
	// ori r4,r8,256
	ctx.r4.u64 = ctx.r8.u64 | 256;
	// ori r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 4369;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulhdu r10,r11,r5
	ctx.r10.u64 = ((unsigned __int128)ctx.r11.u64 * (unsigned __int128)ctx.r5.u64) >> 64;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rldicl r9,r3,63,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rldicl r9,r10,53,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 53) & 0x1FFFFFFFFFFFFF;
	// rldicr r8,r9,12,51
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 12) & 0xFFFFFFFFFFFFF000;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// sradi r5,r6,4
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s64 >> 4;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// clrlwi r11,r5,28
	ctx.r11.u64 = ctx.r5.u32 & 0xF;
	// sradi r4,r6,8
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s64 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82136128) {
	__imp__sub_82136128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821361F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821361F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8235c238
	ctx.lr = 0x8213620C;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136258
	if (!ctx.cr6.eq) goto loc_82136258;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c238
	ctx.lr = 0x82136224;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136258
	if (!ctx.cr6.eq) goto loc_82136258;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r9,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82136258:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821361F0) {
	__imp__sub_821361F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82136264) {
	__imp__sub_82136264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82136270;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8235c238
	ctx.lr = 0x82136284;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821362d0
	if (!ctx.cr6.eq) goto loc_821362D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c238
	ctx.lr = 0x8213629C;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821362d0
	if (!ctx.cr6.eq) goto loc_821362D0;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r9,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821362D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82136268) {
	__imp__sub_82136268(ctx, base);
}

