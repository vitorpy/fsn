/**
 * FUN_0042631c
 *
 * Extracted from fsn.c lines 63660-63789
 * Ghidra address: 0x0042631c
 * Category: Other
 */

void FUN_0042631c(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_gp;
  undefined4 uVar10;
  uint uVar11;
  undefined8 in_f4;
  int local_7fc;
  short local_7dc [500];
  short local_3f4 [500];
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar11 = (uint)((ulonglong)in_f4 >> 0x20);
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  iVar9 = -1;
  iVar8 = -1;
  local_7fc = -1;
  (**(code **)(unaff_gp + -0x7b48))();
  (**(code **)(unaff_gp + -0x7de0))();
  (**(code **)(unaff_gp + -0x7dd0))(5,5);
  (**(code **)(unaff_gp + -0x7dd4))(local_3f4,500);
  (**(code **)(unaff_gp + -0x7adc))();
  piVar5 = *(int **)(unaff_gp + -0x7684);
  (**(code **)(unaff_gp + -0x7b6c))
            ((float)((double)((ulonglong)uVar11 << 0x20) / (double)*(float *)(*piVar5 + 0x34)));
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar5 + 0xe),0x78);
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar5 + 0xc),0x7a);
  iVar2 = *piVar5;
  iVar6 = *(int *)(unaff_gp + -0x75dc);
  uVar10 = (**(code **)(unaff_gp + -0x7b64))
                     (*(undefined4 *)(iVar6 + 0x104),
                      (*(float *)(iVar2 + 4) -
                      *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 8)) /
                      *(float *)(iVar6 + 0x108));
  (**(code **)(unaff_gp + -0x7b6c))(uVar10);
  (**(code **)(unaff_gp + -0x7b60))(-*(float *)*piVar5,-((float *)*piVar5)[1]);
  (**(code **)(unaff_gp + -0x7938))(1);
  iVar2 = (**(code **)(unaff_gp + -0x7dd8))(local_3f4);
  (**(code **)(unaff_gp + -0x7b28))();
  (**(code **)(unaff_gp + -0x7b48))();
  (**(code **)(unaff_gp + -0x7de0))();
  (**(code **)(unaff_gp + -0x7dd4))(local_7dc,500);
  uVar11 = 0;
  (**(code **)(unaff_gp + -0x7adc))();
  (**(code **)(unaff_gp + -0x7b6c))
            ((float)((double)((ulonglong)uVar11 << 0x20) / (double)*(float *)(*piVar5 + 0x34)));
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar5 + 0xe),0x78);
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar5 + 0xc),0x7a);
  iVar3 = *piVar5;
  uVar10 = (**(code **)(unaff_gp + -0x7b64))
                     (*(undefined4 *)(iVar6 + 0x104),
                      (*(float *)(iVar3 + 4) -
                      *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 8)) /
                      *(float *)(iVar6 + 0x108));
  (**(code **)(unaff_gp + -0x7b6c))(uVar10,0x3f800000);
  (**(code **)(unaff_gp + -0x7b60))(-*(float *)*piVar5,-((float *)*piVar5)[1]);
  iVar3 = 0;
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      sVar1 = local_3f4[iVar3];
      if (sVar1 == 1) {
        uVar10 = (**(code **)(unaff_gp + -0x7a7c))((int)local_3f4[iVar3 + 1]);
        (**(code **)(unaff_gp + -0x7928))(uVar10);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 1 + (int)sVar1;
    } while (iVar6 != iVar2);
  }
  iVar6 = 0;
  iVar3 = 0;
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + 0x6244))(**(undefined4 **)(unaff_gp + -0x76d4));
  iVar2 = (**(code **)(unaff_gp + -0x7dd8))(local_7dc);
  (**(code **)(unaff_gp + -0x7b28))();
  if (0 < iVar2) {
    do {
      iVar7 = (int)local_7dc[iVar3];
      psVar4 = local_7dc + iVar3 + 1;
      if (iVar7 == 2) {
        if (*psVar4 == 1) {
          if (iVar9 < 0) {
            iVar9 = (int)local_7dc[iVar3 + 2];
          }
        }
        else if ((*psVar4 == 2) && (iVar8 < 0)) {
          iVar8 = (int)local_7dc[iVar3 + 2];
        }
      }
      if ((iVar7 == 3) && (*psVar4 = 2, *psVar4 != 0)) {
        local_7fc = (int)local_7dc[iVar3 + 3];
        iVar8 = (int)local_7dc[iVar3 + 2];
        break;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 1 + iVar7;
    } while (iVar6 != iVar2);
  }
  if (local_7fc < 0) {
    if (iVar8 < 0) {
      if (-1 < iVar9) {
        local_c = (**(code **)(unaff_gp + -0x7a7c))(iVar9);
      }
    }
    else {
      local_4 = (**(code **)(unaff_gp + -0x7a7c))(iVar8);
    }
  }
  else {
    local_4 = (**(code **)(unaff_gp + -0x7a7c))(iVar8);
    local_8 = *(undefined4 *)(*(int *)(local_4 + 0x10) + local_7fc * 4);
  }
  *param_1 = local_4;
  *param_2 = local_8;
  *param_3 = local_c;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
