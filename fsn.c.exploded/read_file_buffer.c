/**
 * read_file_buffer
 *
 * Extracted from fsn.c lines 62803-62868
 * Category: Filesystem
 */

void read_file_buffer(int *param_1,int param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int unaff_gp;
  int local_14;
  int local_10 [4];
  
  for (piVar4 = (int *)*param_1; (piVar4 != (int *)0x0 && (param_2 != *piVar4));
      piVar4 = (int *)piVar4[1]) {
  }
  if (piVar4 == (int *)0x0) {
    **(undefined4 **)(unaff_gp + -0x7f70) = 2;
  }
  else {
    if (piVar4[3] == 0) {
      (**(code **)(unaff_gp + -0x76fc))(param_1,piVar4);
    }
    if ((uint)(piVar4[6] - piVar4[5]) < 4) {
      local_14 = 0;
      iVar2 = piVar4[5];
    }
    else {
      (**(code **)(unaff_gp + -0x76f4))(piVar4[5],&local_14);
      iVar2 = piVar4[5];
    }
    if ((uint)(piVar4[6] - iVar2) < local_14 + 4U) {
      **(undefined4 **)(unaff_gp + -0x7f70) = 0x43;
    }
    else {
      iVar1 = 0;
      if (local_14 < param_4) {
        param_4 = local_14;
      }
      piVar4[5] = iVar2 + 4;
      if (0 < param_4) {
        do {
          puVar3 = (undefined1 *)(piVar4[5] + iVar1);
          iVar1 = iVar1 + 1;
          *param_3 = *puVar3;
          param_3 = param_3 + 1;
        } while (iVar1 < param_4);
      }
      iVar2 = piVar4[5] + local_14;
      piVar4[5] = iVar2;
      if ((uint)(piVar4[6] - iVar2) < 4) {
        piVar4[3] = 0;
      }
      else {
        (**(code **)(unaff_gp + -0x76f4))(iVar2,local_10);
        if ((uint)(piVar4[6] - piVar4[5]) < local_10[0] + 4U) {
          piVar4[3] = 0;
        }
        else {
          piVar4[3] = 1;
        }
      }
      piVar4[4] = 0;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
