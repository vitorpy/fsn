/**
 * FUN_00418c30
 *
 * Extracted from fsn.c lines 56326-56389
 * Ghidra address: 0x00418c30
 * Category: Other
 */

void FUN_00418c30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int unaff_gp;
  undefined8 in_f4;
  double dVar2;
  uint uVar3;
  double dVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint unaff_000010a0;
  
  uVar7 = (undefined4)((ulonglong)in_f4 >> 0x20);
  if ((int)(param_1[0x1d] << 3) < 0) {
    (**(code **)(unaff_gp + -0x7e1c))((int)*(short *)((int)param_1 + 0x5e));
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))
              ((float)(double)CONCAT44(unaff_000010a0,param_4),
               (float)(double)CONCAT44(uVar7,param_6));
    (**(code **)(unaff_gp + -0x7b68))((int)-*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe),0x78);
    (**(code **)(unaff_gp + -0x7b60))(0,*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0xe8));
    (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x170));
    dVar4 = (double)-*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe4);
    fVar5 = (float)(dVar4 / (double)((ulonglong)unaff_000010a0 << 0x20));
    (**(code **)(unaff_gp + -0x7e20))(fVar5,fVar5);
    uVar3 = (uint)((ulonglong)dVar4 >> 0x20);
    (**(code **)(unaff_gp + -0x7b48))();
    dVar4 = (double)-*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe4);
    dVar2 = dVar4 / (double)((ulonglong)unaff_000010a0 << 0x20);
    (**(code **)(unaff_gp + -0x7b60))
              ((float)((double)(int)param_1[1] *
                      (double)CONCAT44(uVar3,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x5124)
                                      )),(float)(dVar2 - (double)((ulonglong)uVar3 << 0x20)));
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
    uVar3 = (uint)((ulonglong)dVar4 >> 0x20);
    uVar6 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x5120);
    (**(code **)(unaff_gp + -0x7b6c))(uVar6,uVar6);
    (**(code **)(unaff_gp + -0x7a08))(*param_1);
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7b48))();
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(param_2);
    dVar4 = (double)iVar1;
    if (iVar1 < 0) {
      dVar4 = dVar4 + (double)((ulonglong)uVar3 << 0x20);
    }
    (**(code **)(unaff_gp + -0x7b60))
              ((float)(dVar4 * (double)CONCAT44(uVar7,*(undefined4 *)
                                                       (*(int *)(unaff_gp + -0x7fa4) + -0x5114))),
               (float)((double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe4) /
                       (double)((ulonglong)unaff_000010a0 << 0x20) +
                      (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),
                                       *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x510c))));
    uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x5108);
    (**(code **)(unaff_gp + -0x7b6c))(uVar7,uVar7);
    (**(code **)(unaff_gp + -0x7a08))(param_2);
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7b28))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
