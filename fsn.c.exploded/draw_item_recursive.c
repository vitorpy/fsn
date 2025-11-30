/**
 * draw_item_recursive
 *
 * Extracted from fsn.c lines 43415-43483
 * Category: Graphics
 */

void draw_item_recursive(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  uint in_register_00001090;
  undefined8 uVar8;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (uint)((ulonglong)param_1 >> 0x20);
  if (param_3 != *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
    (**(code **)(unaff_gp + -0x7b48))();
    iVar4 = *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c);
    if (param_3 == *(int *)(iVar4 + 0x28)) {
      (**(code **)(unaff_gp + -0x79f0))
                ((ulonglong)uVar6 << 0x20,
                 (double)*(float *)(iVar4 + 0x3c) +
                 (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xdc));
    }
    else if (param_3 == *(int *)(iVar4 + 0x2c)) {
      (**(code **)(unaff_gp + -0x79f0))
                ((double)-*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe0),
                 (double)*(float *)(iVar4 + 0x3c) +
                 (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xdc));
    }
    else if (param_3 == *(int *)(iVar4 + 0x30)) {
      (**(code **)(unaff_gp + -0x79f0))
                ((double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe0),
                 (double)*(float *)(iVar4 + 0x3c) +
                 (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xdc));
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar1 = 0;
      if (0 < iVar3) {
        piVar2 = *(int **)(iVar4 + 0x18);
        do {
          if (param_3 == *piVar2) {
            fVar5 = *(float *)(*(int *)(unaff_gp + -0x75dc) + 0xd0);
            uVar8 = CONCAT44(uVar6,(float)((double)-fVar5 *
                                           (double)((ulonglong)in_register_00001090 << 0x20) *
                                           (double)(iVar3 + -1) + (double)fVar5 * (double)iVar1));
            (**(code **)(unaff_gp + -0x7b60))(uVar8,iVar3,iVar4,0);
            uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
            (**(code **)(unaff_gp + -0x7b68))(0xfffffc7c,0x7a);
            (**(code **)(unaff_gp + -0x7b60))
                      (CONCAT44(uVar7,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50a4)),
                       CONCAT44(uVar9,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50a0)));
            uVar9 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x509c);
            (**(code **)(unaff_gp + -0x7df0))(uVar9,uVar9);
            break;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar1 < iVar3);
      }
    }
    (**(code **)(unaff_gp + -0x7b28))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
