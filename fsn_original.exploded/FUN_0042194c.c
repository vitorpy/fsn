/**
 * FUN_0042194c
 *
 * Extracted from fsn.c lines 61402-61452
 * Ghidra address: 0x0042194c
 * Category: Other
 */

void FUN_0042194c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  double dVar3;
  uint uVar4;
  undefined8 in_f10;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  uVar4 = (uint)((ulonglong)in_f10 >> 0x20);
  if (**(char **)(unaff_gp + -0x76c4) != '\0') {
    (**(code **)(unaff_gp + -0x799c))();
    (**(code **)(unaff_gp + -0x7cfc))(0);
    (**(code **)(unaff_gp + -0x7cf8))();
    (**(code **)(unaff_gp + -0x7cfc))(*(undefined2 *)(*(int *)(unaff_gp + -0x7604) + 2));
    dVar3 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar4 << 0x20);
    (**(code **)(unaff_gp + -0x7e20))
              ((float)((double)*(float *)(param_1 + 0x34) -
                      dVar3 * (double)*(float *)(param_1 + 0x58)),
               (float)((double)*(float *)(param_1 + 0x38) - dVar3));
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      local_c = *(float *)(iVar2 + 0x34) + *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x58);
      local_8 = (float)((double)*(float *)(iVar2 + 0x38) + (double)*(float *)(param_1 + 0x50));
      local_14 = *(undefined4 *)(param_1 + 0x34);
      local_10 = (float)((double)*(float *)(param_1 + 0x38) +
                        (double)-*(float *)(param_1 + 0x3c) /
                        (double)((ulonglong)(double)*(float *)(iVar2 + 0x38) & 0xffffffff00000000));
      (**(code **)(unaff_gp + -0x7b7c))();
      (**(code **)(unaff_gp + -0x7e08))(&local_c);
      (**(code **)(unaff_gp + -0x7e08))(&local_14);
      (**(code **)(unaff_gp + -0x7b94))();
    }
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b78))();
    (**(code **)(unaff_gp + -0x7e10))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x45a0),
               *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x459c));
    uVar1 = (**(code **)(unaff_gp + -0x7a84))(0,param_1);
    (**(code **)(unaff_gp + -0x7da8))(uVar1);
    (**(code **)(unaff_gp + -0x7b28))();
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) + 0xacc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
