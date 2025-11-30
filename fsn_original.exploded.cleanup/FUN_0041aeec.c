/**
 * FUN_0041aeec
 *
 * Extracted from fsn.c lines 57558-57590
 * Ghidra address: 0x0041aeec
 * Category: Other
 */

void FUN_0041aeec(int param_1,int param_2)

{
  int iVar1;
  int unaff_gp;
  float fVar2;
  uint uVar3;
  undefined8 in_f18;
  
  uVar3 = (uint)((ulonglong)in_f18 >> 0x20);
  if (param_1 != 0) {
    if (param_1 != *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x3c)) {
      (**(code **)(unaff_gp + -0x7aa4) /* -> do_warp */)();
    }
    if (param_2 != 0) {
      iVar1 = *(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */;
      if (*(char *)(iVar1 + 5) == '\0') {
        fVar2 = *(float *)(iVar1 + 0xa0);
      }
      else {
        fVar2 = *(float *)(iVar1 + 0xa0);
      }
      (**(code **)(unaff_gp + -0x7aa8) /* -> FUN_00410264 */)
                ((double)*(float *)(param_2 + 0x14) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x14) * (double)fVar2,
                 ((double)*(float *)(param_2 + 0x18) +
                 (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar3 << 0x20)) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x18) * (double)fVar2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
