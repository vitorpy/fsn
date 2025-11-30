/**
 * FUN_0042dc64
 *
 * Extracted from fsn.c lines 68374-68427
 * Ghidra address: 0x0042dc64
 * Category: Other
 */

void FUN_0042dc64(undefined2 *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  
  piVar3 = *(int **)(unaff_gp + -0x7684);
  *param_1 = *(undefined2 *)(*piVar3 + 0xc);
  param_1[1] = *(undefined2 *)(*piVar3 + 0xe);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)*piVar3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(*piVar3 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*piVar3 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(*piVar3 + 0x3c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(*piVar3 + 0x44);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(*piVar3 + 0x48);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(*piVar3 + 0xc50);
  pfVar1 = (float *)*piVar3;
  if (pfVar1[0x11] != 0.0) {
    if (pfVar1[0xf] == 0.0) {
      *(float *)(param_1 + 0xc) = *pfVar1 - *(float *)((int)pfVar1[0x11] + 0x34);
      *(float *)(param_1 + 0xe) =
           *(float *)(*piVar3 + 4) - *(float *)(*(int *)(*piVar3 + 0x44) + 0x38);
      *(float *)(param_1 + 0x10) =
           *(float *)(*piVar3 + 8) - *(float *)(*(int *)(*piVar3 + 0x44) + 0x24);
      pfVar1 = (float *)*piVar3;
      if (pfVar1[0x12] != 0.0) {
        *(float *)(param_1 + 0x14) =
             *pfVar1 - (*(float *)((int)pfVar1[0x11] + 0x34) +
                       *(float *)((int)pfVar1[0x12] + 0x14) * *(float *)((int)pfVar1[0x11] + 0x58));
        iVar2 = *piVar3;
        *(float *)(param_1 + 0x16) =
             *(float *)(iVar2 + 4) -
             (*(float *)(*(int *)(iVar2 + 0x44) + 0x38) + *(float *)(*(int *)(iVar2 + 0x48) + 0x18))
        ;
        iVar2 = *piVar3;
        *(float *)(param_1 + 0x18) =
             *(float *)(iVar2 + 8) -
             (*(float *)(*(int *)(iVar2 + 0x44) + 0x24) + *(float *)(*(int *)(iVar2 + 0x48) + 0x1c))
        ;
      }
    }
    else if (pfVar1[0x12] != 0.0) {
      *(float *)(param_1 + 0x14) = *pfVar1 - *(float *)((int)pfVar1[0x12] + 0x14);
      *(float *)(param_1 + 0x16) =
           *(float *)(*piVar3 + 4) - *(float *)(*(int *)(*piVar3 + 0x48) + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
