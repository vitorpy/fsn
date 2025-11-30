/**
 * update_context_display
 *
 * Extracted from fsn.c lines 43579-43611
 * Category: Graphics
 */

void update_context_display(int param_1,int param_2)

{
  int iVar1;
  int unaff_gp;
  float fVar2;
  uint uVar3;
  undefined8 in_f18;
  
  uVar3 = (uint)((ulonglong)in_f18 >> 0x20);
  if (param_1 != 0) {
    if (param_1 != *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
      (**(code **)(unaff_gp + -0x7aa4))();
    }
    if (param_2 != 0) {
      iVar1 = *(int *)(unaff_gp + -0x75dc);
      if (*(char *)(iVar1 + 5) == '\0') {
        fVar2 = *(float *)(iVar1 + 0xa0);
      }
      else {
        fVar2 = *(float *)(iVar1 + 0xa0);
      }
      (**(code **)(unaff_gp + -0x7aa8))
                ((double)*(float *)(param_2 + 0x14) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x14) * (double)fVar2,
                 ((double)*(float *)(param_2 + 0x18) +
                 (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar3 << 0x20)) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x18) * (double)fVar2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
