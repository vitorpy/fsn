/**
 * get_selection_params
 *
 * Extracted from fsn.c lines 43101-43168
 * Category: Input
 */

void get_selection_params(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  uint in_register_00001020;
  int local_40c;
  short local_3f0 [500];
  undefined4 local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar5 = -1;
  local_40c = -1;
  (**(code **)(unaff_gp + -0x7b48))();
  (**(code **)(unaff_gp + -0x7de0))();
  (**(code **)(unaff_gp + -0x7dd0))(10,10);
  (**(code **)(unaff_gp + -0x7dd4))(local_3f0,500);
  (**(code **)(unaff_gp + -0x7adc))();
  (**(code **)(unaff_gp + -0x7b6c))
            ((float)((double)((ulonglong)in_register_00001020 << 0x20) /
                    (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x34)));
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe),0x78);
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xc),0x7a);
  (**(code **)(unaff_gp + -0x7b60))
            (-*(float *)**(int **)(unaff_gp + -0x7684),-((float *)**(int **)(unaff_gp + -0x7684))[1]
            );
  (**(code **)(unaff_gp + -0x79fc))(*(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x3c),1);
  iVar1 = (**(code **)(unaff_gp + -0x7dd8))(local_3f0);
  (**(code **)(unaff_gp + -0x7b28))();
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (int)local_3f0[iVar3];
      if ((iVar2 == 1) && (iVar5 < 0)) {
        iVar5 = (int)local_3f0[iVar3 + 1];
      }
      iVar4 = iVar4 + 1;
      if (iVar2 == 2) {
        local_40c = (int)local_3f0[iVar3 + 2];
        iVar5 = (int)local_3f0[iVar3 + 1];
        break;
      }
      iVar3 = iVar3 + 1 + iVar2;
    } while (iVar4 != iVar1);
  }
  if ((-1 < iVar5) && (local_4 = (**(code **)(unaff_gp + -0x7a7c))(iVar5), -1 < local_40c)) {
    if (local_4 == *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
      local_8 = *(undefined4 *)(*(int *)(local_4 + 0x10) + local_40c * 4);
    }
    else {
      (**(code **)(unaff_gp + -0x7c08))
                (*(int *)(unaff_gp + -0x7f68) + 0x20,*(int *)(unaff_gp + -0x7fa4) + -0x5164);
      local_4 = 0;
    }
  }
  *param_1 = local_4;
  *param_2 = local_8;
  *param_3 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
