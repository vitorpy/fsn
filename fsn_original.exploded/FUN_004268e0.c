/**
 * FUN_004268e0
 *
 * Extracted from fsn.c lines 63876-63963
 * Ghidra address: 0x004268e0
 * Category: Other
 */

void FUN_004268e0(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                 undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  uint extraout_var;
  uint extraout_var_00;
  int local_c;
  int local_8;
  int local_4;
  
  *param_5 = 0;
  *param_8 = 0;
  *param_7 = 0;
  (**(code **)(unaff_gp + -0x7924))(&local_4,&local_c,&local_8);
  if (local_c == 0) {
    if (local_4 == 0) {
      if (local_8 == 0) {
        (**(code **)(unaff_gp + -0x79c8))();
      }
      else {
        local_4 = local_8;
        if ((local_8 == *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44)) &&
           (*(int *)(local_8 + 0x28) != 0)) {
          local_4 = *(int *)(local_8 + 0x28);
        }
        (**(code **)(unaff_gp + -0x79c4))(local_4);
        iVar1 = *(int *)(unaff_gp + -0x75dc);
        piVar2 = *(int **)(unaff_gp + -0x7684);
        *param_1 = (float)((double)*(float *)(local_4 + 0x34) -
                          (double)*(float *)(*piVar2 + 0x14) *
                          ((double)*(float *)(local_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) +
                          (double)*(float *)(iVar1 + 0x88)));
        *param_2 = (float)((double)*(float *)(local_4 + 0x38) -
                          (double)*(float *)(*piVar2 + 0x18) *
                          ((double)*(float *)(local_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) +
                          (double)*(float *)(iVar1 + 0x88)));
        *param_3 = *(float *)(iVar1 + 0x84) + *(float *)(local_4 + 0x24);
        *param_4 = (short)*(undefined4 *)(iVar1 + 0x8c);
        *param_6 = 0;
      }
    }
    else {
      (**(code **)(unaff_gp + -0x79c0))();
      (**(code **)(unaff_gp + -0x79c4))(local_4);
      iVar1 = *(int *)(unaff_gp + -0x75dc);
      piVar2 = *(int **)(unaff_gp + -0x7684);
      *param_1 = (float)((double)*(float *)(local_4 + 0x34) -
                        (double)*(float *)(*piVar2 + 0x14) *
                        ((double)*(float *)(local_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) +
                        (double)*(float *)(iVar1 + 0x88)));
      *param_2 = (float)((double)*(float *)(local_4 + 0x38) -
                        (double)*(float *)(*piVar2 + 0x18) *
                        ((double)*(float *)(local_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) +
                        (double)*(float *)(iVar1 + 0x88)));
      *param_3 = *(float *)(iVar1 + 0x84) + *(float *)(local_4 + 0x24);
      *param_4 = (short)*(undefined4 *)(iVar1 + 0x8c);
      *param_6 = 0;
    }
  }
  else {
    (**(code **)(unaff_gp + -0x79c4))(local_4);
    (**(code **)(unaff_gp + -0x79bc))(local_c);
    piVar2 = *(int **)(unaff_gp + -0x7684);
    iVar1 = *(int *)(unaff_gp + -0x75dc);
    *param_1 = (*(float *)(local_4 + 0x34) + *(float *)(local_c + 0x14) * *(float *)(local_4 + 0x58)
               ) - *(float *)(*piVar2 + 0x14) * *(float *)(iVar1 + 0x94);
    *param_2 = (*(float *)(local_4 + 0x38) + *(float *)(local_c + 0x18)) -
               *(float *)(*piVar2 + 0x18) * *(float *)(iVar1 + 0x94);
    if (*(char *)(iVar1 + 5) == '\0') {
      *param_3 = *(float *)(iVar1 + 0x90) + *(float *)(local_4 + 0x24) + *(float *)(local_c + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = *(float *)(iVar1 + 0x90) + *(float *)(local_4 + 0x24) + *(float *)(iVar1 + 0x80);
    }
    *param_6 = 0;
    *param_4 = (short)*(undefined4 *)(iVar1 + 0x98);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
