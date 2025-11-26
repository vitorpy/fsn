/**
 * buffer.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "buffer.h"
#include "fsn_types.h"
#include "fsn_state.h"

void gl_swap_buffers(undefined1 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7898))(1 - **(int **)(unaff_gp + -0x7674),param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void glx_swap_buffers_wrapper(void)

{
  int unaff_gp;
  
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    (**(code **)(unaff_gp + -0x7acc))();
    (**(code **)(unaff_gp + -0x7894))(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void copy_buffer_data(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int unaff_gp;
  
  piVar8 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6adc);
  piVar4 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6ad8);
  iVar1 = *piVar4;
  iVar3 = *piVar8;
  if (iVar3 == iVar1) {
    if (iVar1 == 0) {
      *piVar4 = 8;
      uVar2 = (**(code **)(unaff_gp + -0x7b40))(0x200);
      iVar1 = *(int *)(unaff_gp + -0x7f94);
      puVar9 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) + -0x6ae0);
      *puVar9 = uVar2;
      piVar4 = (int *)(iVar1 + -0x6ad8);
    }
    else {
      iVar3 = *(int *)(unaff_gp + -0x7f94);
      *piVar4 = iVar1 + 8;
      puVar9 = (undefined4 *)(iVar3 + -0x6ae0);
    }
    uVar2 = (**(code **)(unaff_gp + -0x7ea4))(*puVar9,*piVar4 << 6);
    iVar3 = *piVar8;
    *puVar9 = uVar2;
  }
  piVar4 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6ae0);
  puVar9 = (undefined4 *)(*piVar4 + iVar3 * 0x40);
  puVar7 = param_2;
  do {
    puVar6 = puVar7;
    puVar5 = puVar9;
    puVar7 = puVar6 + 3;
    *puVar5 = *puVar6;
    puVar5[1] = puVar6[1];
    puVar5[2] = puVar6[2];
    puVar9 = puVar5 + 3;
  } while (puVar7 != param_2 + 0xc);
  puVar5[3] = *puVar7;
  puVar5[4] = puVar6[4];
  if (param_1 == 0) {
    *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x38) = 0;
  }
  else {
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(param_1);
    uVar2 = (**(code **)(unaff_gp + -0x7b40))(iVar1 + 1);
    uVar2 = (**(code **)(unaff_gp + -0x7ecc))(uVar2,param_1);
    *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x38) = uVar2;
  }
  uVar2 = (**(code **)(unaff_gp + -0x7e90))(param_1);
  *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x3c) = uVar2;
  (**(code **)(unaff_gp + -0x7ea0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec4),
             *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x3c),0);
  iVar1 = *piVar8;
  *piVar8 = iVar1 + 1;
  if (iVar1 + 1 == 1) {
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec0),1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void parse_data_buffer(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  
  if (((param_1 != 0) &&
      (((iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) + 0x25fc))(), param_3 != (int *)0x0 &&
        (iVar2 = *(int *)(iVar1 + 0x24), *param_3 != *(int *)(iVar1 + iVar2 * 4 + 0x3c))) ||
       ((param_4 != 0 && (iVar2 = *(int *)(iVar1 + 0x24), param_4 != iVar2)))))) &&
     ((((param_3 != (int *)0x0 || (*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3)) &&
       ((param_3 == (int *)0x0 || (*param_3 != 3)))) ||
      ((((param_4 != 0 || (iVar2 != 2)) && (param_4 != 2)) ||
       ((*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3 || (iVar2 != 2)))))))) {
    (**(code **)(unaff_gp + -0x7800))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void lookup_buffer_index(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = string_buffer;
  if (0 < buffer_size) {
    do {
      iVar1 = iVar1 + 1;
      if (param_1 == *piVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void write_data_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int unaff_gp;
  undefined4 local_resc;
  undefined1 auStack_4 [4];
  
  local_resc = param_4;
  (**(code **)(unaff_gp + -0x76f0))(auStack_4,&local_resc);
  iVar1 = (**(code **)(unaff_gp + -0x7e00))(param_2,auStack_4,4);
  if (iVar1 == 4) {
    (**(code **)(unaff_gp + -0x7e00))(param_2,param_3,local_resc);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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
