#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8216E618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216E620;
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
	// lwz r4,27696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// bl 0x821778d8
	ctx.lr = 0x8216E638;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,27696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// ble cr6,0x8216e6a4
	if (!ctx.cr6.gt) goto loc_8216E6A4;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8216E648:
	// stw r29,27696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27696, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216E65C;
	sub_821778D8(ctx, base);
	// lwz r11,27696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e698
	if (ctx.cr6.eq) goto loc_8216E698;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E674;
	sub_82177868(ctx, base);
	// lwz r11,27696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26752(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26752, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216e470
	ctx.lr = 0x8216E698;
	sub_8216E470(ctx, base);
loc_8216E698:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8216e648
	if (!ctx.cr0.eq) goto loc_8216E648;
loc_8216E6A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216E618) {
	__imp__sub_8216E618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216E6AC) {
	__imp__sub_8216E6AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216E6B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216e730
	if (!ctx.cr6.gt) goto loc_8216E730;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
loc_8216E6D4:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216E6E0;
	sub_821778D8(ctx, base);
	// lwz r11,27696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e71c
	if (ctx.cr6.eq) goto loc_8216E71C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E6F8;
	sub_82177868(ctx, base);
	// lwz r11,27696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26752, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216e470
	ctx.lr = 0x8216E71C;
	sub_8216E470(ctx, base);
loc_8216E71C:
	// bl 0x82177858
	ctx.lr = 0x8216E720;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27696, ctx.r3.u32);
	// bne 0x8216e6d4
	if (!ctx.cr0.eq) goto loc_8216E6D4;
loc_8216E730:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216E6B0) {
	__imp__sub_8216E6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E738) {
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
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,26900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26900);
	// bl 0x821778d8
	ctx.lr = 0x8216E758;
	sub_821778D8(ctx, base);
	// lwz r11,26900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26900);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27696, ctx.r11.u32);
	// bl 0x8216e5a0
	ctx.lr = 0x8216E76C;
	sub_8216E5A0(ctx, base);
	// lwz r11,26900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26900);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24964, ctx.r11.u32);
	// bl 0x8215d660
	ctx.lr = 0x8216E784;
	sub_8215D660(ctx, base);
	// lwz r11,26900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26900);
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25980, ctx.r11.u32);
	// bl 0x8215d810
	ctx.lr = 0x8216E79C;
	sub_8215D810(ctx, base);
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216E738) {
	__imp__sub_8216E738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8216E7B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26900(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26900);
	// bl 0x821778d8
	ctx.lr = 0x8216E7D8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r26,26900(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26900);
	// ble cr6,0x8216e914
	if (!ctx.cr6.gt) goto loc_8216E914;
	// lis r24,-32142
	ctx.r24.s64 = -2106458112;
	// lis r23,-32142
	ctx.r23.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8216E7FC:
	// stw r26,26900(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26900, ctx.r26.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216E810;
	sub_821778D8(ctx, base);
	// lwz r4,26900(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26900);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27696(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27696, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216E824;
	sub_821778D8(ctx, base);
	// lwz r11,27696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27696);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e860
	if (ctx.cr6.eq) goto loc_8216E860;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E83C;
	sub_82177868(ctx, base);
	// lwz r11,27696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27696);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27696);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26752(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26752, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216e470
	ctx.lr = 0x8216E860;
	sub_8216E470(ctx, base);
loc_8216E860:
	// lwz r11,26900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26900);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,24964(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24964, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216E878;
	sub_821778D8(ctx, base);
	// lwz r11,24964(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24964);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e8b4
	if (ctx.cr6.eq) goto loc_8216E8B4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E890;
	sub_82177868(ctx, base);
	// lwz r11,24964(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24964);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24964(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24964);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25748(r23)
	PPC_STORE_U32(ctx.r23.u32 + 25748, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215d508
	ctx.lr = 0x8216E8B4;
	sub_8215D508(ctx, base);
loc_8216E8B4:
	// lwz r11,26900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26900);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r4,25980(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25980, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216E8CC;
	sub_821778D8(ctx, base);
	// lwz r11,25980(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25980);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e908
	if (ctx.cr6.eq) goto loc_8216E908;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E8E4;
	sub_82177868(ctx, base);
	// lwz r11,25980(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25980);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,25980(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25980);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82147218
	ctx.lr = 0x8216E908;
	sub_82147218(ctx, base);
loc_8216E908:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// bne 0x8216e7fc
	if (!ctx.cr0.eq) goto loc_8216E7FC;
loc_8216E914:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216E7B0) {
	__imp__sub_8216E7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216E91C) {
	__imp__sub_8216E91C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8216E928;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216ea70
	if (!ctx.cr6.gt) goto loc_8216EA70;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lwz r4,26900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26900);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216E958:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216E964;
	sub_821778D8(ctx, base);
	// lwz r4,26900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26900);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27696, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216E978;
	sub_821778D8(ctx, base);
	// lwz r11,27696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27696);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e9b4
	if (ctx.cr6.eq) goto loc_8216E9B4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E990;
	sub_82177868(ctx, base);
	// lwz r11,27696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27696);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27696);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26752(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26752, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216e470
	ctx.lr = 0x8216E9B4;
	sub_8216E470(ctx, base);
loc_8216E9B4:
	// lwz r11,26900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26900);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,24964(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24964, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216E9CC;
	sub_821778D8(ctx, base);
	// lwz r11,24964(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24964);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ea08
	if (ctx.cr6.eq) goto loc_8216EA08;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E9E4;
	sub_82177868(ctx, base);
	// lwz r11,24964(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24964);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24964(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24964);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25748(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25748, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215d508
	ctx.lr = 0x8216EA08;
	sub_8215D508(ctx, base);
loc_8216EA08:
	// lwz r11,26900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26900);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r4,25980(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25980, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216EA20;
	sub_821778D8(ctx, base);
	// lwz r11,25980(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25980);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ea5c
	if (ctx.cr6.eq) goto loc_8216EA5C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216EA38;
	sub_82177868(ctx, base);
	// lwz r11,25980(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25980);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,25980(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25980);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82147218
	ctx.lr = 0x8216EA5C;
	sub_82147218(ctx, base);
loc_8216EA5C:
	// bl 0x82177858
	ctx.lr = 0x8216EA60;
	sub_82177858(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26900, ctx.r3.u32);
	// bne 0x8216e958
	if (!ctx.cr0.eq) goto loc_8216E958;
loc_8216EA70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216E920) {
	__imp__sub_8216E920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EA78) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25872(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// bl 0x821778d8
	ctx.lr = 0x8216EA98;
	sub_821778D8(ctx, base);
	// lwz r3,25872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216eaf0
	if (ctx.cr6.eq) goto loc_8216EAF0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216eaec
	if (!ctx.cr6.eq) goto loc_8216EAEC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216EAB8;
	sub_82177868(ctx, base);
	// lwz r11,25872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26900, ctx.r11.u32);
	// bl 0x8216e738
	ctx.lr = 0x8216EAD8;
	sub_8216E738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8216EAEC:
	// bl 0x82177978
	ctx.lr = 0x8216EAF0;
	sub_82177978(ctx, base);
loc_8216EAF0:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216EA78) {
	__imp__sub_8216EA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216EB04) {
	__imp__sub_8216EB04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216EB10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,25872(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// bl 0x821778d8
	ctx.lr = 0x8216EB28;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,25872(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// ble cr6,0x8216eb9c
	if (!ctx.cr6.gt) goto loc_8216EB9C;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8216EB38:
	// stw r29,25872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25872, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216EB4C;
	sub_821778D8(ctx, base);
	// lwz r3,25872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216eb90
	if (ctx.cr6.eq) goto loc_8216EB90;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216eb8c
	if (!ctx.cr6.eq) goto loc_8216EB8C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216EB6C;
	sub_82177868(ctx, base);
	// lwz r11,25872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26900(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26900, ctx.r11.u32);
	// bl 0x8216e738
	ctx.lr = 0x8216EB88;
	sub_8216E738(ctx, base);
	// b 0x8216eb90
	goto loc_8216EB90;
loc_8216EB8C:
	// bl 0x82177978
	ctx.lr = 0x8216EB90;
	sub_82177978(ctx, base);
loc_8216EB90:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8216eb38
	if (!ctx.cr0.eq) goto loc_8216EB38;
loc_8216EB9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216EB08) {
	__imp__sub_8216EB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216EBA4) {
	__imp__sub_8216EBA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216EBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216ec30
	if (!ctx.cr6.gt) goto loc_8216EC30;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25872(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
loc_8216EBCC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216EBD8;
	sub_821778D8(ctx, base);
	// lwz r3,25872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ec1c
	if (ctx.cr6.eq) goto loc_8216EC1C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216ec18
	if (!ctx.cr6.eq) goto loc_8216EC18;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216EBF8;
	sub_82177868(ctx, base);
	// lwz r11,25872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25872);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26900(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26900, ctx.r11.u32);
	// bl 0x8216e738
	ctx.lr = 0x8216EC14;
	sub_8216E738(ctx, base);
	// b 0x8216ec1c
	goto loc_8216EC1C;
loc_8216EC18:
	// bl 0x82177978
	ctx.lr = 0x8216EC1C;
	sub_82177978(ctx, base);
loc_8216EC1C:
	// bl 0x82177858
	ctx.lr = 0x8216EC20;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25872, ctx.r3.u32);
	// bne 0x8216ebcc
	if (!ctx.cr0.eq) goto loc_8216EBCC;
loc_8216EC30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216EBA8) {
	__imp__sub_8216EBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EC38) {
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
	// lwz r4,27140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27140);
	// bl 0x821778d8
	ctx.lr = 0x8216EC58;
	sub_821778D8(ctx, base);
	// lwz r11,27140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27140);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x8216EC70;
	sub_8216E3E0(ctx, base);
	// lwz r11,27140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27140);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28128, ctx.r11.u32);
	// bl 0x8216fbe0
	ctx.lr = 0x8216EC84;
	sub_8216FBE0(ctx, base);
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216EC38) {
	__imp__sub_8216EC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8216ECA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27140(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27140);
	// bl 0x821778d8
	ctx.lr = 0x8216ECB8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27140(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27140);
	// ble cr6,0x8216ed60
	if (!ctx.cr6.gt) goto loc_8216ED60;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8216ECD4:
	// stw r30,27140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27140, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216ECE8;
	sub_821778D8(ctx, base);
	// lwz r11,27140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27140);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26752, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216ED00;
	sub_821778D8(ctx, base);
	// lwz r3,26752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ed44
	if (ctx.cr6.eq) goto loc_8216ED44;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216ed40
	if (!ctx.cr6.eq) goto loc_8216ED40;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216ED20;
	sub_82177868(ctx, base);
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26116(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26116, ctx.r11.u32);
	// bl 0x8216a130
	ctx.lr = 0x8216ED3C;
	sub_8216A130(ctx, base);
	// b 0x8216ed44
	goto loc_8216ED44;
loc_8216ED40:
	// bl 0x82177978
	ctx.lr = 0x8216ED44;
	sub_82177978(ctx, base);
loc_8216ED44:
	// lwz r11,27140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27140);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28128(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28128, ctx.r11.u32);
	// bl 0x8216fbe0
	ctx.lr = 0x8216ED54;
	sub_8216FBE0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8216ecd4
	if (!ctx.cr0.eq) goto loc_8216ECD4;
loc_8216ED60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216EC98) {
	__imp__sub_8216EC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216ED68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8216ED70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216ee20
	if (!ctx.cr6.gt) goto loc_8216EE20;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,27140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27140);
loc_8216ED94:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216EDA0;
	sub_821778D8(ctx, base);
	// lwz r11,27140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27140);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26752, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216EDB8;
	sub_821778D8(ctx, base);
	// lwz r3,26752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216edfc
	if (ctx.cr6.eq) goto loc_8216EDFC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216edf8
	if (!ctx.cr6.eq) goto loc_8216EDF8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216EDD8;
	sub_82177868(ctx, base);
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26116(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26116, ctx.r11.u32);
	// bl 0x8216a130
	ctx.lr = 0x8216EDF4;
	sub_8216A130(ctx, base);
	// b 0x8216edfc
	goto loc_8216EDFC;
loc_8216EDF8:
	// bl 0x82177978
	ctx.lr = 0x8216EDFC;
	sub_82177978(ctx, base);
loc_8216EDFC:
	// lwz r11,27140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27140);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28128, ctx.r11.u32);
	// bl 0x8216fbe0
	ctx.lr = 0x8216EE0C;
	sub_8216FBE0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216EE10;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27140, ctx.r3.u32);
	// bne 0x8216ed94
	if (!ctx.cr0.eq) goto loc_8216ED94;
loc_8216EE20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216ED68) {
	__imp__sub_8216ED68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EE28) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26760(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// bl 0x821778d8
	ctx.lr = 0x8216EE48;
	sub_821778D8(ctx, base);
	// lwz r11,26760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ee80
	if (ctx.cr6.eq) goto loc_8216EE80;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216EE60;
	sub_82177868(ctx, base);
	// lwz r11,26760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27140, ctx.r11.u32);
	// bl 0x8216ec38
	ctx.lr = 0x8216EE80;
	sub_8216EC38(ctx, base);
loc_8216EE80:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216EE28) {
	__imp__sub_8216EE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216EE94) {
	__imp__sub_8216EE94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8216EEA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,26760(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// bl 0x821778d8
	ctx.lr = 0x8216EEB8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r27,26760(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// ble cr6,0x8216ef50
	if (!ctx.cr6.gt) goto loc_8216EF50;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216EED4:
	// stw r27,26760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26760, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216EEE8;
	sub_821778D8(ctx, base);
	// lwz r11,26760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ef44
	if (ctx.cr6.eq) goto loc_8216EF44;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216EF00;
	sub_82177868(ctx, base);
	// lwz r11,26760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27140, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216EF20;
	sub_821778D8(ctx, base);
	// lwz r11,27140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27140);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x8216EF34;
	sub_8216E3E0(ctx, base);
	// lwz r11,27140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27140);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28128, ctx.r11.u32);
	// bl 0x8216fbe0
	ctx.lr = 0x8216EF44;
	sub_8216FBE0(ctx, base);
loc_8216EF44:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8216eed4
	if (!ctx.cr0.eq) goto loc_8216EED4;
loc_8216EF50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216EE98) {
	__imp__sub_8216EE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216EF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8216EF60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216f000
	if (!ctx.cr6.gt) goto loc_8216F000;
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
	// lwz r4,26760(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
loc_8216EF84:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216EF90;
	sub_821778D8(ctx, base);
	// lwz r11,26760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216efec
	if (ctx.cr6.eq) goto loc_8216EFEC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216EFA8;
	sub_82177868(ctx, base);
	// lwz r11,26760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26760);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27140, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216EFC8;
	sub_821778D8(ctx, base);
	// lwz r11,27140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27140);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x8216EFDC;
	sub_8216E3E0(ctx, base);
	// lwz r11,27140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27140);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28128, ctx.r11.u32);
	// bl 0x8216fbe0
	ctx.lr = 0x8216EFEC;
	sub_8216FBE0(ctx, base);
loc_8216EFEC:
	// bl 0x82177858
	ctx.lr = 0x8216EFF0;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26760, ctx.r3.u32);
	// bne 0x8216ef84
	if (!ctx.cr0.eq) goto loc_8216EF84;
loc_8216F000:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216EF58) {
	__imp__sub_8216EF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F008) {
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
	// lwz r4,27748(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27748);
	// bl 0x821778d8
	ctx.lr = 0x8216F028;
	sub_821778D8(ctx, base);
	// lwz r11,27748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27748);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216F03C;
	sub_82147188(ctx, base);
	// lwz r11,27748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27748);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x8216F054;
	sub_8216E3E0(ctx, base);
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216F008) {
	__imp__sub_8216F008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8216F070;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27748(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27748);
	// bl 0x821778d8
	ctx.lr = 0x8216F088;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r27,27748(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27748);
	// ble cr6,0x8216f174
	if (!ctx.cr6.gt) goto loc_8216F174;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216F0A4:
	// stw r27,27748(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27748, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216F0B8;
	sub_821778D8(ctx, base);
	// lwz r4,27748(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27748);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216F0CC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f10c
	if (ctx.cr6.eq) goto loc_8216F10C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216f108
	if (!ctx.cr6.eq) goto loc_8216F108;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8216F0EC;
	sub_82177868(ctx, base);
	// lwz r11,28244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8216F104;
	sub_821779A0(ctx, base);
	// b 0x8216f10c
	goto loc_8216F10C;
loc_8216F108:
	// bl 0x82177978
	ctx.lr = 0x8216F10C;
	sub_82177978(ctx, base);
loc_8216F10C:
	// lwz r11,27748(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27748);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26752, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216F124;
	sub_821778D8(ctx, base);
	// lwz r3,26752(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26752);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f168
	if (ctx.cr6.eq) goto loc_8216F168;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216f164
	if (!ctx.cr6.eq) goto loc_8216F164;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F144;
	sub_82177868(ctx, base);
	// lwz r11,26752(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26752);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26752(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26752);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26116(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26116, ctx.r11.u32);
	// bl 0x8216a130
	ctx.lr = 0x8216F160;
	sub_8216A130(ctx, base);
	// b 0x8216f168
	goto loc_8216F168;
loc_8216F164:
	// bl 0x82177978
	ctx.lr = 0x8216F168;
	sub_82177978(ctx, base);
loc_8216F168:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x8216f0a4
	if (!ctx.cr0.eq) goto loc_8216F0A4;
loc_8216F174:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F068) {
	__imp__sub_8216F068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216F17C) {
	__imp__sub_8216F17C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8216F188;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216f280
	if (!ctx.cr6.gt) goto loc_8216F280;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27748(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27748);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216F1B0:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216F1BC;
	sub_821778D8(ctx, base);
	// lwz r4,27748(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27748);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216F1D0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f210
	if (ctx.cr6.eq) goto loc_8216F210;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216f20c
	if (!ctx.cr6.eq) goto loc_8216F20C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8216F1F0;
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
	ctx.lr = 0x8216F208;
	sub_821779A0(ctx, base);
	// b 0x8216f210
	goto loc_8216F210;
loc_8216F20C:
	// bl 0x82177978
	ctx.lr = 0x8216F210;
	sub_82177978(ctx, base);
loc_8216F210:
	// lwz r11,27748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27748);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26752, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216F228;
	sub_821778D8(ctx, base);
	// lwz r3,26752(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26752);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f26c
	if (ctx.cr6.eq) goto loc_8216F26C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216f268
	if (!ctx.cr6.eq) goto loc_8216F268;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F248;
	sub_82177868(ctx, base);
	// lwz r11,26752(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26752);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26752(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26752);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26116(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26116, ctx.r11.u32);
	// bl 0x8216a130
	ctx.lr = 0x8216F264;
	sub_8216A130(ctx, base);
	// b 0x8216f26c
	goto loc_8216F26C;
loc_8216F268:
	// bl 0x82177978
	ctx.lr = 0x8216F26C;
	sub_82177978(ctx, base);
loc_8216F26C:
	// bl 0x82177858
	ctx.lr = 0x8216F270;
	sub_82177858(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27748, ctx.r3.u32);
	// bne 0x8216f1b0
	if (!ctx.cr0.eq) goto loc_8216F1B0;
loc_8216F280:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F180) {
	__imp__sub_8216F180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F288) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// bl 0x821778d8
	ctx.lr = 0x8216F2A8;
	sub_821778D8(ctx, base);
	// lwz r11,25356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f2e0
	if (ctx.cr6.eq) goto loc_8216F2E0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F2C0;
	sub_82177868(ctx, base);
	// lwz r11,25356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27748, ctx.r11.u32);
	// bl 0x8216f008
	ctx.lr = 0x8216F2E0;
	sub_8216F008(ctx, base);
loc_8216F2E0:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216F288) {
	__imp__sub_8216F288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216F2F4) {
	__imp__sub_8216F2F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8216F300;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,25356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// bl 0x821778d8
	ctx.lr = 0x8216F318;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r27,25356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// ble cr6,0x8216f3b0
	if (!ctx.cr6.gt) goto loc_8216F3B0;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216F334:
	// stw r27,25356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25356, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216F348;
	sub_821778D8(ctx, base);
	// lwz r11,25356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f3a4
	if (ctx.cr6.eq) goto loc_8216F3A4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F360;
	sub_82177868(ctx, base);
	// lwz r11,25356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27748, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216F380;
	sub_821778D8(ctx, base);
	// lwz r11,27748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27748);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216F390;
	sub_82147188(ctx, base);
	// lwz r11,27748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27748);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26752(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x8216F3A4;
	sub_8216E3E0(ctx, base);
loc_8216F3A4:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8216f334
	if (!ctx.cr0.eq) goto loc_8216F334;
loc_8216F3B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F2F8) {
	__imp__sub_8216F2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8216F3C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216f460
	if (!ctx.cr6.gt) goto loc_8216F460;
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
	// lwz r4,25356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
loc_8216F3E4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216F3F0;
	sub_821778D8(ctx, base);
	// lwz r11,25356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f44c
	if (ctx.cr6.eq) goto loc_8216F44C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F408;
	sub_82177868(ctx, base);
	// lwz r11,25356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25356);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27748, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216F428;
	sub_821778D8(ctx, base);
	// lwz r11,27748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27748);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216F438;
	sub_82147188(ctx, base);
	// lwz r11,27748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27748);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26752(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x8216F44C;
	sub_8216E3E0(ctx, base);
loc_8216F44C:
	// bl 0x82177858
	ctx.lr = 0x8216F450;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25356, ctx.r3.u32);
	// bne 0x8216f3e4
	if (!ctx.cr0.eq) goto loc_8216F3E4;
loc_8216F460:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F3B8) {
	__imp__sub_8216F3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,26416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26416);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216f490
	if (!ctx.cr6.eq) goto loc_8216F490;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28184);
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// b 0x82147188
	sub_82147188(ctx, base);
	return;
loc_8216F490:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8216f4ac
	if (!ctx.cr6.eq) goto loc_8216F4AC;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28184);
	// stw r11,26760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26760, ctx.r11.u32);
	// b 0x8216ee28
	sub_8216EE28(ctx, base);
	return;
loc_8216F4AC:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8216f4c8
	if (!ctx.cr6.eq) goto loc_8216F4C8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28184);
	// stw r11,28128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28128, ctx.r11.u32);
	// b 0x8216fbe0
	sub_8216FBE0(ctx, base);
	return;
loc_8216F4C8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8216f4e8
	if (ctx.cr6.eq) goto loc_8216F4E8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8216f4e8
	if (ctx.cr6.eq) goto loc_8216F4E8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8216f4e8
	if (ctx.cr6.eq) goto loc_8216F4E8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8216F4E8:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28184);
	// stw r11,25356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25356, ctx.r11.u32);
	// b 0x8216f288
	sub_8216F288(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F468) {
	__imp__sub_8216F468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F4FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8216F4FC) {
	__imp__sub_8216F4FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216F508;
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
	// lwz r4,28184(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28184);
	// bl 0x821778d8
	ctx.lr = 0x8216F520;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28184(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28184);
	// ble cr6,0x8216f544
	if (!ctx.cr6.gt) goto loc_8216F544;
loc_8216F52C:
	// stw r30,28184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28184, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216f468
	ctx.lr = 0x8216F538;
	sub_8216F468(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8216f52c
	if (!ctx.cr0.eq) goto loc_8216F52C;
loc_8216F544:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F500) {
	__imp__sub_8216F500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216F54C) {
	__imp__sub_8216F54C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F550) {
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
	// ble cr6,0x8216f58c
	if (!ctx.cr6.gt) goto loc_8216F58C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216F574:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216f468
	ctx.lr = 0x8216F57C;
	sub_8216F468(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216F580;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28184, ctx.r3.u32);
	// bne 0x8216f574
	if (!ctx.cr0.eq) goto loc_8216F574;
loc_8216F58C:
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

PPC_WEAK_FUNC(sub_8216F550) {
	__imp__sub_8216F550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216F5A4) {
	__imp__sub_8216F5A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F5A8) {
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
	// lwz r4,26416(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26416);
	// bl 0x821778d8
	ctx.lr = 0x8216F5C8;
	sub_821778D8(ctx, base);
	// lwz r11,26416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26416);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28184, ctx.r11.u32);
	// bl 0x8216f468
	ctx.lr = 0x8216F5DC;
	sub_8216F468(ctx, base);
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216F5A8) {
	__imp__sub_8216F5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216F5F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,26416(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26416);
	// bl 0x821778d8
	ctx.lr = 0x8216F610;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,26416(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26416);
	// ble cr6,0x8216f650
	if (!ctx.cr6.gt) goto loc_8216F650;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8216F620:
	// stw r31,26416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26416, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216F634;
	sub_821778D8(ctx, base);
	// lwz r11,26416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26416);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28184, ctx.r11.u32);
	// bl 0x8216f468
	ctx.lr = 0x8216F644;
	sub_8216F468(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x8216f620
	if (!ctx.cr0.eq) goto loc_8216F620;
loc_8216F650:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F5F0) {
	__imp__sub_8216F5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216F660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216f6ac
	if (!ctx.cr6.gt) goto loc_8216F6AC;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26416(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26416);
loc_8216F67C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216F688;
	sub_821778D8(ctx, base);
	// lwz r11,26416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26416);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28184, ctx.r11.u32);
	// bl 0x8216f468
	ctx.lr = 0x8216F698;
	sub_8216F468(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216F69C;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26416, ctx.r3.u32);
	// bne 0x8216f67c
	if (!ctx.cr0.eq) goto loc_8216F67C;
loc_8216F6AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F658) {
	__imp__sub_8216F658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216F6B4) {
	__imp__sub_8216F6B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F6B8) {
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
	// lwz r4,27252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// bl 0x821778d8
	ctx.lr = 0x8216F6DC;
	sub_821778D8(ctx, base);
	// lwz r11,27252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f72c
	if (ctx.cr6.eq) goto loc_8216F72C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F6F4;
	sub_82177868(ctx, base);
	// lwz r11,27252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26416, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216F718;
	sub_821778D8(ctx, base);
	// lwz r11,26416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26416);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28184, ctx.r11.u32);
	// bl 0x8216f468
	ctx.lr = 0x8216F72C;
	sub_8216F468(ctx, base);
loc_8216F72C:
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

PPC_WEAK_FUNC(sub_8216F6B8) {
	__imp__sub_8216F6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216F744) {
	__imp__sub_8216F744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8216F750;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,27252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// bl 0x821778d8
	ctx.lr = 0x8216F768;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,27252(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// ble cr6,0x8216f7e8
	if (!ctx.cr6.gt) goto loc_8216F7E8;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216F780:
	// stw r29,27252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27252, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216F794;
	sub_821778D8(ctx, base);
	// lwz r11,27252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f7dc
	if (ctx.cr6.eq) goto loc_8216F7DC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F7AC;
	sub_82177868(ctx, base);
	// lwz r11,27252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26416, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216F7CC;
	sub_821778D8(ctx, base);
	// lwz r11,26416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26416);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28184, ctx.r11.u32);
	// bl 0x8216f468
	ctx.lr = 0x8216F7DC;
	sub_8216F468(ctx, base);
loc_8216F7DC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8216f780
	if (!ctx.cr0.eq) goto loc_8216F780;
loc_8216F7E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F748) {
	__imp__sub_8216F748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216F7F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216f880
	if (!ctx.cr6.gt) goto loc_8216F880;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,27252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
loc_8216F818:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216F824;
	sub_821778D8(ctx, base);
	// lwz r11,27252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f86c
	if (ctx.cr6.eq) goto loc_8216F86C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F83C;
	sub_82177868(ctx, base);
	// lwz r11,27252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27252);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26416, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216F85C;
	sub_821778D8(ctx, base);
	// lwz r11,26416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26416);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28184, ctx.r11.u32);
	// bl 0x8216f468
	ctx.lr = 0x8216F86C;
	sub_8216F468(ctx, base);
loc_8216F86C:
	// bl 0x82177858
	ctx.lr = 0x8216F870;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27252, ctx.r3.u32);
	// bne 0x8216f818
	if (!ctx.cr0.eq) goto loc_8216F818;
loc_8216F880:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F7F0) {
	__imp__sub_8216F7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F888) {
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
	// lwz r4,28084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// bl 0x821778d8
	ctx.lr = 0x8216F8A8;
	sub_821778D8(ctx, base);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f8e8
	if (ctx.cr6.eq) goto loc_8216F8E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F8C0;
	sub_82177868(ctx, base);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,27252(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27252, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216f748
	ctx.lr = 0x8216F8E8;
	sub_8216F748(ctx, base);
loc_8216F8E8:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216F888) {
	__imp__sub_8216F888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216F8FC) {
	__imp__sub_8216F8FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216F908;
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
	// lwz r4,28084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// bl 0x821778d8
	ctx.lr = 0x8216F920;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,28084(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// ble cr6,0x8216f98c
	if (!ctx.cr6.gt) goto loc_8216F98C;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8216F930:
	// stw r29,28084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28084, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216F944;
	sub_821778D8(ctx, base);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216f980
	if (ctx.cr6.eq) goto loc_8216F980;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F95C;
	sub_82177868(ctx, base);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,27252(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27252, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216f748
	ctx.lr = 0x8216F980;
	sub_8216F748(ctx, base);
loc_8216F980:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8216f930
	if (!ctx.cr0.eq) goto loc_8216F930;
loc_8216F98C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F900) {
	__imp__sub_8216F900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216F994) {
	__imp__sub_8216F994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216F998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216F9A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216fa18
	if (!ctx.cr6.gt) goto loc_8216FA18;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,28084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
loc_8216F9BC:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216F9C8;
	sub_821778D8(ctx, base);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fa04
	if (ctx.cr6.eq) goto loc_8216FA04;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216F9E0;
	sub_82177868(ctx, base);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,27252(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27252, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216f748
	ctx.lr = 0x8216FA04;
	sub_8216F748(ctx, base);
loc_8216FA04:
	// bl 0x82177858
	ctx.lr = 0x8216FA08;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28084, ctx.r3.u32);
	// bne 0x8216f9bc
	if (!ctx.cr0.eq) goto loc_8216F9BC;
loc_8216FA18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216F998) {
	__imp__sub_8216F998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FA20) {
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
	// lwz r4,26040(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26040);
	// bl 0x821778d8
	ctx.lr = 0x8216FA40;
	sub_821778D8(ctx, base);
	// lwz r11,26040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26040);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x8216FA58;
	sub_8216E3E0(ctx, base);
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216FA20) {
	__imp__sub_8216FA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216FA6C) {
	__imp__sub_8216FA6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8216FA78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26040(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26040);
	// bl 0x821778d8
	ctx.lr = 0x8216FA90;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26040(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26040);
	// ble cr6,0x8216fb24
	if (!ctx.cr6.gt) goto loc_8216FB24;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8216FAA8:
	// stw r30,26040(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26040, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216FABC;
	sub_821778D8(ctx, base);
	// lwz r11,26040(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26040);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26752, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216FAD4;
	sub_821778D8(ctx, base);
	// lwz r3,26752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fb18
	if (ctx.cr6.eq) goto loc_8216FB18;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216fb14
	if (!ctx.cr6.eq) goto loc_8216FB14;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216FAF4;
	sub_82177868(ctx, base);
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26116, ctx.r11.u32);
	// bl 0x8216a130
	ctx.lr = 0x8216FB10;
	sub_8216A130(ctx, base);
	// b 0x8216fb18
	goto loc_8216FB18;
loc_8216FB14:
	// bl 0x82177978
	ctx.lr = 0x8216FB18;
	sub_82177978(ctx, base);
loc_8216FB18:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8216faa8
	if (!ctx.cr0.eq) goto loc_8216FAA8;
loc_8216FB24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216FA70) {
	__imp__sub_8216FA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216FB2C) {
	__imp__sub_8216FB2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216FB38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216fbd4
	if (!ctx.cr6.gt) goto loc_8216FBD4;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,26040(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26040);
loc_8216FB58:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216FB64;
	sub_821778D8(ctx, base);
	// lwz r11,26040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26040);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26752, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216FB7C;
	sub_821778D8(ctx, base);
	// lwz r3,26752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fbc0
	if (ctx.cr6.eq) goto loc_8216FBC0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216fbbc
	if (!ctx.cr6.eq) goto loc_8216FBBC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216FB9C;
	sub_82177868(ctx, base);
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26116, ctx.r11.u32);
	// bl 0x8216a130
	ctx.lr = 0x8216FBB8;
	sub_8216A130(ctx, base);
	// b 0x8216fbc0
	goto loc_8216FBC0;
loc_8216FBBC:
	// bl 0x82177978
	ctx.lr = 0x8216FBC0;
	sub_82177978(ctx, base);
loc_8216FBC0:
	// bl 0x82177858
	ctx.lr = 0x8216FBC4;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26040, ctx.r3.u32);
	// bne 0x8216fb58
	if (!ctx.cr0.eq) goto loc_8216FB58;
loc_8216FBD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216FB30) {
	__imp__sub_8216FB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216FBDC) {
	__imp__sub_8216FBDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FBE0) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// bl 0x821778d8
	ctx.lr = 0x8216FC00;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fc38
	if (ctx.cr6.eq) goto loc_8216FC38;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216FC18;
	sub_82177868(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x8216FC38;
	sub_8216F888(ctx, base);
loc_8216FC38:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216FBE0) {
	__imp__sub_8216FBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216FC4C) {
	__imp__sub_8216FC4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8216FC58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// bl 0x821778d8
	ctx.lr = 0x8216FC70;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r29,28128(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// ble cr6,0x8216fd1c
	if (!ctx.cr6.gt) goto loc_8216FD1C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8216FC88:
	// stw r29,28128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28128, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216FC9C;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fd10
	if (ctx.cr6.eq) goto loc_8216FD10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216FCB4;
	sub_82177868(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,28084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28084, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216FCD4;
	sub_821778D8(ctx, base);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fd10
	if (ctx.cr6.eq) goto loc_8216FD10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216FCEC;
	sub_82177868(ctx, base);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,27252(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27252, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216f748
	ctx.lr = 0x8216FD10;
	sub_8216F748(ctx, base);
loc_8216FD10:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8216fc88
	if (!ctx.cr0.eq) goto loc_8216FC88;
loc_8216FD1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216FC50) {
	__imp__sub_8216FC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216FD24) {
	__imp__sub_8216FD24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216FD30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216fde4
	if (!ctx.cr6.gt) goto loc_8216FDE4;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,28128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
loc_8216FD50:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216FD5C;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fdd0
	if (ctx.cr6.eq) goto loc_8216FDD0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216FD74;
	sub_82177868(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,28084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28084, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216FD94;
	sub_821778D8(ctx, base);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fdd0
	if (ctx.cr6.eq) goto loc_8216FDD0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216FDAC;
	sub_82177868(ctx, base);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28084);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,27252(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27252, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216f748
	ctx.lr = 0x8216FDD0;
	sub_8216F748(ctx, base);
loc_8216FDD0:
	// bl 0x82177858
	ctx.lr = 0x8216FDD4;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28128, ctx.r3.u32);
	// bne 0x8216fd50
	if (!ctx.cr0.eq) goto loc_8216FD50;
loc_8216FDE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216FD28) {
	__imp__sub_8216FD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216FDEC) {
	__imp__sub_8216FDEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FDF0) {
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
	// li r5,344
	ctx.r5.s64 = 344;
	// lwz r4,25116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25116);
	// bl 0x821778d8
	ctx.lr = 0x8216FE14;
	sub_821778D8(ctx, base);
	// lwz r11,25116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25116);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,308
	ctx.r4.s64 = ctx.r11.s64 + 308;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216FE30;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fe68
	if (ctx.cr6.eq) goto loc_8216FE68;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216FE48;
	sub_82177868(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x8216FE68;
	sub_8216F888(ctx, base);
loc_8216FE68:
	// lwz r11,25116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25116);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 + 340;
	// stw r11,25372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216FE80;
	sub_82152400(ctx, base);
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

PPC_WEAK_FUNC(sub_8216FDF0) {
	__imp__sub_8216FDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216FEA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,344
	ctx.r5.s64 = ctx.r4.s64 * 344;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25116(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25116);
	// bl 0x821778d8
	ctx.lr = 0x8216FEB8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25116(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25116);
	// ble cr6,0x8216fedc
	if (!ctx.cr6.gt) goto loc_8216FEDC;
loc_8216FEC4:
	// stw r30,25116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25116, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216fdf0
	ctx.lr = 0x8216FED0;
	sub_8216FDF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,344
	ctx.r30.s64 = ctx.r30.s64 + 344;
	// bne 0x8216fec4
	if (!ctx.cr0.eq) goto loc_8216FEC4;
loc_8216FEDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216FE98) {
	__imp__sub_8216FE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216FEE4) {
	__imp__sub_8216FEE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FEE8) {
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
	// ble cr6,0x8216ff24
	if (!ctx.cr6.gt) goto loc_8216FF24;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216FF0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216fdf0
	ctx.lr = 0x8216FF14;
	sub_8216FDF0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216FF18;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25116, ctx.r3.u32);
	// bne 0x8216ff0c
	if (!ctx.cr0.eq) goto loc_8216FF0C;
loc_8216FF24:
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

PPC_WEAK_FUNC(sub_8216FEE8) {
	__imp__sub_8216FEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216FF3C) {
	__imp__sub_8216FF3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FF40) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// bl 0x821778d8
	ctx.lr = 0x8216FF60;
	sub_821778D8(ctx, base);
	// lwz r11,28492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ff98
	if (ctx.cr6.eq) goto loc_8216FF98;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216FF78;
	sub_82177868(ctx, base);
	// lwz r11,28492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25116, ctx.r11.u32);
	// bl 0x8216fdf0
	ctx.lr = 0x8216FF98;
	sub_8216FDF0(ctx, base);
loc_8216FF98:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_8216FF40) {
	__imp__sub_8216FF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216FFAC) {
	__imp__sub_8216FFAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216FFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216FFB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// bl 0x821778d8
	ctx.lr = 0x8216FFD0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,28492(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// ble cr6,0x82170034
	if (!ctx.cr6.gt) goto loc_82170034;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8216FFE0:
	// stw r29,28492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28492, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216FFF4;
	sub_821778D8(ctx, base);
	// lwz r11,28492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170028
	if (ctx.cr6.eq) goto loc_82170028;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8217000C;
	sub_82177868(ctx, base);
	// lwz r11,28492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25116, ctx.r11.u32);
	// bl 0x8216fdf0
	ctx.lr = 0x82170028;
	sub_8216FDF0(ctx, base);
loc_82170028:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8216ffe0
	if (!ctx.cr0.eq) goto loc_8216FFE0;
loc_82170034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216FFB0) {
	__imp__sub_8216FFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217003C) {
	__imp__sub_8217003C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82170048;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821700b8
	if (!ctx.cr6.gt) goto loc_821700B8;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,28492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
loc_82170064:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82170070;
	sub_821778D8(ctx, base);
	// lwz r11,28492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821700a4
	if (ctx.cr6.eq) goto loc_821700A4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170088;
	sub_82177868(ctx, base);
	// lwz r11,28492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25116, ctx.r11.u32);
	// bl 0x8216fdf0
	ctx.lr = 0x821700A4;
	sub_8216FDF0(ctx, base);
loc_821700A4:
	// bl 0x82177858
	ctx.lr = 0x821700A8;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28492, ctx.r3.u32);
	// bne 0x82170064
	if (!ctx.cr0.eq) goto loc_82170064;
loc_821700B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82170040) {
	__imp__sub_82170040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821700C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821700C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,26168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26168);
loc_821700E0:
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x821778d8
	ctx.lr = 0x821700E8;
	sub_821778D8(ctx, base);
	// lwz r11,26168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26168);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82170100;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170134
	if (ctx.cr6.eq) goto loc_82170134;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170118;
	sub_82177868(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x82170134;
	sub_8216F888(ctx, base);
loc_82170134:
	// lwz r11,26168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26168);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217017c
	if (ctx.cr6.eq) goto loc_8217017C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8217014C;
	sub_82177868(ctx, base);
	// lwz r11,26168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26168);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26168);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,27496(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27496, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8217016C;
	sub_821778D8(ctx, base);
	// lwz r4,27496(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27496);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26168, ctx.r4.u32);
	// b 0x821700e0
	goto loc_821700E0;
loc_8217017C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821700C0) {
	__imp__sub_821700C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82170184) {
	__imp__sub_82170184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82170190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26168(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26168);
	// bl 0x821778d8
	ctx.lr = 0x821701B0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26168(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26168);
	// ble cr6,0x821701d4
	if (!ctx.cr6.gt) goto loc_821701D4;
loc_821701BC:
	// stw r30,26168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26168, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821700c0
	ctx.lr = 0x821701C8;
	sub_821700C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x821701bc
	if (!ctx.cr0.eq) goto loc_821701BC;
loc_821701D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82170188) {
	__imp__sub_82170188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821701DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821701DC) {
	__imp__sub_821701DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821701E0) {
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
	// ble cr6,0x8217021c
	if (!ctx.cr6.gt) goto loc_8217021C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82170204:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821700c0
	ctx.lr = 0x8217020C;
	sub_821700C0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82170210;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26168, ctx.r3.u32);
	// bne 0x82170204
	if (!ctx.cr0.eq) goto loc_82170204;
loc_8217021C:
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

PPC_WEAK_FUNC(sub_821701E0) {
	__imp__sub_821701E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82170234) {
	__imp__sub_82170234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,26772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26772);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82170260
	if (!ctx.cr6.eq) goto loc_82170260;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27204);
	// stw r11,28492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28492, ctx.r11.u32);
	// b 0x8216ff40
	sub_8216FF40(ctx, base);
	return;
loc_82170260:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x82170328
	if (ctx.cr6.eq) goto loc_82170328;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x821702d4
	if (!ctx.cr6.eq) goto loc_821702D4;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27204);
	// stw r11,26388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26388, ctx.r11.u32);
	// b 0x8215e0a8
	sub_8215E0A8(ctx, base);
	return;
loc_821702D4:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x821702f0
	if (!ctx.cr6.eq) goto loc_821702F0;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27204);
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// b 0x82147188
	sub_82147188(ctx, base);
	return;
loc_821702F0:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x8217030c
	if (!ctx.cr6.eq) goto loc_8217030C;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27204);
	// stw r11,26008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26008, ctx.r11.u32);
	// b 0x8215e328
	sub_8215E328(ctx, base);
	return;
loc_8217030C:
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27204);
	// stw r11,26944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26944, ctx.r11.u32);
	// b 0x8215e540
	sub_8215E540(ctx, base);
	return;
loc_82170328:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27204);
	// stw r11,27368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27368, ctx.r11.u32);
	// b 0x8215dda0
	sub_8215DDA0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82170238) {
	__imp__sub_82170238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217033C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217033C) {
	__imp__sub_8217033C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82170348;
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
	// lwz r4,27204(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27204);
	// bl 0x821778d8
	ctx.lr = 0x82170360;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27204(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27204);
	// ble cr6,0x82170384
	if (!ctx.cr6.gt) goto loc_82170384;
loc_8217036C:
	// stw r30,27204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27204, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82170238
	ctx.lr = 0x82170378;
	sub_82170238(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8217036c
	if (!ctx.cr0.eq) goto loc_8217036C;
loc_82170384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82170340) {
	__imp__sub_82170340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217038C) {
	__imp__sub_8217038C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170390) {
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
	// ble cr6,0x821703cc
	if (!ctx.cr6.gt) goto loc_821703CC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821703B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82170238
	ctx.lr = 0x821703BC;
	sub_82170238(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821703C0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27204, ctx.r3.u32);
	// bne 0x821703b4
	if (!ctx.cr0.eq) goto loc_821703B4;
loc_821703CC:
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

PPC_WEAK_FUNC(sub_82170390) {
	__imp__sub_82170390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821703E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821703E4) {
	__imp__sub_821703E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821703E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821703F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r5,460
	ctx.r5.s64 = 460;
	// lwz r4,26772(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// bl 0x821778d8
	ctx.lr = 0x82170404;
	sub_821778D8(ctx, base);
	// lwz r4,26772(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28444, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8217041C;
	sub_821778D8(ctx, base);
	// lwz r11,28444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28444);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27260, ctx.r11.u32);
	// bl 0x8215e7f0
	ctx.lr = 0x82170430;
	sub_8215E7F0(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// addi r11,r11,300
	ctx.r11.s64 = ctx.r11.s64 + 300;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82170448;
	sub_82147188(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82170464;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217049c
	if (ctx.cr6.eq) goto loc_8217049C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170480;
	sub_82177868(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x8217049C;
	sub_8216F888(ctx, base);
loc_8217049C:
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,316
	ctx.r4.s64 = ctx.r11.s64 + 316;
	// stw r4,28128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821704B4;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821704e8
	if (ctx.cr6.eq) goto loc_821704E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821704CC;
	sub_82177868(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x821704E8;
	sub_8216F888(ctx, base);
loc_821704E8:
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,320
	ctx.r4.s64 = ctx.r11.s64 + 320;
	// stw r4,28128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82170500;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170534
	if (ctx.cr6.eq) goto loc_82170534;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170518;
	sub_82177868(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x82170534;
	sub_8216F888(ctx, base);
loc_82170534:
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,324
	ctx.r4.s64 = ctx.r11.s64 + 324;
	// stw r4,28128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8217054C;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170580
	if (ctx.cr6.eq) goto loc_82170580;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170564;
	sub_82177868(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x82170580;
	sub_8216F888(ctx, base);
loc_82170580:
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,328
	ctx.r4.s64 = ctx.r11.s64 + 328;
	// stw r4,28128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82170598;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821705cc
	if (ctx.cr6.eq) goto loc_821705CC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821705B0;
	sub_82177868(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x821705CC;
	sub_8216F888(ctx, base);
loc_821705CC:
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,332
	ctx.r4.s64 = ctx.r11.s64 + 332;
	// stw r4,28128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821705E4;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170618
	if (ctx.cr6.eq) goto loc_82170618;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821705FC;
	sub_82177868(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x82170618;
	sub_8216F888(ctx, base);
loc_82170618:
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,336
	ctx.r4.s64 = ctx.r11.s64 + 336;
	// stw r4,28128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82170630;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170664
	if (ctx.cr6.eq) goto loc_82170664;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170648;
	sub_82177868(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x82170664;
	sub_8216F888(ctx, base);
loc_82170664:
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,340
	ctx.r4.s64 = ctx.r11.s64 + 340;
	// stw r4,28128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8217067C;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821706b0
	if (ctx.cr6.eq) goto loc_821706B0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170694;
	sub_82177868(ctx, base);
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x821706B0;
	sub_8216F888(ctx, base);
loc_821706B0:
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821706C4;
	sub_82147188(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,348
	ctx.r11.s64 = ctx.r11.s64 + 348;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821706D8;
	sub_82147188(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82170718
	if (ctx.cr6.eq) goto loc_82170718;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821706F0;
	sub_82177868(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r10.u32);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// lwz r11,352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// stw r11,26168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26168, ctx.r11.u32);
	// bl 0x821700c0
	ctx.lr = 0x82170714;
	sub_821700C0(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
loc_82170718:
	// addi r11,r11,356
	ctx.r11.s64 = ctx.r11.s64 + 356;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82170728;
	sub_82147188(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,364
	ctx.r11.s64 = ctx.r11.s64 + 364;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25880, ctx.r11.u32);
	// bl 0x8214d108
	ctx.lr = 0x82170740;
	sub_8214D108(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,388
	ctx.r11.s64 = ctx.r11.s64 + 388;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27204, ctx.r11.u32);
	// bl 0x82170238
	ctx.lr = 0x82170758;
	sub_82170238(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// lwz r8,400(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8217079c
	if (ctx.cr6.eq) goto loc_8217079C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170770;
	sub_82177868(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r10.u32);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// lwz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// stw r10,26040(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26040, ctx.r10.u32);
	// lwz r4,396(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// bl 0x8216fa70
	ctx.lr = 0x82170798;
	sub_8216FA70(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
loc_8217079C:
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// addi r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 + 404;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x821707B0;
	sub_8216E3E0(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,408
	ctx.r11.s64 = ctx.r11.s64 + 408;
	// stw r11,26752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x821707C4;
	sub_8216E3E0(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,412
	ctx.r11.s64 = ctx.r11.s64 + 412;
	// stw r11,26752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x821707D8;
	sub_8216E3E0(ctx, base);
	// lwz r11,26772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26772);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 + 416;
	// stw r11,26752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x821707EC;
	sub_8216E3E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821703E8) {
	__imp__sub_821703E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821707F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821707F4) {
	__imp__sub_821707F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821707F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82170800;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,460
	ctx.r5.s64 = ctx.r4.s64 * 460;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26772(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26772);
	// bl 0x821778d8
	ctx.lr = 0x82170818;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26772(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26772);
	// ble cr6,0x8217083c
	if (!ctx.cr6.gt) goto loc_8217083C;
loc_82170824:
	// stw r30,26772(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26772, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821703e8
	ctx.lr = 0x82170830;
	sub_821703E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,460
	ctx.r30.s64 = ctx.r30.s64 + 460;
	// bne 0x82170824
	if (!ctx.cr0.eq) goto loc_82170824;
loc_8217083C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821707F8) {
	__imp__sub_821707F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82170844) {
	__imp__sub_82170844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170848) {
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
	// ble cr6,0x82170884
	if (!ctx.cr6.gt) goto loc_82170884;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8217086C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821703e8
	ctx.lr = 0x82170874;
	sub_821703E8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82170878;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26772, ctx.r3.u32);
	// bne 0x8217086c
	if (!ctx.cr0.eq) goto loc_8217086C;
loc_82170884:
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

PPC_WEAK_FUNC(sub_82170848) {
	__imp__sub_82170848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217089C) {
	__imp__sub_8217089C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821708A0) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25048(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// bl 0x821778d8
	ctx.lr = 0x821708C0;
	sub_821778D8(ctx, base);
	// lwz r11,25048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821708f8
	if (ctx.cr6.eq) goto loc_821708F8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821708D8;
	sub_82177868(ctx, base);
	// lwz r11,25048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26772, ctx.r11.u32);
	// bl 0x821703e8
	ctx.lr = 0x821708F8;
	sub_821703E8(ctx, base);
loc_821708F8:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_821708A0) {
	__imp__sub_821708A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217090C) {
	__imp__sub_8217090C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82170918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,25048(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// bl 0x821778d8
	ctx.lr = 0x82170930;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,25048(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// ble cr6,0x82170994
	if (!ctx.cr6.gt) goto loc_82170994;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82170940:
	// stw r29,25048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25048, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82170954;
	sub_821778D8(ctx, base);
	// lwz r11,25048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170988
	if (ctx.cr6.eq) goto loc_82170988;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8217096C;
	sub_82177868(ctx, base);
	// lwz r11,25048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26772(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26772, ctx.r11.u32);
	// bl 0x821703e8
	ctx.lr = 0x82170988;
	sub_821703E8(ctx, base);
loc_82170988:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82170940
	if (!ctx.cr0.eq) goto loc_82170940;
loc_82170994:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82170910) {
	__imp__sub_82170910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217099C) {
	__imp__sub_8217099C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821709A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821709A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82170a18
	if (!ctx.cr6.gt) goto loc_82170A18;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25048(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
loc_821709C4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821709D0;
	sub_821778D8(ctx, base);
	// lwz r11,25048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170a04
	if (ctx.cr6.eq) goto loc_82170A04;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821709E8;
	sub_82177868(ctx, base);
	// lwz r11,25048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25048);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26772(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26772, ctx.r11.u32);
	// bl 0x821703e8
	ctx.lr = 0x82170A04;
	sub_821703E8(ctx, base);
loc_82170A04:
	// bl 0x82177858
	ctx.lr = 0x82170A08;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25048, ctx.r3.u32);
	// bne 0x821709c4
	if (!ctx.cr0.eq) goto loc_821709C4;
loc_82170A18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821709A0) {
	__imp__sub_821709A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82170A28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,752
	ctx.r5.s64 = 752;
	// lwz r4,27632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// bl 0x821778d8
	ctx.lr = 0x82170A3C;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82170A44;
	sub_82177758(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,748
	ctx.r11.s64 = ctx.r11.s64 + 748;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25872, ctx.r11.u32);
	// bl 0x8216ea78
	ctx.lr = 0x82170A5C;
	sub_8216EA78(ctx, base);
	// lwz r4,27632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28444, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82170A74;
	sub_821778D8(ctx, base);
	// lwz r11,28444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28444);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27260, ctx.r11.u32);
	// bl 0x8215e7f0
	ctx.lr = 0x82170A88;
	sub_8215E7F0(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82170AA0;
	sub_82147188(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r4,r11,228
	ctx.r4.s64 = ctx.r11.s64 + 228;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82170ABC;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82170af4
	if (ctx.cr6.eq) goto loc_82170AF4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170AD8;
	sub_82177868(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x82170AF4;
	sub_8216F888(ctx, base);
loc_82170AF4:
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,236
	ctx.r4.s64 = ctx.r11.s64 + 236;
	// stw r4,28128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82170B0C;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170b40
	if (ctx.cr6.eq) goto loc_82170B40;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170B24;
	sub_82177868(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x82170B40;
	sub_8216F888(ctx, base);
loc_82170B40:
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// stw r4,28128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82170B58;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170b8c
	if (ctx.cr6.eq) goto loc_82170B8C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170B70;
	sub_82177868(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x82170B8C;
	sub_8216F888(ctx, base);
loc_82170B8C:
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// stw r4,28128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28128, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82170BA4;
	sub_821778D8(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170bd8
	if (ctx.cr6.eq) goto loc_82170BD8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170BBC;
	sub_82177868(ctx, base);
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28128);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28084(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28084, ctx.r11.u32);
	// bl 0x8216f888
	ctx.lr = 0x82170BD8;
	sub_8216F888(ctx, base);
loc_82170BD8:
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82170c18
	if (ctx.cr6.eq) goto loc_82170C18;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170BF0;
	sub_82177868(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// stw r11,26168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26168, ctx.r11.u32);
	// bl 0x821700c0
	ctx.lr = 0x82170C14;
	sub_821700C0(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
loc_82170C18:
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x82170C2C;
	sub_8216E3E0(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,252
	ctx.r11.s64 = ctx.r11.s64 + 252;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82170C40;
	sub_82147188(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82170C54;
	sub_82147188(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// stw r11,26752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x82170C68;
	sub_8216E3E0(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// stw r11,26752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x82170C7C;
	sub_8216E3E0(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,288
	ctx.r11.s64 = ctx.r11.s64 + 288;
	// stw r11,26752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x82170C90;
	sub_8216E3E0(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// stw r11,26752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26752, ctx.r11.u32);
	// bl 0x8216e3e0
	ctx.lr = 0x82170CA4;
	sub_8216E3E0(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170ce4
	if (ctx.cr6.eq) goto loc_82170CE4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170CBC;
	sub_82177868(ctx, base);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// lwz r11,27632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27632);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// stw r10,25048(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25048, ctx.r10.u32);
	// lwz r4,184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x82170910
	ctx.lr = 0x82170CE4;
	sub_82170910(ctx, base);
loc_82170CE4:
	// bl 0x821777e0
	ctx.lr = 0x82170CE8;
	sub_821777E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82170A20) {
	__imp__sub_82170A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82170CF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,752
	ctx.r5.s64 = ctx.r4.s64 * 752;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27632(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27632);
	// bl 0x821778d8
	ctx.lr = 0x82170D10;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27632(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27632);
	// ble cr6,0x82170d34
	if (!ctx.cr6.gt) goto loc_82170D34;
loc_82170D1C:
	// stw r30,27632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27632, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82170a20
	ctx.lr = 0x82170D28;
	sub_82170A20(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,752
	ctx.r30.s64 = ctx.r30.s64 + 752;
	// bne 0x82170d1c
	if (!ctx.cr0.eq) goto loc_82170D1C;
loc_82170D34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82170CF0) {
	__imp__sub_82170CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82170D3C) {
	__imp__sub_82170D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170D40) {
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
	// ble cr6,0x82170d7c
	if (!ctx.cr6.gt) goto loc_82170D7C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82170D64:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82170a20
	ctx.lr = 0x82170D6C;
	sub_82170A20(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82170D70;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27632, ctx.r3.u32);
	// bne 0x82170d64
	if (!ctx.cr0.eq) goto loc_82170D64;
loc_82170D7C:
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

PPC_WEAK_FUNC(sub_82170D40) {
	__imp__sub_82170D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82170D94) {
	__imp__sub_82170D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170D98) {
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
	// lwz r4,26964(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26964);
	// bl 0x821778d8
	ctx.lr = 0x82170DBC;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x82170DC4;
	sub_82177758(ctx, base);
	// lwz r3,26964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26964);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82170e48
	if (ctx.cr6.eq) goto loc_82170E48;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82170dec
	if (ctx.cr6.eq) goto loc_82170DEC;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82170dec
	if (ctx.cr6.eq) goto loc_82170DEC;
	// bl 0x82177950
	ctx.lr = 0x82170DE8;
	sub_82177950(ctx, base);
	// b 0x82170e48
	goto loc_82170E48;
loc_82170DEC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170DF4;
	sub_82177868(ctx, base);
	// lwz r11,26964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26964);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,26964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26964);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27632, ctx.r11.u32);
	// bne cr6,0x82170e20
	if (!ctx.cr6.eq) goto loc_82170E20;
	// bl 0x82177898
	ctx.lr = 0x82170E18;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82170e24
	goto loc_82170E24;
loc_82170E20:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82170E24:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82170a20
	ctx.lr = 0x82170E2C;
	sub_82170A20(ctx, base);
	// lwz r3,26964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26964);
	// bl 0x82175cd0
	ctx.lr = 0x82170E34;
	sub_82175CD0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82170e48
	if (ctx.cr6.eq) goto loc_82170E48;
	// lwz r11,26964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26964);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82170E48:
	// bl 0x821777e0
	ctx.lr = 0x82170E4C;
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

PPC_WEAK_FUNC(sub_82170D98) {
	__imp__sub_82170D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82170E64) {
	__imp__sub_82170E64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82170E70;
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
	// lwz r4,26964(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26964);
	// bl 0x821778d8
	ctx.lr = 0x82170E88;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26964(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26964);
	// ble cr6,0x82170eac
	if (!ctx.cr6.gt) goto loc_82170EAC;
loc_82170E94:
	// stw r30,26964(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26964, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82170d98
	ctx.lr = 0x82170EA0;
	sub_82170D98(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82170e94
	if (!ctx.cr0.eq) goto loc_82170E94;
loc_82170EAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82170E68) {
	__imp__sub_82170E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82170EB4) {
	__imp__sub_82170EB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170EB8) {
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
	// ble cr6,0x82170ef4
	if (!ctx.cr6.gt) goto loc_82170EF4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82170EDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82170d98
	ctx.lr = 0x82170EE4;
	sub_82170D98(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82170EE8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26964(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26964, ctx.r3.u32);
	// bne 0x82170edc
	if (!ctx.cr0.eq) goto loc_82170EDC;
loc_82170EF4:
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

PPC_WEAK_FUNC(sub_82170EB8) {
	__imp__sub_82170EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82170F0C) {
	__imp__sub_82170F0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170F10) {
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
	// lwz r4,25112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25112);
	// bl 0x821778d8
	ctx.lr = 0x82170F30;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82170F38;
	sub_82177758(ctx, base);
	// lwz r11,25112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25112);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82170F4C;
	sub_82147188(ctx, base);
	// lwz r11,25112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25112);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82170f8c
	if (ctx.cr6.eq) goto loc_82170F8C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82170F64;
	sub_82177868(ctx, base);
	// lwz r11,25112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25112);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,25112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25112);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,26964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26964, ctx.r10.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82170e68
	ctx.lr = 0x82170F8C;
	sub_82170E68(ctx, base);
loc_82170F8C:
	// bl 0x821777e0
	ctx.lr = 0x82170F90;
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

PPC_WEAK_FUNC(sub_82170F10) {
	__imp__sub_82170F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82170FA4) {
	__imp__sub_82170FA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82170FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25112(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25112);
	// bl 0x821778d8
	ctx.lr = 0x82170FD0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25112(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25112);
	// ble cr6,0x82170ff4
	if (!ctx.cr6.gt) goto loc_82170FF4;
loc_82170FDC:
	// stw r30,25112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25112, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82170f10
	ctx.lr = 0x82170FE8;
	sub_82170F10(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82170fdc
	if (!ctx.cr0.eq) goto loc_82170FDC;
loc_82170FF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82170FA8) {
	__imp__sub_82170FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82170FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82170FFC) {
	__imp__sub_82170FFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171000) {
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
	// ble cr6,0x8217103c
	if (!ctx.cr6.gt) goto loc_8217103C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82171024:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82170f10
	ctx.lr = 0x8217102C;
	sub_82170F10(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82171030;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25112, ctx.r3.u32);
	// bne 0x82171024
	if (!ctx.cr0.eq) goto loc_82171024;
loc_8217103C:
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

PPC_WEAK_FUNC(sub_82171000) {
	__imp__sub_82171000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171054) {
	__imp__sub_82171054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171058) {
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
	// lwz r4,25284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25284);
	// bl 0x821778d8
	ctx.lr = 0x8217107C;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x82171084;
	sub_82177758(ctx, base);
	// lwz r3,25284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25284);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82171108
	if (ctx.cr6.eq) goto loc_82171108;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x821710ac
	if (ctx.cr6.eq) goto loc_821710AC;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x821710ac
	if (ctx.cr6.eq) goto loc_821710AC;
	// bl 0x82177950
	ctx.lr = 0x821710A8;
	sub_82177950(ctx, base);
	// b 0x82171108
	goto loc_82171108;
loc_821710AC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821710B4;
	sub_82177868(ctx, base);
	// lwz r11,25284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25284);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,25284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25284);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25112, ctx.r11.u32);
	// bne cr6,0x821710e0
	if (!ctx.cr6.eq) goto loc_821710E0;
	// bl 0x82177898
	ctx.lr = 0x821710D8;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821710e4
	goto loc_821710E4;
loc_821710E0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821710E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82170f10
	ctx.lr = 0x821710EC;
	sub_82170F10(ctx, base);
	// lwz r3,25284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25284);
	// bl 0x82175c40
	ctx.lr = 0x821710F4;
	sub_82175C40(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82171108
	if (ctx.cr6.eq) goto loc_82171108;
	// lwz r11,25284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25284);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82171108:
	// bl 0x821777e0
	ctx.lr = 0x8217110C;
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

PPC_WEAK_FUNC(sub_82171058) {
	__imp__sub_82171058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171124) {
	__imp__sub_82171124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82171130;
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
	// lwz r4,25284(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25284);
	// bl 0x821778d8
	ctx.lr = 0x82171148;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25284(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25284);
	// ble cr6,0x8217116c
	if (!ctx.cr6.gt) goto loc_8217116C;
loc_82171154:
	// stw r30,25284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25284, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82171058
	ctx.lr = 0x82171160;
	sub_82171058(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82171154
	if (!ctx.cr0.eq) goto loc_82171154;
loc_8217116C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82171128) {
	__imp__sub_82171128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171174) {
	__imp__sub_82171174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171178) {
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
	// ble cr6,0x821711b4
	if (!ctx.cr6.gt) goto loc_821711B4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8217119C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82171058
	ctx.lr = 0x821711A4;
	sub_82171058(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821711A8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25284, ctx.r3.u32);
	// bne 0x8217119c
	if (!ctx.cr0.eq) goto loc_8217119C;
loc_821711B4:
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

PPC_WEAK_FUNC(sub_82171178) {
	__imp__sub_82171178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821711CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821711CC) {
	__imp__sub_821711CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821711D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,25868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25868);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821711f8
	if (!ctx.cr6.eq) goto loc_821711F8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,28300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28300, ctx.r11.u32);
	// b 0x82154b30
	sub_82154B30(ctx, base);
	return;
loc_821711F8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82171214
	if (!ctx.cr6.eq) goto loc_82171214;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,28520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28520, ctx.r11.u32);
	// b 0x82155018
	sub_82155018(ctx, base);
	return;
loc_82171214:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82171230
	if (!ctx.cr6.eq) goto loc_82171230;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,26704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26704, ctx.r11.u32);
	// b 0x821674c0
	sub_821674C0(ctx, base);
	return;
loc_82171230:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8217124c
	if (!ctx.cr6.eq) goto loc_8217124C;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,28516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28516, ctx.r11.u32);
	// b 0x82155530
	sub_82155530(ctx, base);
	return;
loc_8217124C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82171268
	if (!ctx.cr6.eq) goto loc_82171268;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,25568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25568, ctx.r11.u32);
	// b 0x82155df0
	sub_82155DF0(ctx, base);
	return;
loc_82171268:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82171284
	if (!ctx.cr6.eq) goto loc_82171284;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,25372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25372, ctx.r11.u32);
	// b 0x82152400
	sub_82152400(ctx, base);
	return;
loc_82171284:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821712a0
	if (!ctx.cr6.eq) goto loc_821712A0;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,26508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26508, ctx.r11.u32);
	// b 0x82150bf8
	sub_82150BF8(ctx, base);
	return;
loc_821712A0:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821712bc
	if (!ctx.cr6.eq) goto loc_821712BC;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,27500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27500, ctx.r11.u32);
	// b 0x82152000
	sub_82152000(ctx, base);
	return;
loc_821712BC:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821712d8
	if (!ctx.cr6.eq) goto loc_821712D8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,28624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28624, ctx.r11.u32);
	// b 0x8214f968
	sub_8214F968(ctx, base);
	return;
loc_821712D8:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821712f4
	if (!ctx.cr6.eq) goto loc_821712F4;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,25880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25880, ctx.r11.u32);
	// b 0x8214d108
	sub_8214D108(ctx, base);
	return;
loc_821712F4:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82171310
	if (!ctx.cr6.eq) goto loc_82171310;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,27484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27484, ctx.r11.u32);
	// b 0x8214c688
	sub_8214C688(ctx, base);
	return;
loc_82171310:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8217132c
	if (!ctx.cr6.eq) goto loc_8217132C;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,27428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27428, ctx.r11.u32);
	// b 0x8214bc70
	sub_8214BC70(ctx, base);
	return;
loc_8217132C:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821715a4
	if (ctx.cr6.eq) goto loc_821715A4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821715a4
	if (ctx.cr6.eq) goto loc_821715A4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82171358
	if (!ctx.cr6.eq) goto loc_82171358;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,24992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24992, ctx.r11.u32);
	// b 0x8215ccc0
	sub_8215CCC0(ctx, base);
	return;
loc_82171358:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82171374
	if (!ctx.cr6.eq) goto loc_82171374;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,25052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25052, ctx.r11.u32);
	// b 0x82168620
	sub_82168620(ctx, base);
	return;
loc_82171374:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82171390
	if (!ctx.cr6.eq) goto loc_82171390;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,27896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27896, ctx.r11.u32);
	// b 0x82157678
	sub_82157678(ctx, base);
	return;
loc_82171390:
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x821713ac
	if (!ctx.cr6.eq) goto loc_821713AC;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,28324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28324, ctx.r11.u32);
	// b 0x8215b528
	sub_8215B528(ctx, base);
	return;
loc_821713AC:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x821713c8
	if (!ctx.cr6.eq) goto loc_821713C8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,26804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26804, ctx.r11.u32);
	// b 0x8215a760
	sub_8215A760(ctx, base);
	return;
loc_821713C8:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x821713e4
	if (!ctx.cr6.eq) goto loc_821713E4;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,27908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27908, ctx.r11.u32);
	// b 0x8216dbe8
	sub_8216DBE8(ctx, base);
	return;
loc_821713E4:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82171400
	if (!ctx.cr6.eq) goto loc_82171400;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,25032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25032, ctx.r11.u32);
	// b 0x821533b8
	sub_821533B8(ctx, base);
	return;
loc_82171400:
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8217141c
	if (!ctx.cr6.eq) goto loc_8217141C;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,26628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26628, ctx.r11.u32);
	// b 0x82166bb8
	sub_82166BB8(ctx, base);
	return;
loc_8217141C:
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x82171438
	if (!ctx.cr6.eq) goto loc_82171438;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,25284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25284, ctx.r11.u32);
	// b 0x82171058
	sub_82171058(ctx, base);
	return;
loc_82171438:
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x82171454
	if (!ctx.cr6.eq) goto loc_82171454;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,26964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26964, ctx.r11.u32);
	// b 0x82170d98
	sub_82170D98(ctx, base);
	return;
loc_82171454:
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x82171470
	if (!ctx.cr6.eq) goto loc_82171470;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,28644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28644, ctx.r11.u32);
	// b 0x8215fc90
	sub_8215FC90(ctx, base);
	return;
loc_82171470:
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x8217148c
	if (!ctx.cr6.eq) goto loc_8217148C;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,27196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27196, ctx.r11.u32);
	// b 0x8216bdc0
	sub_8216BDC0(ctx, base);
	return;
loc_8217148C:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x821714a8
	if (!ctx.cr6.eq) goto loc_821714A8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,27620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27620, ctx.r11.u32);
	// b 0x8214b030
	sub_8214B030(ctx, base);
	return;
loc_821714A8:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x821714c4
	if (!ctx.cr6.eq) goto loc_821714C4;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,26528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26528, ctx.r11.u32);
	// b 0x82168798
	sub_82168798(ctx, base);
	return;
loc_821714C4:
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x821714e0
	if (!ctx.cr6.eq) goto loc_821714E0;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,25784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25784, ctx.r11.u32);
	// b 0x8216a5a0
	sub_8216A5A0(ctx, base);
	return;
loc_821714E0:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x821714fc
	if (!ctx.cr6.eq) goto loc_821714FC;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,25020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25020, ctx.r11.u32);
	// b 0x82161610
	sub_82161610(ctx, base);
	return;
loc_821714FC:
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bne cr6,0x82171518
	if (!ctx.cr6.eq) goto loc_82171518;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,26316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26316, ctx.r11.u32);
	// b 0x82161ba0
	sub_82161BA0(ctx, base);
	return;
loc_82171518:
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x82171534
	if (!ctx.cr6.eq) goto loc_82171534;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,27720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27720, ctx.r11.u32);
	// b 0x82163460
	sub_82163460(ctx, base);
	return;
loc_82171534:
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// bne cr6,0x82171550
	if (!ctx.cr6.eq) goto loc_82171550;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,28220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28220, ctx.r11.u32);
	// b 0x82162c30
	sub_82162C30(ctx, base);
	return;
loc_82171550:
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// bne cr6,0x8217156c
	if (!ctx.cr6.eq) goto loc_8217156C;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,28376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28376, ctx.r11.u32);
	// b 0x82160150
	sub_82160150(ctx, base);
	return;
loc_8217156C:
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// bne cr6,0x82171588
	if (!ctx.cr6.eq) goto loc_82171588;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,25760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25760, ctx.r11.u32);
	// b 0x8216cea0
	sub_8216CEA0(ctx, base);
	return;
loc_82171588:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,28056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28056, ctx.r11.u32);
	// b 0x8215b810
	sub_8215B810(ctx, base);
	return;
loc_821715A4:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26408);
	// stw r11,25520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25520, ctx.r11.u32);
	// b 0x821699f8
	sub_821699F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821711D0) {
	__imp__sub_821711D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821715B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821715B8) {
	__imp__sub_821715B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821715BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821715BC) {
	__imp__sub_821715BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821715C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821715C8;
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
	// lwz r4,26408(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26408);
	// bl 0x821778d8
	ctx.lr = 0x821715E0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26408(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26408);
	// ble cr6,0x82171604
	if (!ctx.cr6.gt) goto loc_82171604;
loc_821715EC:
	// stw r30,26408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26408, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821711d0
	ctx.lr = 0x821715F8;
	sub_821711D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821715ec
	if (!ctx.cr0.eq) goto loc_821715EC;
loc_82171604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821715C0) {
	__imp__sub_821715C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217160C) {
	__imp__sub_8217160C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171610) {
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
	// ble cr6,0x8217164c
	if (!ctx.cr6.gt) goto loc_8217164C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82171634:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821711d0
	ctx.lr = 0x8217163C;
	sub_821711D0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82171640;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26408, ctx.r3.u32);
	// bne 0x82171634
	if (!ctx.cr0.eq) goto loc_82171634;
loc_8217164C:
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

PPC_WEAK_FUNC(sub_82171610) {
	__imp__sub_82171610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171664) {
	__imp__sub_82171664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171668) {
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
	// lwz r4,25868(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25868);
	// bl 0x821778d8
	ctx.lr = 0x82171688;
	sub_821778D8(ctx, base);
	// lwz r11,25868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25868);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26408, ctx.r11.u32);
	// bl 0x821711d0
	ctx.lr = 0x821716A0;
	sub_821711D0(ctx, base);
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82171668) {
	__imp__sub_82171668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821716B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821716B4) {
	__imp__sub_821716B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821716B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821716C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,25868(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25868);
	// bl 0x821778d8
	ctx.lr = 0x821716D8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,25868(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25868);
	// ble cr6,0x8217171c
	if (!ctx.cr6.gt) goto loc_8217171C;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821716E8:
	// stw r31,25868(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25868, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821716FC;
	sub_821778D8(ctx, base);
	// lwz r11,25868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25868);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26408, ctx.r11.u32);
	// bl 0x821711d0
	ctx.lr = 0x82171710;
	sub_821711D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x821716e8
	if (!ctx.cr0.eq) goto loc_821716E8;
loc_8217171C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821716B8) {
	__imp__sub_821716B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171724) {
	__imp__sub_82171724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82171730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82171780
	if (!ctx.cr6.gt) goto loc_82171780;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25868(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25868);
loc_8217174C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82171758;
	sub_821778D8(ctx, base);
	// lwz r11,25868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25868);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26408, ctx.r11.u32);
	// bl 0x821711d0
	ctx.lr = 0x8217176C;
	sub_821711D0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82171770;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25868, ctx.r3.u32);
	// bne 0x8217174c
	if (!ctx.cr0.eq) goto loc_8217174C;
loc_82171780:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82171728) {
	__imp__sub_82171728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171788) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,26460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26460);
	// bl 0x821778d8
	ctx.lr = 0x821717A8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x821717B0;
	sub_82177758(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x821717B8;
	sub_82177758(ctx, base);
	// lwz r11,26460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26460);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27824, ctx.r11.u32);
	// bl 0x82147508
	ctx.lr = 0x821717CC;
	sub_82147508(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x821717D0;
	sub_821777E0(ctx, base);
	// lwz r11,26460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26460);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82171810
	if (ctx.cr6.eq) goto loc_82171810;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821717E8;
	sub_82177868(ctx, base);
	// lwz r11,26460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26460);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,26460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26460);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,25868(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25868, ctx.r10.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821716b8
	ctx.lr = 0x82171810;
	sub_821716B8(ctx, base);
loc_82171810:
	// bl 0x821777e0
	ctx.lr = 0x82171814;
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

PPC_WEAK_FUNC(sub_82171788) {
	__imp__sub_82171788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82171830;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26460(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26460);
	// bl 0x821778d8
	ctx.lr = 0x82171848;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26460(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26460);
	// ble cr6,0x8217186c
	if (!ctx.cr6.gt) goto loc_8217186C;
loc_82171854:
	// stw r30,26460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26460, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82171788
	ctx.lr = 0x82171860;
	sub_82171788(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82171854
	if (!ctx.cr0.eq) goto loc_82171854;
loc_8217186C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82171828) {
	__imp__sub_82171828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171874) {
	__imp__sub_82171874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171878) {
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
	// ble cr6,0x821718b4
	if (!ctx.cr6.gt) goto loc_821718B4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8217189C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82171788
	ctx.lr = 0x821718A4;
	sub_82171788(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821718A8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26460, ctx.r3.u32);
	// bne 0x8217189c
	if (!ctx.cr0.eq) goto loc_8217189C;
loc_821718B4:
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

PPC_WEAK_FUNC(sub_82171878) {
	__imp__sub_82171878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821718CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821718CC) {
	__imp__sub_821718CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821718D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821718D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r10,5428
	ctx.r29.s64 = ctx.r10.s64 + 5428;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r10,r29,48
	ctx.r10.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r31,r4,-1
	ctx.r31.s64 = ctx.r4.s64 + -1;
	// bne cr6,0x82171928
	if (!ctx.cr6.eq) goto loc_82171928;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// andc r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r31.u64;
loc_82171928:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82171944
	if (!ctx.cr6.eq) goto loc_82171944;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// andc r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82171944:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82171960
	if (!ctx.cr6.eq) goto loc_82171960;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// andc r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82171960:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8217197c
	if (!ctx.cr6.eq) goto loc_8217197C;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// andc r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8217197C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82171998
	if (!ctx.cr6.eq) goto loc_82171998;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// andc r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82171998:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x821719b4
	if (!ctx.cr6.eq) goto loc_821719B4;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// andc r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_821719B4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82171ac4
	if (ctx.cr6.eq) goto loc_82171AC4;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822e5290
	ctx.lr = 0x821719C8;
	sub_822E5290(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x821719f4
	if (!ctx.cr6.eq) goto loc_821719F4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821719f4
	if (ctx.cr6.eq) goto loc_821719F4;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// andc r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_821719F4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82171a20
	if (!ctx.cr6.eq) goto loc_82171A20;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171a20
	if (ctx.cr6.eq) goto loc_82171A20;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// andc r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82171A20:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82171a4c
	if (!ctx.cr6.eq) goto loc_82171A4C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171a4c
	if (ctx.cr6.eq) goto loc_82171A4C;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// stw r3,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r3.u32);
	// andc r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82171A4C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82171a78
	if (!ctx.cr6.eq) goto loc_82171A78;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171a78
	if (ctx.cr6.eq) goto loc_82171A78;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// stw r3,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r3.u32);
	// andc r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82171A78:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82171aa4
	if (!ctx.cr6.eq) goto loc_82171AA4;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171aa4
	if (ctx.cr6.eq) goto loc_82171AA4;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r11.u32);
	// stw r3,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r3.u32);
	// andc r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r31.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82171AA4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82171ac4
	if (!ctx.cr6.eq) goto loc_82171AC4;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171ac4
	if (ctx.cr6.eq) goto loc_82171AC4;
	// stw r11,44(r27)
	PPC_STORE_U32(ctx.r27.u32 + 44, ctx.r11.u32);
	// stw r3,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r3.u32);
loc_82171AC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821718D0) {
	__imp__sub_821718D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171ACC) {
	__imp__sub_82171ACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171AD0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821718d0
	ctx.lr = 0x82171AF8;
	sub_821718D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821718d0
	ctx.lr = 0x82171B08;
	sub_821718D0(ctx, base);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r8,r9,28672
	ctx.r8.s64 = ctx.r9.s64 + 28672;
	// stw r11,28672(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28672, ctx.r11.u32);
	// stw r10,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r10.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,-8(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82171AD0) {
	__imp__sub_82171AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171B40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r8,r10,28668
	ctx.r8.s64 = ctx.r10.s64 + 28668;
	// lwz r9,28668(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28668);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// andc r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171B40) {
	__imp__sub_82171B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82171B80:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82171b80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82171B80;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171B70) {
	__imp__sub_82171B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171B90) {
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
loc_82171BA4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82171ba4
	if (!ctx.cr0.eq) goto loc_82171BA4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82171be0
	if (ctx.cr6.eq) goto loc_82171BE0;
loc_82171BCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8228b0d8
	ctx.lr = 0x82171BD4;
	sub_8228B0D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82171bcc
	if (!ctx.cr6.eq) goto loc_82171BCC;
loc_82171BE0:
	// lwsync 
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82171B90) {
	__imp__sub_82171B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171BF8) {
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
loc_82171C0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82171c6c
	if (!ctx.cr6.eq) goto loc_82171C6C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82171C1C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82171c1c
	if (!ctx.cr0.eq) goto loc_82171C1C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82171c50
	if (!ctx.cr6.eq) goto loc_82171C50;
	// lwsync 
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82171c78
	if (ctx.cr6.eq) goto loc_82171C78;
loc_82171C50:
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
	// bne 0x82171c50
	if (!ctx.cr0.eq) goto loc_82171C50;
loc_82171C6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8228b0d8
	ctx.lr = 0x82171C74;
	sub_8228B0D8(ctx, base);
	// b 0x82171c0c
	goto loc_82171C0C;
loc_82171C78:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82171BF8) {
	__imp__sub_82171BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171C8C) {
	__imp__sub_82171C8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171C90) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171C90) {
	__imp__sub_82171C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171CA4) {
	__imp__sub_82171CA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171CA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171CA8) {
	__imp__sub_82171CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171CAC) {
	__imp__sub_82171CAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171CB0) {
	__imp__sub_82171CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171CB4) {
	__imp__sub_82171CB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171CB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171CB8) {
	__imp__sub_82171CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171CBC) {
	__imp__sub_82171CBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82171CE0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82171ce0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82171CE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171CC0) {
	__imp__sub_82171CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171CFC) {
	__imp__sub_82171CFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,225(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 225);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82171d70
	if (!ctx.cr6.gt) goto loc_82171D70;
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
loc_82171D1C:
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82171D30:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82171d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82171D30;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lhz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// sth r6,-6(r11)
	PPC_STORE_U16(ctx.r11.u32 + -6, ctx.r6.u16);
	// sth r7,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r7.u16);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// lbz r4,225(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 225);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x82171d1c
	if (ctx.cr6.lt) goto loc_82171D1C;
loc_82171D70:
	// stb r6,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r6.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171D00) {
	__imp__sub_82171D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171D78) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,57(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82171DA8:
	// dcbf r10,r9
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x82171da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82171DA8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171D78) {
	__imp__sub_82171D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171DB8) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82171b40
	ctx.lr = 0x82171DD8;
	sub_82171B40(ctx, base);
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,27660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27660);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82171DB8) {
	__imp__sub_82171DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171E24) {
	__imp__sub_82171E24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r3,5504(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5504);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171E28) {
	__imp__sub_82171E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171E34) {
	__imp__sub_82171E34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171E38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82272e28
	sub_82272E28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82171E38) {
	__imp__sub_82171E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171E3C) {
	__imp__sub_82171E3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171E40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8227f7e0
	sub_8227F7E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82171E40) {
	__imp__sub_82171E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171E44) {
	__imp__sub_82171E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171E48) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238eae8
	sub_8238EAE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82171E48) {
	__imp__sub_82171E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171E4C) {
	__imp__sub_82171E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171E50) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82171f14
	if (ctx.cr6.eq) goto loc_82171F14;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82171f14
	if (ctx.cr6.eq) goto loc_82171F14;
	// lwz r10,192(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// addi r9,r4,192
	ctx.r9.s64 = ctx.r4.s64 + 192;
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// lwz r8,196(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r8,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
	// lwz r7,200(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// lwz r6,204(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// stw r6,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r6.u32);
	// lwz r5,72(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r9,84(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// lwz r11,184(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82171ec0
	if (ctx.cr6.lt) goto loc_82171EC0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82171EC0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82171f14
	if (!ctx.cr6.gt) goto loc_82171F14;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82171ED0:
	// lwz r11,296(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r11,72
	ctx.r7.s64 = ctx.r11.s64 + 72;
	// addi r11,r8,72
	ctx.r11.s64 = ctx.r8.s64 + 72;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r5.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r11.u32);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r7,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r7.u32);
	// bne 0x82171ed0
	if (!ctx.cr0.eq) goto loc_82171ED0;
loc_82171F14:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171E50) {
	__imp__sub_82171E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171F1C) {
	__imp__sub_82171F1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171F20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171F20) {
	__imp__sub_82171F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,5512
	ctx.r11.s64 = ctx.r11.s64 + 5512;
	// addi r9,r11,672
	ctx.r9.s64 = ctx.r11.s64 + 672;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r11,168
	ctx.r9.s64 = ctx.r11.s64 + 168;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82171F28) {
	__imp__sub_82171F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171F58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82171F58) {
	__imp__sub_82171F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82171F5C) {
	__imp__sub_82171F5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171F60) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x821444c8
	ctx.lr = 0x82171F7C;
	sub_821444C8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82171F90;
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

PPC_WEAK_FUNC(sub_82171F60) {
	__imp__sub_82171F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82171FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82171FA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,5512
	ctx.r31.s64 = ctx.r11.s64 + 5512;
	// addi r9,r31,336
	ctx.r9.s64 = ctx.r31.s64 + 336;
	// addi r8,r31,672
	ctx.r8.s64 = ctx.r31.s64 + 672;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82171FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82172068
	if (!ctx.cr6.eq) goto loc_82172068;
	// lwsync 
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,-14124
	ctx.r11.s64 = ctx.r11.s64 + -14124;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_82171FF0:
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
	// bne 0x82171ff0
	if (!ctx.cr0.eq) goto loc_82171FF0;
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r6,4760
	ctx.r29.s64 = ctx.r6.s64 + 4760;
	// addi r28,r5,13800
	ctx.r28.s64 = ctx.r5.s64 + 13800;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r6,r11,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82280b08
	ctx.lr = 0x82172038;
	sub_82280B08(ctx, base);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r10,8032
	ctx.r4.s64 = ctx.r10.s64 + 8032;
	// bl 0x822db160
	ctx.lr = 0x82172050;
	sub_822DB160(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// lwzx r4,r8,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x8230d720
	ctx.lr = 0x82172068;
	sub_8230D720(ctx, base);
loc_82172068:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82171FA0) {
	__imp__sub_82171FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82172074) {
	__imp__sub_82172074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,6184
	ctx.r11.s64 = ctx.r11.s64 + 6184;
	// addi r9,r11,-168
	ctx.r9.s64 = ctx.r11.s64 + -168;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82172078) {
	__imp__sub_82172078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172098) {
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
	// bl 0x82393cc8
	ctx.lr = 0x821720B4;
	sub_82393CC8(ctx, base);
	// bl 0x823ad840
	ctx.lr = 0x821720B8;
	sub_823AD840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821720c8
	if (ctx.cr6.eq) goto loc_821720C8;
	// bl 0x823ad808
	ctx.lr = 0x821720C8;
	sub_823AD808(ctx, base);
loc_821720C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228b0d8
	ctx.lr = 0x821720D0;
	sub_8228B0D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821720dc
	if (ctx.cr6.eq) goto loc_821720DC;
	// bl 0x823aee78
	ctx.lr = 0x821720DC;
	sub_823AEE78(ctx, base);
loc_821720DC:
	// bl 0x82393d48
	ctx.lr = 0x821720E0;
	sub_82393D48(ctx, base);
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

PPC_WEAK_FUNC(sub_82172098) {
	__imp__sub_82172098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821720F8) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,5680
	ctx.r30.s64 = ctx.r11.s64 + 5680;
loc_82172118:
	// addi r11,r30,504
	ctx.r11.s64 = ctx.r30.s64 + 504;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217213c
	if (ctx.cr6.eq) goto loc_8217213C;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,-168
	ctx.r10.s64 = ctx.r30.s64 + -168;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217213C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217213C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,164
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 164, ctx.xer);
	// blt cr6,0x82172118
	if (ctx.cr6.lt) goto loc_82172118;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-8832
	ctx.r10.s64 = ctx.r11.s64 + -8832;
	// ori r9,r9,33998
	ctx.r9.u64 = ctx.r9.u64 | 33998;
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r8,-32492(r7)
	PPC_STORE_U32(ctx.r7.u32 + -32492, ctx.r8.u32);
loc_8217216C:
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bdnz 0x8217216c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217216C;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,19696
	ctx.r8.u64 = ctx.r9.u64 | 19696;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821720F8) {
	__imp__sub_821720F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821721A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821721A4) {
	__imp__sub_821721A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821721A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821721B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32141
	ctx.r29.s64 = -2106392576;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,-32492(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32492);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82172204
	if (!ctx.cr6.eq) goto loc_82172204;
	// lwsync 
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,-14124
	ctx.r11.s64 = ctx.r11.s64 + -14124;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_821721DC:
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
	// bne 0x821721dc
	if (!ctx.cr0.eq) goto loc_821721DC;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,13836
	ctx.r3.s64 = ctx.r7.s64 + 13836;
	// bl 0x8230d720
	ctx.lr = 0x82172204;
	sub_8230D720(ctx, base);
loc_82172204:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-32492(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32492, ctx.r11.u32);
	// bl 0x82171fa0
	ctx.lr = 0x82172214;
	sub_82171FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stb r28,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r28.u8);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r11,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821721A8) {
	__imp__sub_821721A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172240) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6184
	ctx.r11.s64 = ctx.r11.s64 + 6184;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-168
	ctx.r8.s64 = ctx.r11.s64 + -168;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8217227C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// lwz r11,-32492(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -32492);
	// stw r31,-32492(r6)
	PPC_STORE_U32(ctx.r6.u32 + -32492, ctx.r31.u32);
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
}

PPC_WEAK_FUNC(sub_82172240) {
	__imp__sub_82172240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821722A0) {
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
loc_821722BC:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x821722C8;
	sub_823DFA20(ctx, base);
	// cmpwi cr6,r3,92
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 92, ctx.xer);
	// bne cr6,0x821722e8
	if (!ctx.cr6.eq) goto loc_821722E8;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r3,47
	ctx.r3.s64 = 47;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x821722bc
	goto loc_821722BC;
loc_821722E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172304
	if (ctx.cr6.eq) goto loc_82172304;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x821722bc
	goto loc_821722BC;
loc_82172304:
	// lis r11,-2375
	ctx.r11.s64 = -155648000;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,18597
	ctx.r9.u64 = ctx.r11.u64 | 18597;
	// ori r8,r10,34000
	ctx.r8.u64 = ctx.r10.u64 | 34000;
	// mulhwu r7,r31,r9
	ctx.r7.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r6,r7,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1FFFF;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r3,r5,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r5.s64;
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

PPC_WEAK_FUNC(sub_821722A0) {
	__imp__sub_821722A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217233C) {
	__imp__sub_8217233C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172340) {
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
	// addi r11,r3,-9
	ctx.r11.s64 = ctx.r3.s64 + -9;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821723cc
	if (ctx.cr6.gt) goto loc_821723CC;
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9076
	ctx.r12.s64 = ctx.r12.s64 + 9076;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821723F0;
	case 1:
		goto loc_821723CC;
	case 2:
		goto loc_821723CC;
	case 3:
		goto loc_821723CC;
	case 4:
		goto loc_821723CC;
	case 5:
		goto loc_821723CC;
	case 6:
		goto loc_821723CC;
	case 7:
		goto loc_821723CC;
	case 8:
		goto loc_821723CC;
	case 9:
		goto loc_821723CC;
	case 10:
		goto loc_821723CC;
	case 11:
		goto loc_821723CC;
	case 12:
		goto loc_821723CC;
	case 13:
		goto loc_821723CC;
	case 14:
		goto loc_821723CC;
	case 15:
		goto loc_821723F0;
	case 16:
		goto loc_821723F0;
	case 17:
		goto loc_821723C0;
	case 18:
		goto loc_821723F0;
	default:
		return;
	}
	// lwz r16,9200(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9200);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9164(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9164);
	// lwz r16,9200(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9200);
	// lwz r16,9200(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9200);
	// lwz r16,9152(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9152);
	// lwz r16,9200(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 9200);
loc_821723C0:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r5,r8,13904
	ctx.r5.s64 = ctx.r8.s64 + 13904;
	// b 0x821723d4
	goto loc_821723D4;
loc_821723CC:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r5,r8,13896
	ctx.r5.s64 = ctx.r8.s64 + 13896;
loc_821723D4:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4760
	ctx.r9.s64 = ctx.r11.s64 + 4760;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822e8368
	ctx.lr = 0x821723F0;
	sub_822E8368(ctx, base);
loc_821723F0:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82172340) {
	__imp__sub_82172340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82172408;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r23,0
	ctx.r23.s64 = 0;
	// addi r24,r11,19448
	ctx.r24.s64 = ctx.r11.s64 + 19448;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// ori r23,r23,34000
	ctx.r23.u64 = ctx.r23.u64 | 34000;
	// addi r30,r11,-8832
	ctx.r30.s64 = ctx.r11.s64 + -8832;
loc_82172434:
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821724ac
	if (ctx.cr6.eq) goto loc_821724AC;
loc_82172440:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x821724a0
	if (!ctx.cr6.eq) goto loc_821724A0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82172464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821724a0
	if (ctx.cr6.eq) goto loc_821724A0;
	// lhz r11,14(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821724a0
	if (ctx.cr6.eq) goto loc_821724A0;
loc_8217247C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bctrl 
	ctx.lr = 0x82172494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217247c
	if (!ctx.cr6.eq) goto loc_8217247C;
loc_821724A0:
	// lhz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172440
	if (!ctx.cr6.eq) goto loc_82172440;
loc_821724AC:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// bne 0x82172434
	if (!ctx.cr0.eq) goto loc_82172434;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82172400) {
	__imp__sub_82172400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821724C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821724C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-14124
	ctx.r27.s64 = ctx.r11.s64 + -14124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82171b90
	ctx.lr = 0x821724EC;
	sub_82171B90(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82172400
	ctx.lr = 0x82172500;
	sub_82172400(ctx, base);
loc_82172500:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r27
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r27.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r27
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r27.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82172500
	if (!ctx.cr0.eq) goto loc_82172500;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821724C0) {
	__imp__sub_821724C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82172524) {
	__imp__sub_82172524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r10,6856
	ctx.r9.s64 = ctx.r10.s64 + 6856;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82172528) {
	__imp__sub_82172528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82172550) {
	__imp__sub_82172550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82172554) {
	__imp__sub_82172554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172558) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82144528
	ctx.lr = 0x8217257C;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823de1f0
	ctx.lr = 0x8217258C;
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

PPC_WEAK_FUNC(sub_82172558) {
	__imp__sub_82172558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821725A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821725A4) {
	__imp__sub_821725A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821725A8) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,6856
	ctx.r10.s64 = ctx.r11.s64 + 6856;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-336
	ctx.r7.s64 = ctx.r10.s64 + -336;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172600
	if (ctx.cr6.eq) goto loc_82172600;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bctrl 
	ctx.lr = 0x821725F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172640
	if (ctx.cr6.eq) goto loc_82172640;
	// b 0x82172628
	goto loc_82172628;
loc_82172600:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82172628
	if (!ctx.cr6.eq) goto loc_82172628;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172628
	if (ctx.cr6.eq) goto loc_82172628;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82172628:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82144528
	ctx.lr = 0x82172630;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823de1f0
	ctx.lr = 0x82172640;
	sub_823DE1F0(ctx, base);
loc_82172640:
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

PPC_WEAK_FUNC(sub_821725A8) {
	__imp__sub_821725A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82172660;
	__savegprlr_29(ctx, base);
	// stwu r1,-1904(r1)
	ea = -1904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,6520
	ctx.r9.s64 = ctx.r10.s64 + 6520;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217269c
	if (ctx.cr6.eq) goto loc_8217269C;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217269C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217269C:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82144528
	ctx.lr = 0x821726A8;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x821726B8;
	sub_823DE1F0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82144528
	ctx.lr = 0x821726C0;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823de1f0
	ctx.lr = 0x821726D0;
	sub_823DE1F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82144528
	ctx.lr = 0x821726D8;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823de1f0
	ctx.lr = 0x821726E8;
	sub_823DE1F0(ctx, base);
	// addi r1,r1,1904
	ctx.r1.s64 = ctx.r1.s64 + 1904;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82172658) {
	__imp__sub_82172658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821726F0) {
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
	// lis r31,-32138
	ctx.r31.s64 = -2106195968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// blt cr6,0x82172728
	if (ctx.cr6.lt) goto loc_82172728;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,13916
	ctx.r3.s64 = ctx.r11.s64 + 13916;
	// bl 0x8230d720
	ctx.lr = 0x82172724;
	sub_8230D720(ctx, base);
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
loc_82172728:
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,11272
	ctx.r8.s64 = ctx.r10.s64 + 11272;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// stwx r30,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_821726F0) {
	__imp__sub_821726F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82172760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821722a0
	ctx.lr = 0x82172778;
	sub_821722A0(ctx, base);
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,19448
	ctx.r9.s64 = ctx.r11.s64 + 19448;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821727d0
	if (ctx.cr6.eq) goto loc_821727D0;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// addi r29,r10,-8832
	ctx.r29.s64 = ctx.r10.s64 + -8832;
loc_82172798:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x821727c4
	if (!ctx.cr6.eq) goto loc_821727C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821444e8
	ctx.lr = 0x821727B4;
	sub_821444E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822e8058
	ctx.lr = 0x821727BC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821727dc
	if (ctx.cr6.eq) goto loc_821727DC;
loc_821727C4:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172798
	if (!ctx.cr6.eq) goto loc_82172798;
loc_821727D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821727DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82172758) {
	__imp__sub_82172758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821727E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821727F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,6352
	ctx.r9.s64 = ctx.r11.s64 + 6352;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821722a0
	ctx.lr = 0x82172814;
	sub_821722A0(ctx, base);
	// lis r8,-32136
	ctx.r8.s64 = -2106064896;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r8,19448
	ctx.r6.s64 = ctx.r8.s64 + 19448;
	// lhzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217286c
	if (ctx.cr6.eq) goto loc_8217286C;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// addi r30,r10,-8832
	ctx.r30.s64 = ctx.r10.s64 + -8832;
loc_82172834:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82172860
	if (!ctx.cr6.eq) goto loc_82172860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821444e8
	ctx.lr = 0x82172850;
	sub_821444E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822e8058
	ctx.lr = 0x82172858;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172878
	if (ctx.cr6.eq) goto loc_82172878;
loc_82172860:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172834
	if (!ctx.cr6.eq) goto loc_82172834;
loc_8217286C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82172878:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172898
	if (ctx.cr6.eq) goto loc_82172898;
loc_82172884:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172884
	if (!ctx.cr6.eq) goto loc_82172884;
loc_82172898:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821727E8) {
	__imp__sub_821727E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821728A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821728A4) {
	__imp__sub_821728A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821728A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821728B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x821727e8
	ctx.lr = 0x821728C0;
	sub_821727E8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,6520
	ctx.r29.s64 = ctx.r11.s64 + 6520;
	// bne cr6,0x8217294c
	if (!ctx.cr6.eq) goto loc_8217294C;
	// lwsync 
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,-14124
	ctx.r11.s64 = ctx.r11.s64 + -14124;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_821728E4:
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
	// bne 0x821728e4
	if (!ctx.cr0.eq) goto loc_821728E4;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// beq cr6,0x8217293c
	if (ctx.cr6.eq) goto loc_8217293C;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 13, ctx.xer);
	// beq cr6,0x8217293c
	if (ctx.cr6.eq) goto loc_8217293C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4760
	ctx.r9.s64 = ctx.r11.s64 + 4760;
	// addi r8,r29,-168
	ctx.r8.s64 = ctx.r29.s64 + -168;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r7,14040
	ctx.r3.s64 = ctx.r7.s64 + 14040;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bl 0x8230d720
	ctx.lr = 0x82172938;
	sub_8230D720(ctx, base);
	// b 0x8217294c
	goto loc_8217294C;
loc_8217293C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,13936
	ctx.r3.s64 = ctx.r11.s64 + 13936;
	// bl 0x8230d720
	ctx.lr = 0x8217294C;
	sub_8230D720(ctx, base);
loc_8217294C:
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8456);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-8456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8456, ctx.r11.u32);
	// bl 0x821721a8
	ctx.lr = 0x82172968;
	sub_821721A8(ctx, base);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172998
	if (ctx.cr6.eq) goto loc_82172998;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821729b0
	if (ctx.cr6.eq) goto loc_821729B0;
loc_82172998:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82144528
	ctx.lr = 0x821729A0;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823de1f0
	ctx.lr = 0x821729B0;
	sub_823DE1F0(ctx, base);
loc_821729B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821722a0
	ctx.lr = 0x821729BC;
	sub_821722A0(ctx, base);
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,19448
	ctx.r11.s64 = ctx.r11.s64 + 19448;
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r8,r9,-8832
	ctx.r8.s64 = ctx.r9.s64 + -8832;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// sth r6,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
	// sthx r5,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u16);
	// bl 0x822a1d50
	ctx.lr = 0x821729F0;
	sub_822A1D50(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x821729F4;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144508
	ctx.lr = 0x82172A00;
	sub_82144508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821728A8) {
	__imp__sub_821728A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82172A0C) {
	__imp__sub_82172A0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82172A18;
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
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// ble cr6,0x82172a84
	if (!ctx.cr6.gt) goto loc_82172A84;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x82172a60
	if (!ctx.cr6.eq) goto loc_82172A60;
	// bl 0x82144540
	ctx.lr = 0x82172A3C;
	sub_82144540(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,14152
	ctx.r4.s64 = ctx.r11.s64 + 14152;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x82172A58;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82172A60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144540
	ctx.lr = 0x82172A68;
	sub_82144540(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,14152
	ctx.r4.s64 = ctx.r11.s64 + 14152;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x82172A84;
	sub_82280B08(ctx, base);
loc_82172A84:
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// beq cr6,0x82172b18
	if (ctx.cr6.eq) goto loc_82172B18;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 25, ctx.xer);
	// beq cr6,0x82172ac0
	if (ctx.cr6.eq) goto loc_82172AC0;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4760
	ctx.r9.s64 = ctx.r11.s64 + 4760;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r8,14124
	ctx.r4.s64 = ctx.r8.s64 + 14124;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82280b08
	ctx.lr = 0x82172AB8;
	sub_82280B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82172AC0:
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31488);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82172b18
	if (ctx.cr6.eq) goto loc_82172B18;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,31484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31484);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r9,r11,4760
	ctx.r9.s64 = ctx.r11.s64 + 4760;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,14124
	ctx.r4.s64 = ctx.r10.s64 + 14124;
	// lwz r5,100(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// beq cr6,0x82172b10
	if (ctx.cr6.eq) goto loc_82172B10;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x82172B08;
	sub_82280B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82172B10:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280c30
	ctx.lr = 0x82172B18;
	sub_82280C30(ctx, base);
loc_82172B18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82172A10) {
	__imp__sub_82172A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82172B28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821722a0
	ctx.lr = 0x82172B40;
	sub_821722A0(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-14124
	ctx.r27.s64 = ctx.r11.s64 + -14124;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82171b90
	ctx.lr = 0x82172B54;
	sub_82171B90(ctx, base);
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,19448
	ctx.r9.s64 = ctx.r11.s64 + 19448;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172bac
	if (ctx.cr6.eq) goto loc_82172BAC;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// addi r29,r10,-8832
	ctx.r29.s64 = ctx.r10.s64 + -8832;
loc_82172B74:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82172ba0
	if (!ctx.cr6.eq) goto loc_82172BA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821444e8
	ctx.lr = 0x82172B90;
	sub_821444E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822e8058
	ctx.lr = 0x82172B98;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172bb8
	if (ctx.cr6.eq) goto loc_82172BB8;
loc_82172BA0:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172b74
	if (!ctx.cr6.eq) goto loc_82172B74;
loc_82172BAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82172BB8:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82172BC4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r27
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r27.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r27
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r27.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82172bc4
	if (!ctx.cr0.eq) goto loc_82172BC4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82172B20) {
	__imp__sub_82172B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82172BF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,-14124
	ctx.r28.s64 = ctx.r11.s64 + -14124;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82171b90
	ctx.lr = 0x82172C10;
	sub_82171B90(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// ori r11,r11,34000
	ctx.r11.u64 = ctx.r11.u64 | 34000;
	// addi r8,r10,19448
	ctx.r8.s64 = ctx.r10.s64 + 19448;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r9,r11,-8832
	ctx.r9.s64 = ctx.r11.s64 + -8832;
loc_82172C2C:
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172c78
	if (ctx.cr6.eq) goto loc_82172C78;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82172C40:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82172c6c
	if (!ctx.cr6.eq) goto loc_82172C6C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82172c64
	if (ctx.cr6.eq) goto loc_82172C64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_82172C64:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82172C6C:
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172c40
	if (!ctx.cr6.eq) goto loc_82172C40;
loc_82172C78:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bdnz 0x82172c2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82172C2C;
loc_82172C80:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82172c80
	if (!ctx.cr0.eq) goto loc_82172C80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82172BE8) {
	__imp__sub_82172BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lwz r11,-9356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172cc8
	if (ctx.cr6.eq) goto loc_82172CC8;
	// addi r11,r3,-7
	ctx.r11.s64 = ctx.r3.s64 + -7;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82172CC8:
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// beq cr6,0x82172cdc
	if (ctx.cr6.eq) goto loc_82172CDC;
	// cmpwi cr6,r3,29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 29, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82172CDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82172CA8) {
	__imp__sub_82172CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82172CE4) {
	__imp__sub_82172CE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5512
	ctx.r9.s64 = ctx.r11.s64 + 5512;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// subfc r7,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// eqv r6,r8,r11
	ctx.r6.u64 = ~(ctx.r8.u64 ^ ctx.r11.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82172CE8) {
	__imp__sub_82172CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82172D14) {
	__imp__sub_82172D14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5512
	ctx.r9.s64 = ctx.r11.s64 + 5512;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82172d3c
	if (!ctx.cr6.gt) goto loc_82172D3C;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82172D3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82172D18) {
	__imp__sub_82172D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82172D44) {
	__imp__sub_82172D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82172D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82172D50;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821444e8
	ctx.lr = 0x82172D5C;
	sub_821444E8(ctx, base);
	// lwz r25,0(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x821722a0
	ctx.lr = 0x82172D6C;
	sub_821722A0(ctx, base);
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,19448
	ctx.r9.s64 = ctx.r11.s64 + 19448;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,-8832
	ctx.r26.s64 = ctx.r11.s64 + -8832;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172dc8
	if (ctx.cr6.eq) goto loc_82172DC8;
loc_82172D90:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82172dbc
	if (!ctx.cr6.eq) goto loc_82172DBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821444e8
	ctx.lr = 0x82172DAC;
	sub_821444E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822e8058
	ctx.lr = 0x82172DB4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172dc8
	if (ctx.cr6.eq) goto loc_82172DC8;
loc_82172DBC:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82172d90
	if (!ctx.cr6.eq) goto loc_82172D90;
loc_82172DC8:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// beq cr6,0x82172ee8
	if (ctx.cr6.eq) goto loc_82172EE8;
	// addi r27,r11,6184
	ctx.r27.s64 = ctx.r11.s64 + 6184;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r27,-672
	ctx.r9.s64 = ctx.r27.s64 + -672;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r29,r11,-14648
	ctx.r29.s64 = ctx.r11.s64 + -14648;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bgt cr6,0x82172e54
	if (ctx.cr6.gt) goto loc_82172E54;
	// lwsync 
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,-14124
	ctx.r11.s64 = ctx.r11.s64 + -14124;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_82172E08:
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
	// bne 0x82172e08
	if (!ctx.cr0.eq) goto loc_82172E08;
	// lbz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lbz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// mulli r8,r6,124
	ctx.r8.s64 = ctx.r6.s64 * 124;
	// mulli r10,r7,124
	ctx.r10.s64 = ctx.r7.s64 * 124;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// addi r3,r5,14208
	ctx.r3.s64 = ctx.r5.s64 + 14208;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8230d720
	ctx.lr = 0x82172E54;
	sub_8230D720(ctx, base);
loc_82172E54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82172658
	ctx.lr = 0x82172E60;
	sub_82172658(ctx, base);
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r10,r29,68
	ctx.r10.s64 = ctx.r29.s64 + 68;
	// addi r8,r29,68
	ctx.r8.s64 = ctx.r29.s64 + 68;
	// mulli r7,r11,124
	ctx.r7.s64 = ctx.r11.s64 * 124;
	// stb r6,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r6.u8);
	// lbz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r3,r4,124
	ctx.r3.s64 = ctx.r4.s64 * 124;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82172ecc
	if (!ctx.cr6.eq) goto loc_82172ECC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r27,672
	ctx.r10.s64 = ctx.r27.s64 + 672;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172eb8
	if (ctx.cr6.eq) goto loc_82172EB8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82172EB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r27,-168
	ctx.r10.s64 = ctx.r27.s64 + -168;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// b 0x82172f60
	goto loc_82172F60;
loc_82172ECC:
	// subf r10,r26,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r26.s64;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// sth r9,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r9.u16);
	// sth r8,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r8.u16);
	// b 0x82172f80
	goto loc_82172F80;
loc_82172EE8:
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// addi r29,r11,6184
	ctx.r29.s64 = ctx.r11.s64 + 6184;
	// addi r8,r29,336
	ctx.r8.s64 = ctx.r29.s64 + 336;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,-8456(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8456);
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,-8456(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8456, ctx.r10.u32);
	// beq cr6,0x82172f38
	if (ctx.cr6.eq) goto loc_82172F38;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82172F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82172f50
	if (ctx.cr6.eq) goto loc_82172F50;
loc_82172F38:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82144528
	ctx.lr = 0x82172F40;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823de1f0
	ctx.lr = 0x82172F50;
	sub_823DE1F0(ctx, base);
loc_82172F50:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r29,-168
	ctx.r10.s64 = ctx.r29.s64 + -168;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
loc_82172F60:
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82172F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// lwz r11,-32492(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32492);
	// stw r30,-32492(r7)
	PPC_STORE_U32(ctx.r7.u32 + -32492, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82172F80:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// bne cr6,0x82172fa0
	if (!ctx.cr6.eq) goto loc_82172FA0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,7424
	ctx.r4.s64 = ctx.r11.s64 + 7424;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82172400
	ctx.lr = 0x82172FA0;
	sub_82172400(ctx, base);
loc_82172FA0:
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82172ffc
	if (ctx.cr6.eq) goto loc_82172FFC;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lis r8,-32109
	ctx.r8.s64 = -2104295424;
	// ori r7,r11,4
	ctx.r7.u64 = ctx.r11.u64 | 4;
	// lis r6,-32142
	ctx.r6.s64 = -2106458112;
	// stb r7,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r7.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r4,r5,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,-7828(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7828, ctx.r11.u32);
	// stb r4,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r4.u8);
	// stb r10,11270(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11270, ctx.r10.u8);
	// stw r31,26056(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26056, ctx.r31.u32);
	// bl 0x8216e268
	ctx.lr = 0x82172FEC;
	sub_8216E268(ctx, base);
	// lbz r3,9(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
loc_82172FFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82172D48) {
	__imp__sub_82172D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82173004) {
	__imp__sub_82173004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x82173010;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821444e8
	ctx.lr = 0x82173030;
	sub_821444E8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r10,r11,-44
	ctx.r10.s64 = ctx.r11.s64 + -44;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82173050
	if (ctx.cr6.eq) goto loc_82173050;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_82173050:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821722a0
	ctx.lr = 0x8217305C;
	sub_821722A0(ctx, base);
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// rlwinm r20,r3,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r21,r11,19448
	ctx.r21.s64 = ctx.r11.s64 + 19448;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r19,r11,-8832
	ctx.r19.s64 = ctx.r11.s64 + -8832;
	// lhzx r31,r20,r21
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r20.u32 + ctx.r21.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821730b8
	if (ctx.cr6.eq) goto loc_821730B8;
loc_82173080:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r19
	ctx.r26.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lwzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x821730ac
	if (!ctx.cr6.eq) goto loc_821730AC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821444e8
	ctx.lr = 0x8217309C;
	sub_821444E8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822e8058
	ctx.lr = 0x821730A4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821730b8
	if (ctx.cr6.eq) goto loc_821730B8;
loc_821730AC:
	// lhz r31,12(r26)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82173080
	if (!ctx.cr6.eq) goto loc_82173080;
loc_821730B8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821730ec
	if (ctx.cr6.eq) goto loc_821730EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821730d8
	if (!ctx.cr6.eq) goto loc_821730D8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821728a8
	ctx.lr = 0x821730D4;
	sub_821728A8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_821730D8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_821730EC:
	// lis r27,-32117
	ctx.r27.s64 = -2104819712;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lwz r11,-9356(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9356);
	// lis r29,-32126
	ctx.r29.s64 = -2105409536;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r22,r9,6856
	ctx.r22.s64 = ctx.r9.s64 + 6856;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r31,r10,-14648
	ctx.r31.s64 = ctx.r10.s64 + -14648;
	// rlwinm r23,r7,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bne cr6,0x821731c8
	if (!ctx.cr6.eq) goto loc_821731C8;
	// lbz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173158
	if (!ctx.cr6.eq) goto loc_82173158;
	// lbz r11,9(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82173148
	if (!ctx.cr6.eq) goto loc_82173148;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x821731c8
	goto loc_821731C8;
loc_82173148:
	// cmpwi cr6,r25,9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 9, ctx.xer);
	// bne cr6,0x821731c8
	if (!ctx.cr6.eq) goto loc_821731C8;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x821731c8
	goto loc_821731C8;
loc_82173158:
	// addi r11,r22,-1344
	ctx.r11.s64 = ctx.r22.s64 + -1344;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x821731c8
	if (ctx.cr6.gt) goto loc_821731C8;
	// lwsync 
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,-14124
	ctx.r11.s64 = ctx.r11.s64 + -14124;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_8217317C:
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
	// bne 0x8217317c
	if (!ctx.cr0.eq) goto loc_8217317C;
	// lwz r11,8548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8548);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lbz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// mulli r9,r11,124
	ctx.r9.s64 = ctx.r11.s64 * 124;
	// mulli r10,r7,124
	ctx.r10.s64 = ctx.r7.s64 * 124;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r5,14208
	ctx.r3.s64 = ctx.r5.s64 + 14208;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8230d720
	ctx.lr = 0x821731C8;
	sub_8230D720(ctx, base);
loc_821731C8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,8548(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8548);
	// bl 0x821721a8
	ctx.lr = 0x821731D4;
	sub_821721A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82144528
	ctx.lr = 0x821731E0;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823de1f0
	ctx.lr = 0x821731F0;
	sub_823DE1F0(ctx, base);
	// addi r11,r22,-168
	ctx.r11.s64 = ctx.r22.s64 + -168;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173214
	if (ctx.cr6.eq) goto loc_82173214;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82173214:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82173244
	if (ctx.cr6.eq) goto loc_82173244;
	// lhzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r20.u32 + ctx.r21.u32);
	// subf r11,r19,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r19.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// sth r10,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r10.u16);
	// sthx r9,r20,r21
	PPC_STORE_U16(ctx.r20.u32 + ctx.r21.u32, ctx.r9.u16);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_82173244:
	// lbz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82173264
	if (ctx.cr6.eq) goto loc_82173264;
	// lwz r11,-9356(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173288
	if (ctx.cr6.eq) goto loc_82173288;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 7, ctx.xer);
	// beq cr6,0x82173298
	if (ctx.cr6.eq) goto loc_82173298;
loc_82173264:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82173398
	if (ctx.cr6.eq) goto loc_82173398;
	// bl 0x82172d48
	ctx.lr = 0x82173274;
	sub_82172D48(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_82173288:
	// cmpwi cr6,r25,20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 20, ctx.xer);
	// beq cr6,0x82173264
	if (ctx.cr6.eq) goto loc_82173264;
	// cmpwi cr6,r25,29
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 29, ctx.xer);
	// beq cr6,0x82173264
	if (ctx.cr6.eq) goto loc_82173264;
loc_82173298:
	// lwz r11,8548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8548);
	// mulli r28,r10,124
	ctx.r28.s64 = ctx.r10.s64 * 124;
	// mulli r27,r11,124
	ctx.r27.s64 = ctx.r11.s64 * 124;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r8,r27,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82173310
	if (ctx.cr6.eq) goto loc_82173310;
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 6, ctx.xer);
	// blt cr6,0x821732dc
	if (ctx.cr6.lt) goto loc_821732DC;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 7, ctx.xer);
	// bgt cr6,0x821732dc
	if (ctx.cr6.gt) goto loc_821732DC;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82173310
	if (!ctx.cr6.eq) goto loc_82173310;
loc_821732DC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82144540
	ctx.lr = 0x821732E4;
	sub_82144540(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,14272
	ctx.r4.s64 = ctx.r9.s64 + 14272;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// add r7,r28,r10
	ctx.r7.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x82280900
	ctx.lr = 0x8217330C;
	sub_82280900(ctx, base);
	// lwz r11,8548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8548);
loc_82173310:
	// lbz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// mulli r8,r11,124
	ctx.r8.s64 = ctx.r11.s64 * 124;
	// mulli r7,r10,124
	ctx.r7.s64 = ctx.r10.s64 * 124;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// addi r5,r31,68
	ctx.r5.s64 = ctx.r31.s64 + 68;
	// lwzx r4,r8,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82173370
	if (!ctx.cr6.eq) goto loc_82173370;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173354
	if (ctx.cr6.eq) goto loc_82173354;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82173354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82172240
	ctx.lr = 0x8217335C;
	sub_82172240(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_82173370:
	// lhz r10,14(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 14);
	// subf r11,r19,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r19.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// sth r10,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r10.u16);
	// sth r9,14(r26)
	PPC_STORE_U16(ctx.r26.u32 + 14, ctx.r9.u16);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_82173398:
	// bl 0x821726f0
	ctx.lr = 0x8217339C;
	sub_821726F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173008) {
	__imp__sub_82173008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821733B0) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-14124
	ctx.r3.s64 = ctx.r11.s64 + -14124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82171bf8
	ctx.lr = 0x821733D8;
	sub_82171BF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82173008
	ctx.lr = 0x821733E4;
	sub_82173008(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

PPC_WEAK_FUNC(sub_821733B0) {
	__imp__sub_821733B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173400) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,-14124
	ctx.r11.s64 = ctx.r11.s64 + -14124;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_82173410:
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
	// bne 0x82173410
	if (!ctx.cr0.eq) goto loc_82173410;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82173400) {
	__imp__sub_82173400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82173438;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821444e8
	ctx.lr = 0x82173458;
	sub_821444E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821722a0
	ctx.lr = 0x82173460;
	sub_821722A0(ctx, base);
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,19448
	ctx.r9.s64 = ctx.r11.s64 + 19448;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821734ac
	if (ctx.cr6.eq) goto loc_821734AC;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// addi r10,r10,-8832
	ctx.r10.s64 = ctx.r10.s64 + -8832;
loc_82173480:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x821734a0
	if (!ctx.cr6.eq) goto loc_821734A0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821734b8
	if (ctx.cr6.eq) goto loc_821734B8;
loc_821734A0:
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173480
	if (!ctx.cr6.eq) goto loc_82173480;
loc_821734AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821734B8:
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// lbz r9,9(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r10,11270(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11270);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821734dc
	if (ctx.cr6.eq) goto loc_821734DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821734DC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821734ac
	if (ctx.cr6.eq) goto loc_821734AC;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82173500
	if (!ctx.cr6.eq) goto loc_82173500;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// lwz r9,-7828(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7828);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821734ac
	if (ctx.cr6.eq) goto loc_821734AC;
loc_82173500:
	// lbz r9,9(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// li r3,1
	ctx.r3.s64 = 1;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173430) {
	__imp__sub_82173430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173518) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82173534
	if (ctx.cr6.eq) goto loc_82173534;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82173534
	if (ctx.cr6.eq) goto loc_82173534;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82173534:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82173518) {
	__imp__sub_82173518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217353C) {
	__imp__sub_8217353C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82173548;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,19444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19444);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82173570
	if (!ctx.cr6.eq) goto loc_82173570;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,14360
	ctx.r3.s64 = ctx.r11.s64 + 14360;
	// bl 0x8230d720
	ctx.lr = 0x82173570;
	sub_8230D720(ctx, base);
loc_82173570:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82173630
	if (ctx.cr6.eq) goto loc_82173630;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// addi r29,r11,30220
	ctx.r29.s64 = ctx.r11.s64 + 30220;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r29,6420
	ctx.r31.s64 = ctx.r29.s64 + 6420;
	// addi r27,r11,14336
	ctx.r27.s64 = ctx.r11.s64 + 14336;
loc_82173598:
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821735e0
	if (ctx.cr6.eq) goto loc_821735E0;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x821735B0;
	sub_822E7E98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x821735C0;
	sub_82280900(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_821735E0:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82173598
	if (!ctx.cr0.eq) goto loc_82173598;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82173630
	if (ctx.cr6.eq) goto loc_82173630;
	// bl 0x8228bb80
	ctx.lr = 0x821735F8;
	sub_8228BB80(ctx, base);
	// bl 0x8228bad8
	ctx.lr = 0x821735FC;
	sub_8228BAD8(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r8,r11,-7696
	ctx.r8.s64 = ctx.r11.s64 + -7696;
loc_82173604:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82173604
	if (!ctx.cr0.eq) goto loc_82173604;
	// lwsync 
	// lis r7,-32096
	ctx.r7.s64 = -2103443456;
	// stw r28,3228(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3228, ctx.r28.u32);
	// bl 0x8228bae8
	ctx.lr = 0x82173630;
	sub_8228BAE8(ctx, base);
loc_82173630:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173540) {
	__imp__sub_82173540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173638) {
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
	// bl 0x82390a98
	ctx.lr = 0x82173648;
	sub_82390A98(ctx, base);
	// bl 0x8238d5d0
	ctx.lr = 0x8217364C;
	sub_8238D5D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8238d710
	ctx.lr = 0x82173654;
	sub_8238D710(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82173638) {
	__imp__sub_82173638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82173664) {
	__imp__sub_82173664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173668) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-24228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24228, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82173668) {
	__imp__sub_82173668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173678) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821736a4
	if (ctx.cr6.eq) goto loc_821736A4;
	// bl 0x8236b770
	ctx.lr = 0x8217369C;
	sub_8236B770(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821736A4:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82173678) {
	__imp__sub_82173678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821736B8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x821736d4
	if (ctx.cr6.eq) goto loc_821736D4;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x821736d4
	if (ctx.cr6.eq) goto loc_821736D4;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821736d8
	if (!ctx.cr6.eq) goto loc_821736D8;
loc_821736D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821736D8:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// stw r11,17036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17036, ctx.r11.u32);
	// lwz r4,17036(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17036);
	// b 0x822e5020
	sub_822E5020(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821736B8) {
	__imp__sub_821736B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821736E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lbz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8460);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821736E8) {
	__imp__sub_821736E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821736F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821736F4) {
	__imp__sub_821736F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821736F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-8460(r10)
	PPC_STORE_U8(ctx.r10.u32 + -8460, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821736F8) {
	__imp__sub_821736F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82173710;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32136
	ctx.r28.s64 = -2106064896;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,19444(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82173768
	if (!ctx.cr6.gt) goto loc_82173768;
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r30,r9,-14648
	ctx.r30.s64 = ctx.r9.s64 + -14648;
	// addi r27,r10,-14156
	ctx.r27.s64 = ctx.r10.s64 + -14156;
loc_8217373C:
	// lbzx r10,r27,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// mulli r31,r10,124
	ctx.r31.s64 = ctx.r10.s64 * 124;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217375c
	if (ctx.cr6.eq) goto loc_8217375C;
	// bl 0x8236b770
	ctx.lr = 0x82173754;
	sub_8236B770(ctx, base);
	// lwz r11,19444(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19444);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
loc_8217375C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8217373c
	if (ctx.cr6.lt) goto loc_8217373C;
loc_82173768:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173708) {
	__imp__sub_82173708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lbz r10,-8459(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82173788
	if (!ctx.cr6.eq) goto loc_82173788;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82173788:
	// b 0x8228bc88
	sub_8228BC88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173770) {
	__imp__sub_82173770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217378C) {
	__imp__sub_8217378C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173790) {
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
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lbz r10,-8459(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821737c0
	if (!ctx.cr6.eq) goto loc_821737C0;
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
loc_821737C0:
	// bl 0x8228bc88
	ctx.lr = 0x821737C4;
	sub_8228BC88(ctx, base);
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

PPC_WEAK_FUNC(sub_82173790) {
	__imp__sub_82173790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821737E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lwz r3,17036(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17036);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821737E0) {
	__imp__sub_821737E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821737EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821737EC) {
	__imp__sub_821737EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821737F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r3,30220(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30220);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821737F0) {
	__imp__sub_821737F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821737FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821737FC) {
	__imp__sub_821737FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82173808;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r4,271(r1)
	PPC_STORE_U8(ctx.r1.u32 + 271, ctx.r4.u8);
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// ori r9,r10,34000
	ctx.r9.u64 = ctx.r10.u64 | 34000;
	// addi r14,r11,19448
	ctx.r14.s64 = ctx.r11.s64 + 19448;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// lis r24,-32083
	ctx.r24.s64 = -2102591488;
	// lis r15,-32093
	ctx.r15.s64 = -2103246848;
	// lis r22,-32119
	ctx.r22.s64 = -2104950784;
	// lis r21,-32109
	ctx.r21.s64 = -2104295424;
	// lis r26,-32141
	ctx.r26.s64 = -2106392576;
	// lis r20,-32142
	ctx.r20.s64 = -2106458112;
	// addi r25,r11,-8832
	ctx.r25.s64 = ctx.r11.s64 + -8832;
	// addi r18,r10,-14124
	ctx.r18.s64 = ctx.r10.s64 + -14124;
	// addi r28,r9,6520
	ctx.r28.s64 = ctx.r9.s64 + 6520;
	// addi r17,r8,14384
	ctx.r17.s64 = ctx.r8.s64 + 14384;
	// addi r16,r7,4760
	ctx.r16.s64 = ctx.r7.s64 + 4760;
loc_8217386C:
	// lhz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r14.u32 + 0);
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173bc8
	if (ctx.cr6.eq) goto loc_82173BC8;
loc_8217387C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82173b20
	if (!ctx.cr6.eq) goto loc_82173B20;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173a04
	if (!ctx.cr6.eq) goto loc_82173A04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r28,336
	ctx.r10.s64 = ctx.r28.s64 + 336;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821738c4
	if (ctx.cr6.eq) goto loc_821738C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821738C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821738C4:
	// lbz r10,271(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 271);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217390c
	if (!ctx.cr6.eq) goto loc_8217390C;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r28,-504
	ctx.r10.s64 = ctx.r28.s64 + -504;
	// addi r9,r28,-336
	ctx.r9.s64 = ctx.r28.s64 + -336;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821738FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32492);
	// stw r31,-32492(r26)
	PPC_STORE_U32(ctx.r26.u32 + -32492, ctx.r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82173bbc
	goto loc_82173BBC;
loc_8217390C:
	// lwz r11,-8456(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8456);
	// stb r19,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r19.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,-8456(r24)
	PPC_STORE_U32(ctx.r24.u32 + -8456, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821727e8
	ctx.lr = 0x82173928;
	sub_821727E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821444e8
	ctx.lr = 0x82173934;
	sub_821444E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x821739b4
	if (!ctx.cr6.eq) goto loc_821739B4;
	// addi r10,r28,-1008
	ctx.r10.s64 = ctx.r28.s64 + -1008;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8217398c
	if (!ctx.cr6.gt) goto loc_8217398C;
	// cmpwi cr6,r30,17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 17, ctx.xer);
	// beq cr6,0x8217398c
	if (ctx.cr6.eq) goto loc_8217398C;
	// lwsync 
	// addi r8,r18,4
	ctx.r8.s64 = ctx.r18.s64 + 4;
loc_82173964:
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
	// bne 0x82173964
	if (!ctx.cr0.eq) goto loc_82173964;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwzx r4,r11,r16
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// bl 0x8230d720
	ctx.lr = 0x8217398C;
	sub_8230D720(ctx, base);
loc_8217398C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82144528
	ctx.lr = 0x82173994;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823de090
	ctx.lr = 0x821739A4;
	sub_823DE090(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144508
	ctx.lr = 0x821739B0;
	sub_82144508(ctx, base);
	// b 0x82173b20
	goto loc_82173B20;
loc_821739B4:
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821739dc
	if (ctx.cr6.eq) goto loc_821739DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821739D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821739f4
	if (ctx.cr6.eq) goto loc_821739F4;
loc_821739DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82144528
	ctx.lr = 0x821739E4;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823de1f0
	ctx.lr = 0x821739F4;
	sub_823DE1F0(ctx, base);
loc_821739F4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144508
	ctx.lr = 0x82173A00;
	sub_82144508(ctx, base);
	// b 0x82173b20
	goto loc_82173B20;
loc_82173A04:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// sth r9,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r9.u16);
	// lwzx r8,r11,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173a50
	if (ctx.cr6.eq) goto loc_82173A50;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82173a8c
	if (ctx.cr6.eq) goto loc_82173A8C;
	// b 0x82173a74
	goto loc_82173A74;
loc_82173A50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r28,336
	ctx.r10.s64 = ctx.r28.s64 + 336;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173a74
	if (ctx.cr6.eq) goto loc_82173A74;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82173A74:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82144528
	ctx.lr = 0x82173A7C;
	sub_82144528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823de1f0
	ctx.lr = 0x82173A8C;
	sub_823DE1F0(ctx, base);
loc_82173A8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r28,-504
	ctx.r10.s64 = ctx.r28.s64 + -504;
	// addi r9,r28,-336
	ctx.r9.s64 = ctx.r28.s64 + -336;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82173AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32492);
	// stw r30,-32492(r26)
	PPC_STORE_U32(ctx.r26.u32 + -32492, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82173ad0
	if (!ctx.cr6.eq) goto loc_82173AD0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,17844(r15)
	PPC_STORE_U32(ctx.r15.u32 + 17844, ctx.r11.u32);
loc_82173AD0:
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82173b20
	if (ctx.cr6.eq) goto loc_82173B20;
	// lbz r9,9(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,26056(r20)
	PPC_STORE_U32(ctx.r20.u32 + 26056, ctx.r31.u32);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stw r11,-7828(r22)
	PPC_STORE_U32(ctx.r22.u32 + -7828, ctx.r11.u32);
	// stb r10,11270(r21)
	PPC_STORE_U8(ctx.r21.u32 + 11270, ctx.r10.u8);
	// stb r8,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r8.u8);
	// lbz r7,9(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r6,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r6.u8);
	// bl 0x8216e268
	ctx.lr = 0x82173B10;
	sub_8216E268(ctx, base);
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r4,r4,0,30,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r4,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r4.u8);
loc_82173B20:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r29,r31,14
	ctx.r29.s64 = ctx.r31.s64 + 14;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173bb8
	if (ctx.cr6.eq) goto loc_82173BB8;
loc_82173B30:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82173b50
	if (ctx.cr6.eq) goto loc_82173B50;
	// addi r29,r30,14
	ctx.r29.s64 = ctx.r30.s64 + 14;
	// b 0x82173bac
	goto loc_82173BAC;
loc_82173B50:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r28,336
	ctx.r10.s64 = ctx.r28.s64 + 336;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173b74
	if (ctx.cr6.eq) goto loc_82173B74;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82173B74:
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// addi r10,r28,-504
	ctx.r10.s64 = ctx.r28.s64 + -504;
	// addi r9,r28,-336
	ctx.r9.s64 = ctx.r28.s64 + -336;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82173BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32492);
	// stw r30,-32492(r26)
	PPC_STORE_U32(ctx.r26.u32 + -32492, ctx.r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82173BAC:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173b30
	if (!ctx.cr6.eq) goto loc_82173B30;
loc_82173BB8:
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_82173BBC:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217387c
	if (!ctx.cr6.eq) goto loc_8217387C;
loc_82173BC8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r14,r14,2
	ctx.r14.s64 = ctx.r14.s64 + 2;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x8217386c
	if (!ctx.cr0.eq) goto loc_8217386C;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173800) {
	__imp__sub_82173800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82173BE4) {
	__imp__sub_82173BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82173BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173c10
	if (ctx.cr6.eq) goto loc_82173C10;
	// bl 0x8236b770
	ctx.lr = 0x82173C0C;
	sub_8236B770(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82173C10:
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82171b70
	ctx.lr = 0x82173C18;
	sub_82171B70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,14436
	ctx.r4.s64 = ctx.r11.s64 + 14436;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x82173C30;
	sub_82280900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x822e51f0
	ctx.lr = 0x82173C3C;
	sub_822E51F0(ctx, base);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173BE8) {
	__imp__sub_82173BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82173C50;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lis r24,0
	ctx.r24.s64 = 0;
	// addi r11,r11,19448
	ctx.r11.s64 = ctx.r11.s64 + 19448;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r25,r11,-2
	ctx.r25.s64 = ctx.r11.s64 + -2;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// ori r24,r24,34000
	ctx.r24.u64 = ctx.r24.u64 | 34000;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r28,-32083
	ctx.r28.s64 = -2102591488;
	// lis r27,-32141
	ctx.r27.s64 = -2106392576;
	// addi r26,r11,-8832
	ctx.r26.s64 = ctx.r11.s64 + -8832;
	// addi r29,r10,6184
	ctx.r29.s64 = ctx.r10.s64 + 6184;
loc_82173C84:
	// lhz r11,2(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173ce0
	if (ctx.cr6.eq) goto loc_82173CE0;
loc_82173C90:
	// lwz r10,-8456(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8456);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r29,-168
	ctx.r8.s64 = ctx.r29.s64 + -168;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// add r31,r9,r26
	ctx.r31.u64 = ctx.r9.u64 + ctx.r26.u64;
	// stw r11,-8456(r28)
	PPC_STORE_U32(ctx.r28.u32 + -8456, ctx.r11.u32);
	// lwzx r7,r9,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r3,r6,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82173CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,-32492(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32492);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r31,-32492(r27)
	PPC_STORE_U32(ctx.r27.u32 + -32492, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82173c90
	if (!ctx.cr6.eq) goto loc_82173C90;
loc_82173CE0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// sthu r23,2(r25)
	ea = 2 + ctx.r25.u32;
	PPC_STORE_U16(ea, ctx.r23.u16);
	ctx.r25.u32 = ea;
	// bne 0x82173c84
	if (!ctx.cr0.eq) goto loc_82173C84;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173C48) {
	__imp__sub_82173C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82173CF4) {
	__imp__sub_82173CF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173CF8) {
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
	// bl 0x8228ba30
	ctx.lr = 0x82173D0C;
	sub_8228BA30(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r31,r11,-14124
	ctx.r31.s64 = ctx.r11.s64 + -14124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82171bf8
	ctx.lr = 0x82173D1C;
	sub_82171BF8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// ori r11,r11,34000
	ctx.r11.u64 = ctx.r11.u64 | 34000;
	// addi r7,r10,19448
	ctx.r7.s64 = ctx.r10.s64 + 19448;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r9,r11,-8832
	ctx.r9.s64 = ctx.r11.s64 + -8832;
loc_82173D3C:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82173d60
	if (ctx.cr6.eq) goto loc_82173D60;
loc_82173D48:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// stb r8,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173d48
	if (!ctx.cr6.eq) goto loc_82173D48;
loc_82173D60:
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bdnz 0x82173d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82173D3C;
	// lwsync 
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
loc_82173D70:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82173d70
	if (!ctx.cr0.eq) goto loc_82173D70;
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82173CF8) {
	__imp__sub_82173CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82173DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82173dcc
	if (ctx.cr6.eq) goto loc_82173DCC;
	// bl 0x8236b770
	ctx.lr = 0x82173DC8;
	sub_8236B770(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82173DCC:
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82171b70
	ctx.lr = 0x82173DD4;
	sub_82171B70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,14436
	ctx.r4.s64 = ctx.r11.s64 + 14436;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x82173DEC;
	sub_82280900(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x822e51f0
	ctx.lr = 0x82173DF8;
	sub_822E51F0(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// lwz r11,19444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19444);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,19444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19444, ctx.r11.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82173e30
	if (!ctx.cr6.lt) goto loc_82173E30;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r10,-14156
	ctx.r11.s64 = ctx.r10.s64 + -14156;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x823de678
	ctx.lr = 0x82173E30;
	sub_823DE678(ctx, base);
loc_82173E30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173DA0) {
	__imp__sub_82173DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82173E40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82173ea8
	if (ctx.cr6.eq) goto loc_82173EA8;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lwz r11,19444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19444);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82173ea8
	if (ctx.cr0.lt) goto loc_82173EA8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,-14156
	ctx.r11.s64 = ctx.r11.s64 + -14156;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r29,r11,-14648
	ctx.r29.s64 = ctx.r11.s64 + -14648;
loc_82173E78:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mulli r11,r10,124
	ctx.r11.s64 = ctx.r10.s64 * 124;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// and r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 & ctx.r28.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82173e9c
	if (ctx.cr6.eq) goto loc_82173E9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82173da0
	ctx.lr = 0x82173E9C;
	sub_82173DA0(ctx, base);
loc_82173E9C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bge 0x82173e78
	if (!ctx.cr0.lt) goto loc_82173E78;
loc_82173EA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173E38) {
	__imp__sub_82173E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173EB0) {
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
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// lbz r10,11269(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11269);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82173f2c
	if (!ctx.cr6.eq) goto loc_82173F2C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,11269(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11269, ctx.r10.u8);
	// bl 0x822576c8
	ctx.lr = 0x82173EDC;
	sub_822576C8(ctx, base);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lwz r11,-9356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9356);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82173f08
	if (ctx.cr6.eq) goto loc_82173F08;
	// bl 0x82179de8
	ctx.lr = 0x82173EF0;
	sub_82179DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a5548
	ctx.lr = 0x82173EFC;
	sub_823A5548(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82173f08
	if (ctx.cr6.eq) goto loc_82173F08;
	// bl 0x823aee78
	ctx.lr = 0x82173F08;
	sub_823AEE78(ctx, base);
loc_82173F08:
	// bl 0x82390a98
	ctx.lr = 0x82173F0C;
	sub_82390A98(ctx, base);
	// bl 0x8238e9d8
	ctx.lr = 0x82173F10;
	sub_8238E9D8(ctx, base);
	// bl 0x823b1db0
	ctx.lr = 0x82173F14;
	sub_823B1DB0(ctx, base);
	// bl 0x823b1948
	ctx.lr = 0x82173F18;
	sub_823B1948(ctx, base);
	// bl 0x823b1998
	ctx.lr = 0x82173F1C;
	sub_823B1998(ctx, base);
	// bl 0x823b19e8
	ctx.lr = 0x82173F20;
	sub_823B19E8(ctx, base);
	// bl 0x82363c40
	ctx.lr = 0x82173F24;
	sub_82363C40(ctx, base);
	// bl 0x82284cb0
	ctx.lr = 0x82173F28;
	sub_82284CB0(ctx, base);
	// bl 0x821a6d78
	ctx.lr = 0x82173F2C;
	sub_821A6D78(ctx, base);
loc_82173F2C:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82173EB0) {
	__imp__sub_82173EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82173F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82173F48;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2220
	ctx.lr = 0x82173F58;
	sub_822A2220(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// ori r25,r11,34000
	ctx.r25.u64 = ctx.r11.u64 | 34000;
	// addi r24,r10,19448
	ctx.r24.s64 = ctx.r10.s64 + 19448;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// addi r23,r11,-8832
	ctx.r23.s64 = ctx.r11.s64 + -8832;
loc_82173F7C:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82173fac
	if (ctx.cr6.eq) goto loc_82173FAC;
loc_82173F88:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r7,r7,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// bne cr6,0x82173f88
	if (!ctx.cr6.eq) goto loc_82173F88;
loc_82173FAC:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82173f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82173F7C;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lis r30,-32119
	ctx.r30.s64 = -2104950784;
	// lis r29,-32109
	ctx.r29.s64 = -2104295424;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82173FC8:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217400c
	if (ctx.cr6.eq) goto loc_8217400C;
loc_82173FD4:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174000
	if (ctx.cr6.eq) goto loc_82174000;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,26056(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26056, ctx.r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,-7828(r30)
	PPC_STORE_U32(ctx.r30.u32 + -7828, ctx.r11.u32);
	// stb r10,11270(r29)
	PPC_STORE_U8(ctx.r29.u32 + 11270, ctx.r10.u8);
	// bl 0x8216e268
	ctx.lr = 0x82174000;
	sub_8216E268(ctx, base);
loc_82174000:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82173fd4
	if (!ctx.cr6.eq) goto loc_82173FD4;
loc_8217400C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// bne 0x82173fc8
	if (!ctx.cr0.eq) goto loc_82173FC8;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lis r27,-32083
	ctx.r27.s64 = -2102591488;
	// lis r28,-32141
	ctx.r28.s64 = -2106392576;
	// addi r29,r11,6184
	ctx.r29.s64 = ctx.r11.s64 + 6184;
loc_8217402C:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821740e0
	if (ctx.cr6.eq) goto loc_821740E0;
loc_8217403C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217405c
	if (ctx.cr6.eq) goto loc_8217405C;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// b 0x821740d4
	goto loc_821740D4;
loc_8217405C:
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82174094
	if (ctx.cr6.eq) goto loc_82174094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821444e8
	ctx.lr = 0x82174074;
	sub_821444E8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822a1d50
	ctx.lr = 0x8217407C;
	sub_822A1D50(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82174080;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144508
	ctx.lr = 0x8217408C;
	sub_82144508(ctx, base);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// b 0x821740d4
	goto loc_821740D4;
loc_82174094:
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r9,r29,-168
	ctx.r9.s64 = ctx.r29.s64 + -168;
	// lwz r11,-8456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8456);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,-8456(r27)
	PPC_STORE_U32(ctx.r27.u32 + -8456, ctx.r11.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r3,r7,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821740C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32492(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32492);
	// stw r31,-32492(r28)
	PPC_STORE_U32(ctx.r28.u32 + -32492, ctx.r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821740D4:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217403c
	if (!ctx.cr6.eq) goto loc_8217403C;
loc_821740E0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// bne 0x8217402c
	if (!ctx.cr0.eq) goto loc_8217402C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822a25e0
	ctx.lr = 0x821740F4;
	sub_822A25E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82173F40) {
	__imp__sub_82173F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821740FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821740FC) {
	__imp__sub_821740FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82174100) {
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
	// bl 0x823b24f0
	ctx.lr = 0x82174110;
	sub_823B24F0(ctx, base);
	// bl 0x82333168
	ctx.lr = 0x82174114;
	sub_82333168(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82174100) {
	__imp__sub_82174100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82174124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82174124) {
	__imp__sub_82174124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82174128) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r9,-32109
	ctx.r9.s64 = -2104295424;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,19444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19444);
	// stb r11,11269(r9)
	PPC_STORE_U8(ctx.r9.u32 + 11269, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82174168
	if (ctx.cr6.eq) goto loc_82174168;
	// bl 0x82363cd0
	ctx.lr = 0x82174158;
	sub_82363CD0(ctx, base);
	// bl 0x82284d50
	ctx.lr = 0x8217415C;
	sub_82284D50(ctx, base);
	// bl 0x821a84d0
	ctx.lr = 0x82174160;
	sub_821A84D0(ctx, base);
	// bl 0x823b24f0
	ctx.lr = 0x82174164;
	sub_823B24F0(ctx, base);
	// bl 0x82333168
	ctx.lr = 0x82174168;
	sub_82333168(ctx, base);
loc_82174168:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lwz r11,-9356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9356);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82174198
	if (ctx.cr6.eq) goto loc_82174198;
	// bl 0x82390b00
	ctx.lr = 0x8217417C;
	sub_82390B00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8217ad80
	ctx.lr = 0x82174184;
	sub_8217AD80(ctx, base);
	// bl 0x8217ab90
	ctx.lr = 0x82174188;
	sub_8217AB90(ctx, base);
	// bl 0x82179e70
	ctx.lr = 0x8217418C;
	sub_82179E70(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82174198
	if (ctx.cr6.eq) goto loc_82174198;
	// bl 0x823aee78
	ctx.lr = 0x82174198;
	sub_823AEE78(ctx, base);
loc_82174198:
	// bl 0x8228bcc0
	ctx.lr = 0x8217419C;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821741ac
	if (ctx.cr6.eq) goto loc_821741AC;
	// bl 0x82390c00
	ctx.lr = 0x821741AC;
	sub_82390C00(ctx, base);
loc_821741AC:
	// addi r1,r1,96
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

PPC_WEAK_FUNC(sub_82174128) {
	__imp__sub_82174128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821741C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8228ba30
	sub_8228BA30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821741C0) {
	__imp__sub_821741C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821741C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821741C4) {
	__imp__sub_821741C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821741C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821741C8) {
	__imp__sub_821741C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821741D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821741D4) {
	__imp__sub_821741D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821741D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// li r10,88
	ctx.r10.s64 = 88;
	// addi r11,r11,27664
	ctx.r11.s64 = ctx.r11.s64 + 27664;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821741D8) {
	__imp__sub_821741D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821741F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821741F4) {
	__imp__sub_821741F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821741F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// mulli r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 * 88;
	// addi r10,r10,27664
	ctx.r10.s64 = ctx.r10.s64 + 27664;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821741F8) {
	__imp__sub_821741F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82174210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r11,r11,27664
	ctx.r11.s64 = ctx.r11.s64 + 27664;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82174210) {
	__imp__sub_82174210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82174220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// addi r11,r11,19464
	ctx.r11.s64 = ctx.r11.s64 + 19464;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82174220) {
	__imp__sub_82174220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82174230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r11,r11,-7824
	ctx.r11.s64 = ctx.r11.s64 + -7824;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82174230) {
	__imp__sub_82174230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82174248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r11,r11,-7824
	ctx.r11.s64 = ctx.r11.s64 + -7824;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82174248) {
	__imp__sub_82174248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82174258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,8552
	ctx.r11.s64 = ctx.r11.s64 + 8552;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82174258) {
	__imp__sub_82174258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82174268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32109
	ctx.r11.s64 = -2104295424;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r11,r11,19464
	ctx.r11.s64 = ctx.r11.s64 + 19464;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82174268) {
	__imp__sub_82174268(ctx, base);
}

