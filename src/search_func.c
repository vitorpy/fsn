/**
 * search_func.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "search_func.h"
#include "fsn_types.h"
#include "fsn_state.h"

void bsearch2(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
             uint *param_6)

{
  uint uVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = param_2 + param_4 * (param_3 + -1);
  if (param_2 <= uVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (0 < uStack_14) {
    uStack_10 = uStack_10 + param_4;
  }
  if (uVar1 < uStack_10) {
    uStack_10 = 0;
  }
  *param_6 = uStack_10;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void search_file_entry(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_gp;
  int local_4;
  
  if (param_2[4] == 0) {
    puVar2 = (undefined4 *)param_2[5];
    puVar4 = param_2 + 7;
    if (puVar4 != puVar2) {
      puVar3 = puVar4;
      if (puVar2 < (undefined4 *)param_2[6]) {
        do {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        } while (puVar2 < (undefined4 *)param_2[6]);
      }
      param_2[5] = puVar4;
      param_2[6] = puVar3;
    }
    iVar1 = (**(code **)(unaff_gp + -0x7e14))
                      (*param_2,param_2[6],(int)param_2 + (0xbd4 - param_2[6]));
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        param_2[0x5e7] = 1;
      }
      else {
        iVar5 = param_2[6];
        param_2[6] = iVar5 + iVar1;
        if (((iVar5 + iVar1) - (int)param_2) + -0x1c < 3000) {
          param_2[4] = 0;
        }
        else {
          param_2[4] = 1;
        }
        if ((uint)(param_2[6] - param_2[5]) < 4) {
          param_2[3] = 0;
        }
        else {
          (**(code **)(unaff_gp + -0x76f4))(param_2[5],&local_4);
          if ((uint)(param_2[6] - param_2[5]) < local_4 + 4U) {
            param_2[3] = 0;
          }
          else {
            param_2[3] = 1;
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
