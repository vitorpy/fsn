/**
 * FUN_0041be40
 *
 * Extracted from fsn.c lines 58113-58214
 * Ghidra address: 0x0041be40
 * Category: Other
 */

void FUN_0041be40(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int unaff_gp;
  
  uVar4 = *(undefined4 *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  uVar1 = (**(code **)(unaff_gp + -0x7c24) /* -> EXTERNAL_0x0e35c67c */)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4e0c,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  pcVar8 = *(code **)(unaff_gp + -0x7c24) /* -> EXTERNAL_0x0e35c67c */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b30) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4e00,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  pcVar8 = *(code **)(unaff_gp + -0x7c24) /* -> EXTERNAL_0x0e35c67c */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b34) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4df0,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  pcVar8 = *(code **)(unaff_gp + -0x7c24) /* -> EXTERNAL_0x0e35c67c */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b38) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4de0,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  pcVar8 = *(code **)(unaff_gp + -0x7c24) /* -> EXTERNAL_0x0e35c67c */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b3c) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4dd4,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  pcVar8 = *(code **)(unaff_gp + -0x7c24) /* -> EXTERNAL_0x0e35c67c */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b40) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4dc4,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  pcVar8 = *(code **)(unaff_gp + -0x7c24) /* -> EXTERNAL_0x0e35c67c */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b44) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4db4,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  pcVar8 = *(code **)(unaff_gp + -0x7c24) /* -> EXTERNAL_0x0e35c67c */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b48) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4da8,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  pcVar8 = *(code **)(unaff_gp + -0x7c24) /* -> EXTERNAL_0x0e35c67c */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b4c) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4d98,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  pcVar8 = *(code **)(unaff_gp + -0x7c84) /* -> EXTERNAL_0x0e292660 */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b50) = uVar1;
  uVar1 = (*pcVar8)(param_1,iVar2 + -0x4d88,param_2,param_3);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  iVar2 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  iVar6 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *param_2 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x27b5;
  param_2[1] = 1;
  param_2[2] = iVar2 + 0x1d63;
  param_2[3] = 1;
  param_2[4] = iVar6 + 0x2375;
  param_2[5] = 1;
  uVar4 = (**(code **)(unaff_gp + -0x7de4) /* -> EXTERNAL_0x0e37bb60 */)(uVar1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4d78,param_2,3);
  piVar5 = *(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */;
  iVar2 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  iVar6 = *(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */;
  *(undefined4 *)(*piVar5 + 0x1c) = uVar4;
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (*(undefined4 *)(*piVar5 + 0x1c),iVar2 + 0x293d,iVar6 + -0x4e0,
             *(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (*(undefined4 *)(*piVar5 + 0x1c),*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,
             *(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x340,*(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c74) /* -> EXTERNAL_0x0f67c284 */)
            (*(undefined4 *)(*piVar5 + 0x1c),0x10,0,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x5e8,
             *(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c74) /* -> EXTERNAL_0x0f67c284 */)
            (*(undefined4 *)(*piVar5 + 0x1c),0x20,0,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x524,0);
  (**(code **)(unaff_gp + -0x7c74) /* -> EXTERNAL_0x0f67c284 */)
            (*(undefined4 *)(*piVar5 + 0x1c),4,0,*(undefined4 *)(unaff_gp + -0x787c) /* -> myContext */,
             *(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*piVar5 + 0x1c));
  iVar2 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  *param_2 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x27b5;
  param_2[1] = 3;
  param_2[2] = iVar2 + 0x2841;
  iVar7 = *(int *)(*piVar5 + 0x1c);
  iVar2 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  iVar6 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  piVar3 = *(int **)(unaff_gp + -0x75f8) /* -> blankXmString */;
  param_2[4] = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d63;
  param_2[5] = 1;
  param_2[6] = iVar2 + 0x2375;
  param_2[7] = 1;
  param_2[8] = iVar6 + 0x1d4d;
  param_2[3] = iVar7;
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  param_2[9] = *piVar3;
  uVar1 = (**(code **)(unaff_gp + -0x7c28) /* -> EXTERNAL_0x0e29e814 */)(uVar1,iVar2 + -0x4d6c,param_2,5);
  *(undefined4 *)(*piVar5 + 0x20) = uVar1;
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*piVar5 + 0x20));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
