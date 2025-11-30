/**
 * render_tree_level
 *
 * Extracted from fsn.c lines 48734-48796
 * Category: Graphics
 */

void render_tree_level(undefined8 param_1,undefined8 param_2,int param_3)

{
  int unaff_gp;
  uint extraout_var;
  undefined4 uVar1;
  uint uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  uVar1 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (*(int *)(param_3 + 0x74) << 3 < 0) {
    (**(code **)(unaff_gp + -0x7e1c))(2);
    (**(code **)(unaff_gp + -0x7db0))((int)*(short *)(param_3 + 0x5e));
    if (*(short *)(param_3 + 0x76) < 0) {
      dVar3 = (double)**(float **)(unaff_gp + -0x75c8) * (double)((ulonglong)extraout_var << 0x20);
      (**(code **)(unaff_gp + -0x78f8))(0,dVar3);
      uVar1 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    (**(code **)(unaff_gp + -0x7b48))();
    uVar4 = CONCAT44(uVar1,*(undefined4 *)(param_3 + 0x38));
    (**(code **)(unaff_gp + -0x7b60))(*(undefined4 *)(param_3 + 0x34),uVar4);
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    (**(code **)(unaff_gp + -0x7b6c))(*(undefined4 *)(param_3 + 0x58));
    (**(code **)(unaff_gp + -0x7b48))();
    uVar4 = CONCAT44(uVar1,*(undefined4 *)(param_3 + 0x3c));
    (**(code **)(unaff_gp + -0x7b6c))(*(undefined4 *)(param_3 + 0x3c),uVar4);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    (**(code **)(unaff_gp + -0x794c))(0,0,0x1f);
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7b60))(0,(ulonglong)uVar2 << 0x20);
    (**(code **)(unaff_gp + -0x7940))(param_3,1,7,0x1f);
    (**(code **)(unaff_gp + -0x7de8))();
    (**(code **)(unaff_gp + -0x7b28))();
    if (*(int *)(param_3 + 0x28) != 0) {
      (**(code **)(unaff_gp + -0x7e1c))(1);
      (**(code **)(unaff_gp + -0x7db0))((int)*(short *)(param_3 + 0x5e));
      local_c = *(float *)(*(int *)(param_3 + 0x28) + 0x34) + *(float *)(param_3 + 0x4c);
      local_10 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x4480);
      local_8 = (float)((double)*(float *)(*(int *)(param_3 + 0x28) + 0x38) +
                       (double)*(float *)(param_3 + 0x50));
      local_18 = *(undefined4 *)(param_3 + 0x34);
      local_14 = (float)((double)*(float *)(param_3 + 0x38) -
                        (double)*(float *)(param_3 + 0x3c) /
                        (double)((ulonglong)(double)*(float *)(param_3 + 0x50) & 0xffffffff00000000)
                        );
      local_4 = local_10;
      (**(code **)(unaff_gp + -0x7b7c))();
      (**(code **)(unaff_gp + -0x7dc0))(&local_c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_18);
      (**(code **)(unaff_gp + -0x7b94))();
      (**(code **)(unaff_gp + -0x7de8))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
