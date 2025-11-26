/**
 * sgi_utils.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "sgi_utils.h"
#include "fsn_types.h"
#include "fsn_state.h"

void SG_getDefaultDepth(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) &&
      (((iVar1 = get_bytecode_context(), param_3 != (int *)0x0 &&
        (iVar2 = *(int *)(iVar1 + 0x24), *param_3 != *(int *)(iVar1 + iVar2 * 4 + 0x3c))) ||
       ((param_4 != 0 && (iVar2 = *(int *)(iVar1 + 0x24), param_4 != iVar2)))))) &&
     ((((param_3 != (int *)0x0 || (*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3)) &&
       ((param_3 == (int *)0x0 || (*param_3 != 3)))) ||
      ((((param_4 != 0 || (iVar2 != 2)) && (param_4 != 2)) ||
       ((*(int *)(iVar1 + iVar2 * 4 + 0x3c) != 3 || (iVar2 != 2)))))))) {
    read_data_section();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getMatchingVisual(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = get_bytecode_context(param_1,param_2);
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      do {
        if ((((param_3 == 0) || (param_3 == *(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 4))) &&
            ((param_4 == (int *)0x0 ||
             (*(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0x10) == *param_4)))) &&
           ((param_6 == 0 || (param_6 == *(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0xc))))) {
          if (param_5 == 0) {
            halt_baddata();
          }
          if (param_5 == *(int *)(*(int *)(iVar1 + 0x20) + iVar2 * 4)) {
            halt_baddata();
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x18));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getMaxDepth(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = get_bytecode_context(param_1,param_2);
    iVar4 = 0;
    if (param_4 == 0) {
      param_4 = *(int *)(iVar1 + 0x24);
    }
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      do {
        if ((((param_3 == (int *)0x0) ||
             (*(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0x10) == *param_3)) &&
            (param_4 == *(int *)(*(int *)(iVar1 + 0x20) + iVar2 * 4))) &&
           (iVar3 = *(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0xc), iVar4 < iVar3)) {
          iVar4 = iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x18));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getNormalArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = parse_data_buffer(param_1,param_2,&temp_data_buffer,2);
  iVar2 = read_bytecode_value(param_1,param_2,uVar1,&temp_data_buffer,2);
  if (-1 < iVar2) {
    uVar3 = eval_bytecode_instruction(param_1,param_2);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar3;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getOverlayArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = parse_data_buffer(param_1,param_2,&temp_data_buffer,3);
  iVar2 = read_bytecode_value(param_1,param_2,uVar1,&temp_data_buffer,3);
  if (iVar2 < 0) {
    setup_menu_resources(param_1,param_2,param_3,param_4);
  }
  else {
    uVar3 = eval_bytecode_instruction(param_1,param_2);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar3;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getOverlay2Args(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = read_bytecode_value(param_1,param_2,2,&temp_data_buffer,3);
  if (iVar1 < 0) {
    setup_menu_resources(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = eval_bytecode_instruction(param_1,param_2);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar1;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getOverlay4Args(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = read_bytecode_value(param_1,param_2,4,&temp_data_buffer,3);
  if (iVar1 < 0) {
    process_data_recursive(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = eval_bytecode_instruction(param_1,param_2);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 4;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar1;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getPopupArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = parse_data_buffer(param_1,param_2,&temp_data_buffer,4);
  iVar2 = read_bytecode_value(param_1,param_2,uVar1,&temp_data_buffer,4);
  if (iVar2 < 0) {
    process_data_section(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = eval_bytecode_instruction(param_1,param_2);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(undefined4 *)(param_3 + (iVar3 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getUnderlayArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = parse_data_buffer(param_1,param_2,&temp_data_buffer,1);
  iVar2 = read_bytecode_value(param_1,param_2,uVar1,&temp_data_buffer,1);
  if (iVar2 < 0) {
    process_data_section(param_1,param_2,param_3,param_4);
  }
  else {
    uVar3 = eval_bytecode_instruction(param_1,param_2);
    *(undefined4 *)(param_3 + *param_4 * 8) = 0xf6615ba;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar3;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf6615c3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar4 = *param_4;
    *param_4 = iVar4 + 1;
    *(undefined4 *)(param_3 + (iVar4 + 1) * 8) = 0xf661fe4;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void SG_getVisualArgs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,int param_6,int *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = read_bytecode_value();
  uVar2 = eval_bytecode_instruction(param_1,param_2,uVar1,param_4,param_5);
  *(undefined4 *)(param_6 + *param_7 * 8) = 0xf6615ba;
  *(undefined4 *)(param_6 + *param_7 * 8 + 4) = uVar2;
  iVar3 = *param_7;
  *param_7 = iVar3 + 1;
  *(undefined4 *)(param_6 + (iVar3 + 1) * 8) = 0xf6615c3;
  *(undefined4 *)(param_6 + *param_7 * 8 + 4) = param_3;
  iVar3 = *param_7;
  *param_7 = iVar3 + 1;
  *(undefined4 *)(param_6 + (iVar3 + 1) * 8) = 0xf661fe4;
  *(undefined4 *)(param_6 + *param_7 * 8 + 4) = uVar1;
  *param_7 = *param_7 + 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
