/**
 * FUN_00427870
 *
 * Extracted from fsn.c lines 64457-64493
 * Ghidra address: 0x00427870
 * Category: Other
 */

void FUN_00427870(int param_1,int param_2)

{
  int unaff_gp;
  double dVar1;
  ulonglong in_f4;
  float fVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      dVar1 = (double)*(float *)(param_1 + 0x3c) / (double)(in_f4 & 0xffffffff00000000) +
              (double)*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x88);
      (**(code **)(unaff_gp + -0x7aa8) /* -> FUN_00410264 */)
                ((double)*(float *)(param_1 + 0x34) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x14) * dVar1,
                 (double)*(float *)(param_1 + 0x38) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x18) * dVar1);
    }
    else {
      if (*(char *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 5) == '\0') {
        fVar2 = *(float *)(param_2 + 0x14);
      }
      else {
        fVar2 = *(float *)(param_2 + 0x14);
      }
      dVar1 = (double)*(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x94);
      (**(code **)(unaff_gp + -0x7aa8) /* -> FUN_00410264 */)
                (((double)*(float *)(param_1 + 0x34) +
                 (double)fVar2 * (double)*(float *)(param_1 + 0x58)) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x14) * dVar1,
                 ((double)*(float *)(param_1 + 0x38) + (double)*(float *)(param_2 + 0x18)) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x18) * dVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
