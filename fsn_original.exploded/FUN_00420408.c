/**
 * FUN_00420408
 *
 * Extracted from fsn.c lines 60678-60761
 * Ghidra address: 0x00420408
 * Category: Other
 */

void FUN_00420408(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_gp;
  double dVar7;
  uint unaff_000010a0;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(int *)(param_1 + 0x74) << 3 < 0) {
    (**(code **)(unaff_gp + -0x7e1c))((int)*(short *)(param_1 + 0x5e));
    if (*(int *)(param_1 + 0x74) << 2 < 0) {
      uVar3 = *(undefined4 *)(**(int **)(unaff_gp + -0x768c) + 0x10);
    }
    else {
      uVar3 = *(undefined4 *)**(undefined4 **)(unaff_gp + -0x768c);
    }
    (**(code **)(unaff_gp + -0x7b9c))(uVar3);
    if (*(int *)(param_1 + 0x74) << 0xd < 0) {
      dVar7 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)unaff_000010a0 << 0x20);
      (**(code **)(unaff_gp + -0x7df0))
                ((float)((double)*(float *)(param_1 + 0x34) -
                        dVar7 * (double)*(float *)(param_1 + 0x58)),
                 (float)((double)*(float *)(param_1 + 0x38) - dVar7));
      iVar2 = *(int *)(param_1 + 0x14);
    }
    else {
      dVar7 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)unaff_000010a0 << 0x20);
      (**(code **)(unaff_gp + -0x7e20))
                ((float)((double)*(float *)(param_1 + 0x34) -
                        dVar7 * (double)*(float *)(param_1 + 0x58)),
                 (float)((double)*(float *)(param_1 + 0x38) - dVar7));
      iVar2 = *(int *)(param_1 + 0x14);
    }
    iVar5 = 0;
    if (0 < iVar2) {
      iVar6 = *(int *)(unaff_gp + -0x75dc);
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x18) + iVar5);
        iVar1 = *(int *)(iVar4 + 0x74);
        if (iVar1 << 3 < 0) {
          if (param_2 != '\0') {
            (**(code **)(unaff_gp + -0x7990))(iVar4,1);
            (**(code **)(unaff_gp + -0x7e1c))((int)*(short *)(iVar4 + 0x5e));
            iVar1 = *(int *)(iVar4 + 0x74);
          }
          if (iVar1 << 2 < 0) {
            uVar3 = *(undefined4 *)(iVar6 + 0x178);
          }
          else {
            uVar3 = *(undefined4 *)(iVar6 + 0x17c);
          }
          (**(code **)(unaff_gp + -0x7b9c))(uVar3);
          local_10 = *(float *)(param_1 + 0x34) +
                     *(float *)(iVar4 + 0x4c) * *(float *)(param_1 + 0x58);
          local_c = *(float *)(param_1 + 0x38) + *(float *)(iVar4 + 0x50);
          local_18 = *(undefined4 *)(iVar4 + 0x34);
          local_14 = (float)((double)*(float *)(iVar4 + 0x38) +
                            (double)-*(float *)(iVar4 + 0x3c) /
                            (double)((ulonglong)unaff_000010a0 << 0x20));
          (**(code **)(unaff_gp + -0x7b7c))();
          (**(code **)(unaff_gp + -0x7e08))(&local_10);
          (**(code **)(unaff_gp + -0x7e08))(&local_18);
          (**(code **)(unaff_gp + -0x7b94))();
          if (param_2 == '\0') {
            (**(code **)(unaff_gp + -0x7990))(iVar4,0);
          }
          iVar2 = *(int *)(param_1 + 0x14);
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < iVar2 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
