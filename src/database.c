/**
 * database.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "database.h"
#include "fsn_types.h"
#include "fsn_state.h"

void update_database_view(void)

{
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') &&
     (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) != 0)) {
    (**(code **)(unaff_gp + -0x7f2c))();
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void extract_position_data(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,float *param_4,
                 float *param_5,float *param_6,int *param_7,int *param_8,int *param_9,
                 undefined1 *param_10)

{
  int iVar1;
  int unaff_gp;
  
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_10 = *(undefined1 *)(param_1 + 0x1a);
  iVar1 = *(int *)(param_1 + 2);
  if (iVar1 == 0) {
    *param_7 = 0;
    iVar1 = *(int *)(param_1 + 10);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x74) << 3 < 0) {
        *param_8 = iVar1;
        iVar1 = *(int *)(param_1 + 0x12);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x28) << 5 < 0) {
            *param_9 = iVar1;
            *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x34) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x14) *
                       *(float *)(*(int *)(param_1 + 10) + 0x58) + *(float *)(param_1 + 0x14);
            *param_5 = *(float *)(*(int *)(param_1 + 10) + 0x38) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x18) + *(float *)(param_1 + 0x16);
            *param_6 = *(float *)(*(int *)(param_1 + 10) + 0x24) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x1c) + *(float *)(param_1 + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
        }
        *param_9 = 0;
        *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x34) + *(float *)(param_1 + 0xc);
        *param_5 = *(float *)(*(int *)(param_1 + 10) + 0x38) + *(float *)(param_1 + 0xe);
        *param_6 = *(float *)(*(int *)(param_1 + 10) + 0x24) + *(float *)(param_1 + 0x10);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = *(float *)(param_1 + 4);
    *param_5 = *(float *)(param_1 + 6);
    *param_6 = *(float *)(param_1 + 8);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (-1 < *(int *)(iVar1 + 0x74) << 3) {
    *param_7 = 0;
    iVar1 = *(int *)(unaff_gp + -0x75dc);
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = *(float *)(iVar1 + 0x18);
    *param_5 = *(float *)(iVar1 + 0x1c);
    *param_6 = *(float *)(iVar1 + 0x20);
    *param_2 = 0;
    *param_3 = (short)*(undefined4 *)(iVar1 + 0x28);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *param_7 = iVar1;
  *param_8 = iVar1;
  iVar1 = *(int *)(param_1 + 0x12);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x28) << 5 < 0)) {
    *param_9 = iVar1;
    *param_4 = *(float *)(*(int *)(param_1 + 0x12) + 0x14) + *(float *)(param_1 + 0x14);
    *param_5 = *(float *)(*(int *)(param_1 + 0x12) + 0x18) + *(float *)(param_1 + 0x16);
    *param_6 = *(float *)(*(int *)(param_1 + 0x12) + 0x1c) + *(float *)(param_1 + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *param_9 = 0;
  *param_4 = *(float *)(param_1 + 4);
  *param_5 = *(float *)(param_1 + 6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void format_data_output(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = get_bytecode_context(param_1,param_2);
    iVar5 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      piVar6 = *(int **)(iVar1 + 0x20);
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        if (param_3 == *piVar6) {
          iVar2 = *(int *)(iVar1 + 0x14) + iVar5 * 0x28;
          if (param_4 == *(int *)(iVar2 + 0xc)) {
            if ((param_5 != (int *)0x0) && (*(int *)(iVar2 + 0x10) == *param_5)) {
              halt_baddata();
            }
            iVar4 = *(int *)(iVar1 + 0x18);
            iVar3 = *(int *)(iVar1 + *(int *)(iVar1 + 0x24) * 4 + 0x3c);
            if (((iVar7 != iVar3) && (iVar2 = *(int *)(iVar2 + 0x10), iVar8 = iVar2, iVar7 == 3)) &&
               (iVar8 = iVar7, iVar2 == iVar3)) {
              iVar8 = iVar2;
            }
          }
          else {
            iVar4 = *(int *)(iVar1 + 0x18);
          }
        }
        else {
          iVar4 = *(int *)(iVar1 + 0x18);
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
        iVar7 = iVar8;
      } while (iVar5 < iVar4);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_database_node(int param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7b34))(*(undefined4 *)(param_1 + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_database_entry(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int unaff_gp;
  
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fdc) + -0x5218))();
  if (iVar1 != -1) {
    *param_3 = iVar1;
    uVar2 = (**(code **)(unaff_gp + -0x7c20))(param_2);
    if (uVar2 < 0x401) {
      (**(code **)(unaff_gp + -0x771c))(param_1,param_2,param_3,param_4,0x4d);
    }
    else {
      (**(code **)(unaff_gp + -0x7c38))(1,*(int *)(unaff_gp + -0x7f94) + -0x617c);
      **(undefined4 **)(unaff_gp + -0x7f70) = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
