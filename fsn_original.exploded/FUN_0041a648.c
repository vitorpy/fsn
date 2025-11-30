/**
 * FUN_0041a648
 *
 * Extracted from fsn.c lines 57215-57279
 * Ghidra address: 0x0041a648
 * Category: Other
 */

void FUN_0041a648(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                 undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  float fVar3;
  undefined1 auStack_c [4];
  int local_8;
  int local_4;
  
  *param_5 = 0;
  *param_7 = 0;
  *param_8 = 0;
  (**(code **)(unaff_gp + -0x79f8))(&local_4,&local_8,auStack_c);
  if (local_4 == 0) {
    *param_7 = 1;
    *param_6 = 0;
  }
  else if (local_8 == 0) {
    if (local_4 == *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
      (**(code **)(unaff_gp + -0x79c0))();
      iVar1 = *(int *)(unaff_gp + -0x75dc);
      piVar2 = *(int **)(unaff_gp + -0x7684);
      *param_1 = *(float *)(iVar1 + 0x2c);
      *param_2 = *(float *)(iVar1 + 0x30);
      *param_3 = *(float *)(iVar1 + 0x34);
      *param_4 = (short)*(undefined4 *)(iVar1 + 0x38);
      *param_6 = *(int *)(*piVar2 + 0x3c);
    }
    else {
      *param_7 = 1;
      *param_6 = local_4;
    }
  }
  else if (local_4 == *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
    (**(code **)(unaff_gp + -0x79bc))(local_8);
    piVar2 = *(int **)(unaff_gp + -0x7684);
    iVar1 = *(int *)(unaff_gp + -0x75dc);
    fVar3 = *(float *)(local_8 + 0x14);
    *param_1 = (float)((double)fVar3 -
                      (double)*(float *)(*piVar2 + 0x14) * (double)*(float *)(iVar1 + 0xa0));
    *param_2 = (float)(((double)*(float *)(local_8 + 0x18) +
                       (double)*(float *)(local_4 + 0x3c) /
                       (double)((ulonglong)(double)fVar3 & 0xffffffff00000000)) -
                      (double)*(float *)(*piVar2 + 0x18) * (double)*(float *)(iVar1 + 0xa0));
    if (*(char *)(iVar1 + 5) == '\0') {
      *param_3 = *(float *)(iVar1 + 0x9c) + *(float *)(local_8 + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = *(float *)(iVar1 + 0x90) + *(float *)(iVar1 + 0x80);
    }
    *param_4 = (short)*(undefined4 *)(iVar1 + 0xa4);
    *param_6 = *(int *)(*piVar2 + 0x3c);
    *param_8 = 1;
  }
  else {
    (**(code **)(unaff_gp + -0x7c08))
              (*(int *)(unaff_gp + -0x7f68) + 0x20,*(int *)(unaff_gp + -0x7fa4) + -0x5148);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
