/**
 * update_display
 *
 * Extracted from fsn.c lines 39332-39423
 * Category: Graphics
 */

void update_display(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int unaff_gp;
  float fVar4;
  undefined4 uVar5;
  uint in_register_00001010;
  double dVar6;
  double in_f6;
  float fVar7;
  undefined4 in_f11;
  
  (**(code **)(unaff_gp + -0x7848))();
  (**(code **)(unaff_gp + -0x7f20))(*(int *)(unaff_gp + -0x7f94) + 0x66ac);
  piVar1 = *(int **)(unaff_gp + -0x76dc);
  **(undefined4 **)(unaff_gp + -0x75cc) = 0;
  iVar2 = *piVar1;
  **(undefined4 **)(unaff_gp + -0x75c8) = 0;
  **(undefined4 **)(unaff_gp + -0x75d4) = 0;
  **(undefined4 **)(unaff_gp + -0x75d0) = 0;
  if (iVar2 == 0) {
    in_f6 = (double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),0x3f800000);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x66b0) = 0x3f800000;
  }
  else {
    fVar4 = (float)(*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x1774))
                             (*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x184));
    *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x66b0) =
         *(float *)(*(int *)(unaff_gp + -0x75dc) + 0x68) / fVar4;
  }
  piVar1 = *(int **)(unaff_gp + -0x76d4);
  *(undefined4 *)(*piVar1 + 0x2c) = 0;
  *(undefined4 *)(*piVar1 + 0x30) = 0;
  (**(code **)(unaff_gp + -0x7a70))(*piVar1);
  uVar5 = (undefined4)((ulonglong)in_f6 >> 0x20);
  if (**(int **)(unaff_gp + -0x76dc) == 0) {
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x66b0) = 0x3f800000;
  }
  else {
    iVar2 = **(int **)(unaff_gp + -0x76d8);
    if (iVar2 == 0) {
      *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x66b4) = 0x3f800000;
    }
    else if ((iVar2 == 1) || (iVar2 != 2)) {
      fVar4 = (float)(*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x1774))
                               (*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x18c));
      fVar7 = *(float *)(*(int *)(unaff_gp + -0x75dc) + 0x6c);
      in_f6 = (double)CONCAT44(uVar5,fVar7);
      *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x66b4) = fVar7 / fVar4;
    }
    else {
      fVar4 = (float)(*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x1774))
                               (*(undefined4 *)(*piVar1 + 0x20));
      in_f6 = (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0x6c);
      *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x66b4) = (float)(in_f6 / (double)fVar4);
    }
  }
  dVar6 = (double)*(float *)(*piVar1 + 0x3c);
  fVar4 = (float)(**(code **)(unaff_gp + -0x7b64))
                           (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x104),
                            (float)((dVar6 / (double)((ulonglong)in_f6 & 0xffffffff00000000)) /
                                   (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0x108)));
  (**(code **)(unaff_gp + -0x7a6c))
            (*piVar1,param_2,0,0,in_f11,
             SUB84((double)((ulonglong)dVar6 & 0xffffffff00000000) / (double)fVar4,0));
  (**(code **)(unaff_gp + -0x7a68))(*piVar1,param_2,0,0);
  uVar5 = (**(code **)(unaff_gp + -0x7b64))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x104),
                     **(float **)(unaff_gp + -0x75c8) /
                     *(float *)(*(int *)(unaff_gp + -0x75dc) + 0x108));
  **(undefined4 **)(unaff_gp + -0x75b8) = uVar5;
  pcVar3 = *(code **)(unaff_gp + -0x783c);
  **(float **)(unaff_gp + -0x75d0) =
       (float)((double)**(float **)(unaff_gp + -0x75d0) +
              (double)((ulonglong)in_register_00001010 << 0x20));
  **(float **)(unaff_gp + -0x75d4) =
       (float)((double)**(float **)(unaff_gp + -0x75d4) -
              (double)((ulonglong)in_register_00001010 << 0x20));
  dVar6 = (double)**(float **)(unaff_gp + -0x75c8);
  **(float **)(unaff_gp + -0x75c8) =
       (float)(dVar6 + (double)((ulonglong)in_register_00001010 << 0x20));
  **(float **)(unaff_gp + -0x75cc) =
       (float)((double)-*(float *)(*piVar1 + 0x3c) / (double)((ulonglong)dVar6 & 0xffffffff00000000)
              - (double)((ulonglong)in_register_00001010 << 0x20));
  (*pcVar3)();
  (**(code **)(unaff_gp + -0x7978))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
