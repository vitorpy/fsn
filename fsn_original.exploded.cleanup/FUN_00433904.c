/**
 * FUN_00433904
 *
 * Extracted from fsn.c lines 71809-71877
 * Ghidra address: 0x00433904
 * Category: Other
 */

void FUN_00433904(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int unaff_gp;
  
  puVar2 = (undefined4 *)(**(code **)(unaff_gp + -0x7c48) /* -> EXTERNAL_0x0fabf188 */)(0xcb0);
  iVar5 = 0;
  puVar9 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x6990);
  iVar7 = 4;
  iVar8 = 8;
  iVar6 = 0xc;
  iVar4 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x705;
  puVar3 = puVar2;
  do {
    puVar3[1] = 0;
    puVar3[2] = iVar4;
    puVar3[3] = 4;
    puVar3[5] = iVar4;
    puVar3[4] = iVar5;
    iVar5 = iVar5 + 0x10;
    *puVar3 = *puVar9;
    uVar10 = puVar9[1];
    puVar3[0xb] = iVar7;
    puVar3[0xc] = iVar4;
    puVar3[10] = 4;
    puVar3[9] = iVar4;
    puVar3[8] = 0;
    puVar3[6] = uVar10;
    iVar7 = iVar7 + 0x10;
    puVar3[7] = puVar9[2];
    uVar10 = puVar9[3];
    puVar3[0x12] = iVar8;
    puVar3[0x13] = iVar4;
    puVar3[0x11] = 4;
    puVar3[0x10] = iVar4;
    puVar3[0xf] = 0;
    puVar3[0xd] = uVar10;
    iVar8 = iVar8 + 0x10;
    puVar3[0xe] = puVar9[4];
    uVar10 = puVar9[5];
    puVar3[0x19] = iVar6;
    puVar3[0x1a] = iVar4;
    puVar3[0x18] = 4;
    puVar3[0x17] = iVar4;
    puVar3[0x16] = 0;
    puVar3[0x14] = uVar10;
    iVar6 = iVar6 + 0x10;
    puVar3[0x15] = puVar9[6];
    puVar1 = puVar9 + 7;
    puVar9 = puVar9 + 8;
    puVar3[0x1b] = *puVar1;
    puVar3 = puVar3 + 0x1c;
  } while (iVar6 != 0x1dc);
  (**(code **)(unaff_gp + -0x7af4) /* -> EXTERNAL_0x0f66cf70 */)
            (param_1,*(undefined4 *)(unaff_gp + -0x7598) /* -> _imsgs */,param_2,param_3,puVar2,0x74,0,0);
  (**(code **)(unaff_gp + -0x7f40) /* -> EXTERNAL_0x0fabf650 */)(puVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
