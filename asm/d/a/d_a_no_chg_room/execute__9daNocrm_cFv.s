lbl_801452DC:
/* 801452DC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801452E0  7C 08 02 A6 */	mflr r0
/* 801452E4  90 01 00 44 */	stw r0, 0x44(r1)
/* 801452E8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801452EC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801452F0  7C 7F 1B 78 */	mr r31, r3
/* 801452F4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801452F8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801452FC  83 C3 5D AC */	lwz r30, 0x5dac(r3)
/* 80145300  C0 1E 04 D0 */	lfs f0, 0x4d0(r30)
/* 80145304  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80145308  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 8014530C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80145310  C0 1E 04 D8 */	lfs f0, 0x4d8(r30)
/* 80145314  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80145318  7F C3 F3 78 */	mr r3, r30
/* 8014531C  81 9E 06 28 */	lwz r12, 0x628(r30)
/* 80145320  81 8C 01 88 */	lwz r12, 0x188(r12)
/* 80145324  7D 89 03 A6 */	mtctr r12
/* 80145328  4E 80 04 21 */	bctrl 
/* 8014532C  28 03 00 00 */	cmplwi r3, 0
/* 80145330  41 82 00 1C */	beq lbl_8014534C
/* 80145334  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80145338  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8014533C  80 63 5D B8 */	lwz r3, 0x5db8(r3)
/* 80145340  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 80145344  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80145348  48 00 00 44 */	b lbl_8014538C
lbl_8014534C:
/* 8014534C  7F C3 F3 78 */	mr r3, r30
/* 80145350  81 9E 06 28 */	lwz r12, 0x628(r30)
/* 80145354  81 8C 01 98 */	lwz r12, 0x198(r12)
/* 80145358  7D 89 03 A6 */	mtctr r12
/* 8014535C  4E 80 04 21 */	bctrl 
/* 80145360  28 03 00 00 */	cmplwi r3, 0
/* 80145364  41 82 00 28 */	beq lbl_8014538C
/* 80145368  7F C3 F3 78 */	mr r3, r30
/* 8014536C  81 9E 06 28 */	lwz r12, 0x628(r30)
/* 80145370  81 8C 01 9C */	lwz r12, 0x19c(r12)
/* 80145374  7D 89 03 A6 */	mtctr r12
/* 80145378  4E 80 04 21 */	bctrl 
/* 8014537C  28 03 00 00 */	cmplwi r3, 0
/* 80145380  41 82 00 0C */	beq lbl_8014538C
/* 80145384  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 80145388  D0 01 00 24 */	stfs f0, 0x24(r1)
lbl_8014538C:
/* 8014538C  38 7F 05 98 */	addi r3, r31, 0x598
/* 80145390  38 81 00 20 */	addi r4, r1, 0x20
/* 80145394  38 A1 00 14 */	addi r5, r1, 0x14
/* 80145398  48 20 19 D5 */	bl PSMTXMultVec
/* 8014539C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801453A0  C0 02 99 C8 */	lfs f0, lit_3762(r2)
/* 801453A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801453A8  41 80 00 40 */	blt lbl_801453E8
/* 801453AC  C0 1F 04 F0 */	lfs f0, 0x4f0(r31)
/* 801453B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801453B4  41 81 00 34 */	bgt lbl_801453E8
/* 801453B8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801453BC  FC 00 02 10 */	fabs f0, f0
/* 801453C0  FC 20 00 18 */	frsp f1, f0
/* 801453C4  C0 1F 04 EC */	lfs f0, 0x4ec(r31)
/* 801453C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801453CC  41 81 00 1C */	bgt lbl_801453E8
/* 801453D0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801453D4  FC 00 02 10 */	fabs f0, f0
/* 801453D8  FC 20 00 18 */	frsp f1, f0
/* 801453DC  C0 1F 04 F4 */	lfs f0, 0x4f4(r31)
/* 801453E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801453E4  40 81 00 E4 */	ble lbl_801454C8
lbl_801453E8:
/* 801453E8  88 1F 04 99 */	lbz r0, 0x499(r31)
/* 801453EC  7C 00 07 75 */	extsb. r0, r0
/* 801453F0  41 82 00 34 */	beq lbl_80145424
/* 801453F4  88 1F 05 CA */	lbz r0, 0x5ca(r31)
/* 801453F8  28 00 00 00 */	cmplwi r0, 0
/* 801453FC  41 82 00 28 */	beq lbl_80145424
/* 80145400  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80145404  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80145408  85 83 4E 20 */	lwzu r12, 0x4e20(r3)
/* 8014540C  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 80145410  7D 89 03 A6 */	mtctr r12
/* 80145414  4E 80 04 21 */	bctrl 
/* 80145418  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8014541C  54 00 87 7F */	rlwinm. r0, r0, 0x10, 0x1d, 0x1f
/* 80145420  41 82 00 0C */	beq lbl_8014542C
lbl_80145424:
/* 80145424  38 60 00 01 */	li r3, 1
/* 80145428  48 00 00 C8 */	b lbl_801454F0
lbl_8014542C:
/* 8014542C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80145430  C0 02 99 C8 */	lfs f0, lit_3762(r2)
/* 80145434  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145438  40 80 00 0C */	bge lbl_80145444
/* 8014543C  38 80 00 00 */	li r4, 0
/* 80145440  48 00 00 08 */	b lbl_80145448
lbl_80145444:
/* 80145444  38 80 00 01 */	li r4, 1
lbl_80145448:
/* 80145448  7F E3 FB 78 */	mr r3, r31
/* 8014544C  48 00 00 BD */	bl getRoomNo__9daNocrm_cFi
/* 80145450  4B FF FD 9D */	bl isLoadRoom__Fi
/* 80145454  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80145458  41 82 00 14 */	beq lbl_8014546C
/* 8014545C  38 00 00 00 */	li r0, 0
/* 80145460  98 1F 05 CA */	stb r0, 0x5ca(r31)
/* 80145464  38 60 00 01 */	li r3, 1
/* 80145468  48 00 00 88 */	b lbl_801454F0
lbl_8014546C:
/* 8014546C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80145470  C0 02 99 C8 */	lfs f0, lit_3762(r2)
/* 80145474  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145478  40 80 00 10 */	bge lbl_80145488
/* 8014547C  C0 1F 04 F4 */	lfs f0, 0x4f4(r31)
/* 80145480  FC 00 00 50 */	fneg f0, f0
/* 80145484  48 00 00 08 */	b lbl_8014548C
lbl_80145488:
/* 80145488  C0 1F 04 F4 */	lfs f0, 0x4f4(r31)
lbl_8014548C:
/* 8014548C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80145490  38 7F 05 68 */	addi r3, r31, 0x568
/* 80145494  38 81 00 14 */	addi r4, r1, 0x14
/* 80145498  38 A1 00 08 */	addi r5, r1, 8
/* 8014549C  48 20 18 D1 */	bl PSMTXMultVec
/* 801454A0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801454A4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801454A8  80 63 5D B4 */	lwz r3, 0x5db4(r3)
/* 801454AC  38 81 00 08 */	addi r4, r1, 8
/* 801454B0  A8 BE 04 E6 */	lha r5, 0x4e6(r30)
/* 801454B4  38 C0 00 01 */	li r6, 1
/* 801454B8  81 83 06 28 */	lwz r12, 0x628(r3)
/* 801454BC  81 8C 01 54 */	lwz r12, 0x154(r12)
/* 801454C0  7D 89 03 A6 */	mtctr r12
/* 801454C4  4E 80 04 21 */	bctrl 
lbl_801454C8:
/* 801454C8  88 1F 04 99 */	lbz r0, 0x499(r31)
/* 801454CC  7C 00 07 75 */	extsb. r0, r0
/* 801454D0  40 82 00 10 */	bne lbl_801454E0
/* 801454D4  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 801454D8  98 0D 80 70 */	stb r0, data_804505F0(r13)
/* 801454DC  48 00 00 10 */	b lbl_801454EC
lbl_801454E0:
/* 801454E0  38 00 00 01 */	li r0, 1
/* 801454E4  98 0D 87 E8 */	stb r0, mNoChangeRoom__20dStage_roomControl_c(r13)
/* 801454E8  98 1F 05 CA */	stb r0, 0x5ca(r31)
lbl_801454EC:
/* 801454EC  38 60 00 01 */	li r3, 1
lbl_801454F0:
/* 801454F0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801454F4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801454F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801454FC  7C 08 03 A6 */	mtlr r0
/* 80145500  38 21 00 40 */	addi r1, r1, 0x40
/* 80145504  4E 80 00 20 */	blr 
