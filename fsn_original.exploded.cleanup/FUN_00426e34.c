/**
 * FUN_00426e34
 *
 * Extracted from fsn.c lines 64062-64084
 * Ghidra address: 0x00426e34
 * Category: Other
 */

void FUN_00426e34(int param_1,float *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  uint in_register_00001000;
  
  piVar1 = *(int **)(unaff_gp + -0x7684) /* -> curcontext */;
  iVar2 = *(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */;
  *param_2 = (float)((double)*(float *)(param_1 + 0x34) -
                    (double)*(float *)(*piVar1 + 0x14) *
                    ((double)*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)in_register_00001000 << 0x20) +
                    (double)*(float *)(iVar2 + 0x88)));
  *param_3 = (float)((double)*(float *)(param_1 + 0x38) -
                    (double)*(float *)(*piVar1 + 0x18) *
                    ((double)*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)in_register_00001000 << 0x20) +
                    (double)*(float *)(iVar2 + 0x88)));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
