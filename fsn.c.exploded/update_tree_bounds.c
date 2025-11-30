/**
 * update_tree_bounds
 *
 * Extracted from fsn.c lines 49430-49486
 * Category: Other
 */

void update_tree_bounds(int param_1)

{
  int iVar1;
  int unaff_gp;
  double dVar2;
  float fVar3;
  uint in_register_00001080;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (param_1 != *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44)) {
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))
              (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    (**(code **)(unaff_gp + -0x7b6c))(*(undefined4 *)(param_1 + 0x58));
    if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
      (**(code **)(unaff_gp + -0x7b6c))
                (*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x3c));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    fVar3 = (float)((double)-*(float *)(param_1 + 0x3c) /
                   (double)((ulonglong)in_register_00001080 << 0x20));
    (**(code **)(unaff_gp + -0x7df0))(fVar3,fVar3);
    (**(code **)(unaff_gp + -0x7b28))();
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 0) {
      local_c = *(float *)(iVar1 + 0x34) + *(float *)(param_1 + 0x4c);
      local_10 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x447c);
      dVar2 = (double)*(float *)(iVar1 + 0x38) + (double)*(float *)(param_1 + 0x50);
      local_8 = (float)dVar2;
      local_18 = *(undefined4 *)(param_1 + 0x34);
      local_14 = (float)((double)*(float *)(param_1 + 0x38) -
                        (double)*(float *)(param_1 + 0x3c) /
                        (double)((ulonglong)dVar2 & 0xffffffff00000000));
      local_4 = local_10;
      (**(code **)(unaff_gp + -0x7b7c))();
      (**(code **)(unaff_gp + -0x7dc0))(&local_c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_18);
      (**(code **)(unaff_gp + -0x7b94))();
      (**(code **)(unaff_gp + -0x7cfc))(0);
      (**(code **)(unaff_gp + -0x7b48))();
      (**(code **)(unaff_gp + -0x7b60))(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38))
      ;
      (**(code **)(unaff_gp + -0x7b6c))(*(float *)(iVar1 + 0x3c) * *(float *)(iVar1 + 0x58));
      (**(code **)(unaff_gp + -0x794c))(0,0,0x1f);
      (**(code **)(unaff_gp + -0x7b28))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
