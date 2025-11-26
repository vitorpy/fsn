/**
 * bytecode.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "bytecode.h"
#include "fsn_types.h"
#include "fsn_state.h"

undefined4 eval_bytecode_instruction(int param_1, int param_2, int param_3, int param_4, int param_5)

{
  /* Note: Extra params may be unused - decompilation inconsistency */
  (void)param_4; (void)param_5;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int unaff_gp;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 * 0x50 + 0x28);
    }
    param_2 = param_2 * 0x50;
    if (param_3 != *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 0x28)) {
      iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) + 0x25fc))(param_1);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x18)) {
        piVar3 = *(int **)(iVar1 + 0x14);
        do {
          if (param_3 == *piVar3) {
            if (*(int *)(*(int *)(iVar1 + 0x1c) + iVar4 * 4) != 0) {
              halt_baddata();
            }
            uVar2 = (**(code **)(unaff_gp + -0x7d48))
                              (param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 + 8),
                               param_3,0);
            *(undefined4 *)(*(int *)(iVar1 + 0x1c) + iVar4 * 4) = uVar2;
            halt_baddata();
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 10;
        } while (iVar4 < *(int *)(iVar1 + 0x18));
      }
      (**(code **)(unaff_gp + -0x7d48))
                (param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 + 8),param_3,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
  return 0;  /* Unreachable - added to satisfy return type */
}

void read_bytecode_value(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    halt_baddata();
  }
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x84);
  }
  iVar1 = get_bytecode_context(0, 0);
  if (param_5 == 0) {
    param_5 = *(int *)(iVar1 + 0x24);
  }
  if (param_3 == 0) {
    if (((param_4 == (int *)0x0) ||
        (*param_4 == *(int *)(iVar1 + *(int *)(iVar1 + 0x24) * 4 + 0x3c))) &&
       (param_5 == *(int *)(iVar1 + 0x24))) {
      param_3 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 * 0x50 + 0x24);
      iVar4 = *(int *)(iVar1 + 0x18);
      goto LAB_00432460;
    }
    param_3 = read_data_section(param_1,param_2,param_4);
  }
  iVar4 = *(int *)(iVar1 + 0x18);
LAB_00432460:
  iVar2 = 0;
  if (0 < iVar4) {
    iVar3 = *(int *)(iVar1 + 0x14);
    do {
      if (((param_3 == *(int *)(iVar3 + 0xc)) &&
          ((param_4 == (int *)0x0 || (*(int *)(iVar3 + 0x10) == *param_4)))) &&
         (param_5 == *(int *)(*(int *)(iVar1 + 0x20) + iVar2 * 4))) {
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < iVar4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_bytecode_context(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_40 [4];
  int local_3c;
  int local_38 [2];
  undefined1 auStack_30 [8];
  int local_28;
  undefined4 *local_8;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    if (active_item_list != (undefined4 *)0x0) {
      bVar1 = active_item_list != (undefined4 *)0x0;
      puVar2 = active_item_list;
      while (bVar1) {
        if ((param_1 == puVar2[1]) && (param_2 == puVar2[2])) {
          halt_baddata();
        }
        puVar2 = (undefined4 *)*puVar2;
        if (puVar2 == (undefined4 *)0x0) break;
        bVar1 = puVar2 != (undefined4 *)0x0;
      }
    }
    local_8 = (undefined4 *)XtCalloc(0x78,1);
    local_8[1] = param_1;
    local_8[2] = param_2;
    uVar3 = XInternAtom(param_1,"SERVER_OVERLAY_VISUALS",0);
    iVar13 = param_2 * 0x50;
    iVar4 = XGetWindowProperty(param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + iVar13 + 8),uVar3,
                               0,1000000,0,0,local_38,&local_3c,local_8 + 4,auStack_40,local_8 + 3);
    if ((((iVar4 == 0) && (local_38[0] != 0)) && (local_3c == 0x20)) && (3 < (uint)local_8[4])) {
      local_8[4] = (uint)local_8[4] >> 2;
    }
    else {
      local_8[4] = 0;
      local_8[3] = 0;
    }
    local_28 = param_2;
    uVar3 = XGetVisualInfo(param_1,2,auStack_30,local_8 + 6);
    local_8[5] = uVar3;
    uVar3 = XtCalloc(local_8[6] << 2,1);
    local_8[7] = uVar3;
    uVar3 = XtCalloc(local_8[6] << 2,1);
    local_8[0x1a] = "UNDERLAY";
    bVar1 = false;
    iVar4 = 0;
    local_8[8] = uVar3;
    local_8[0x1b] = "NORMAL";
    local_8[0x1c] = "OVERLAY";
    local_8[0x1d] = "POPUP";
    if (0 < (int)local_8[6]) {
      iVar12 = 0;
      iVar11 = 0;
      do {
        uVar8 = local_8[4];
        piVar10 = (int *)(local_8[8] + iVar12);
        if (uVar8 == 0) {
          *piVar10 = 2;
          piVar10 = (int *)(local_8[8] + iVar12);
        }
        else {
          uVar6 = 0;
          if (uVar8 != 0) {
            piVar9 = (int *)local_8[3];
            iVar5 = local_8[5] + iVar11;
            do {
              if (*(int *)(iVar5 + 4) == *piVar9) {
                if (((*(int *)(iVar5 + 0xc) != 2) || (*(int *)(iVar5 + 0x10) != 3)) || (bVar1)) {
                  *piVar10 = 3;
                }
                else {
                  *piVar10 = 4;
                  bVar1 = true;
                }
                uVar8 = local_8[4];
                piVar10 = (int *)(local_8[8] + iVar12);
                break;
              }
              uVar6 = uVar6 + 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 < uVar8);
          }
          if (uVar6 == uVar8) {
            *piVar10 = 2;
            piVar10 = (int *)(local_8[8] + iVar12);
          }
        }
        piVar9 = (int *)(local_8[5] + iVar11);
        iVar5 = *piVar10;
        iVar4 = iVar4 + 1;
        if (*(int *)(*(int *)(param_1 + 0x8c) + iVar13 + 0x28) == *piVar9) {
          local_8[9] = iVar5;
          local_8[iVar5 + 10] = local_8[5] + iVar11;
          local_8[iVar5 + 0xf] = *(undefined4 *)(local_8[5] + iVar11 + 0x10);
          local_8[iVar5 + 0x14] = *(undefined4 *)(*(int *)(param_1 + 0x8c) + iVar13 + 0x24);
        }
        else if ((local_8[9] != iVar5) && (iVar7 = piVar9[3], (int)local_8[iVar5 + 0x14] < iVar7)) {
          local_8[iVar5 + 0x14] = iVar7;
          local_8[iVar5 + 10] = local_8[5] + iVar11;
          local_8[iVar5 + 0xf] = *(undefined4 *)(local_8[5] + iVar11 + 0x10);
        }
        iVar12 = iVar12 + 4;
        iVar11 = iVar11 + 0x28;
      } while (iVar4 < (int)local_8[6]);
    }
    if (active_item_list == (undefined4 *)0x0) {
      *local_8 = 0;
    }
    else {
      *local_8 = active_item_list;
    }
    active_item_list = local_8;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void __ct__14ByteCodeLoaderFv(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)__nw__FUi(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void LoadFileTypingRules__14ByteCodeLoaderFPc(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *__buf;
  size_t sVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  size_t __nbytes;
  int iVar10;
  int iVar11;
  undefined4 *puStack_cc;
  undefined4 *puStack_c0;
  stat sStack_b8;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [24];
  int iStack_10;
  int iStack_c;
  
  iVar10 = 0;
  iVar11 = 0;
  iVar3 = open(param_2,0);
  if (iVar3 != -1) {
    fstat(iVar3,&sStack_b8);
    if (0xc < sStack_b8.st_blksize) {
      read(iVar3,auStack_30,0xc);
      iVar4 = bcmp(auStack_30,&magic1,4);
      if (((iVar4 == 0) && (iVar4 = bcmp(auStack_28,&magic3,4), iVar4 == 0)) &&
         (iStack_2c == magic2)) {
        __nbytes = sStack_b8.st_blksize - 0xc;
        __buf = (int *)__nw__FUi(__nbytes);
        if (__buf == (int *)0x0) {
          close(iVar3);
        }
        else {
          sVar5 = read(iVar3,__buf,__nbytes);
          if (__nbytes == sVar5) {
            puVar6 = (undefined4 *)__nw__FUi(8);
            iVar3 = param_1[4];
            piVar7 = (int *)((int)__buf + __nbytes);
            *puVar6 = __buf;
            puVar6[1] = iVar3;
            param_1[4] = (int)puVar6;
            for (; __buf < piVar7; __buf = (int *)((int)__buf + (iStack_10 + 3U & 0xfffffffc) + 8))
            {
              iStack_c = *__buf;
              iStack_10 = __buf[1];
              if ((iStack_c < 4) || (0x20 < iStack_c)) {
                if (iStack_c == 1) {
                  iVar10 = get_icon_result(0);
                  if (*param_1 == 0) {
                    param_1[1] = iVar10;
                    *param_1 = iVar10;
                  }
                  else {
                    *(int *)(param_1[1] + 0x68) = iVar10;
                    param_1[1] = iVar10;
                  }
                  *(int **)param_1[1] = __buf + 2;
                }
                else if (iStack_c == 2) {
                  *(int **)(iVar10 + 8) = __buf + 2;
                  *(int *)(iVar10 + 0xc) = iStack_10;
                }
                else if (iStack_c == 3) {
                  *(int **)(iVar10 + 0x1c) = __buf + 2;
                  *(int *)(iVar10 + 0x20) = iStack_10;
                }
                else if (iStack_c == 0x21) {
                  bcopy(__buf + 2,(void *)(iVar10 + 0x38),4);
                  bcopy(__buf + 3,(void *)(iVar10 + 0x3c),4);
                  bcopy(__buf + 4,(void *)(iVar10 + 0x40),4);
                  bcopy(__buf + 5,(void *)(iVar10 + 0x44),4);
                }
                else if (iStack_c == 0x22) {
                  bcopy(__buf + 2,(void *)(iVar10 + 0x48),4);
                  bcopy(__buf + 3,(void *)(iVar10 + 0x4c),4);
                }
                else if (iStack_c == 0x23) {
                  *(int **)(iVar10 + 4) = __buf + 2;
                }
                else if (iStack_c == 0x24) {
                  *(int **)(iVar10 + 0x18) = __buf + 2;
                }
                else if (iStack_c == 0x25) {
                  *(int **)(iVar10 + 0x10) = __buf + 2;
                  *(int *)(iVar10 + 0x14) = iStack_10;
                }
                else if (iStack_c == 0x26) {
                  *(int **)(iVar10 + 0x24) = __buf + 2;
                  *(int *)(iVar10 + 0x28) = iStack_10;
                }
                else if (iStack_c == 0x2b) {
                  bcopy(__buf + 2,(void *)(iVar10 + 100),4);
                }
                else if (iStack_c == 0x2c) {
                  iVar3 = iStack_10 + 8;
                  iStack_c = 0x2c;
                  piVar9 = __buf + 2;
                  while (piVar9 < (int *)((int)__buf + iVar3)) {
                    if (*(int *)(iVar10 + 0x2c) == 0) {
                      puVar6 = (undefined4 *)__nw__FUi(0xc);
                      *(undefined4 **)(iVar10 + 0x2c) = puVar6;
                    }
                    else {
                      puVar6 = (undefined4 *)__nw__FUi(0xc);
                      puStack_c0[2] = puVar6;
                    }
                    puVar6[2] = 0;
                    *puVar6 = piVar9;
                    cVar2 = *(char *)piVar9;
                    while (cVar2 != '\0') {
                      pcVar8 = (char *)((int)piVar9 + 1);
                      piVar9 = (int *)((int)piVar9 + 1);
                      cVar2 = *pcVar8;
                    }
                    pcVar8 = (char *)((int)piVar9 + 1);
                    puVar6[1] = pcVar8;
                    cVar2 = *pcVar8;
                    while (cVar2 != '\0') {
                      pcVar1 = pcVar8 + 1;
                      pcVar8 = pcVar8 + 1;
                      cVar2 = *pcVar1;
                    }
                    puStack_c0 = puVar6;
                    piVar9 = (int *)(pcVar8 + 1);
                  }
                }
                else if (iStack_c == 0x2d) {
                  iVar3 = iStack_10 + 8;
                  iStack_c = 0x2d;
                  for (piVar9 = __buf + 2; piVar9 < (int *)((int)__buf + iVar3);
                      piVar9 = (int *)((int)piVar9 + 1)) {
                    if (*(int *)(iVar10 + 0x30) == 0) {
                      puVar6 = (undefined4 *)__nw__FUi(8);
                      *(undefined4 **)(iVar10 + 0x30) = puVar6;
                    }
                    else {
                      puVar6 = (undefined4 *)__nw__FUi(8);
                      puStack_cc[1] = puVar6;
                    }
                    puVar6[1] = 0;
                    *puVar6 = piVar9;
                    cVar2 = *(char *)piVar9;
                    while (cVar2 != '\0') {
                      pcVar8 = (char *)((int)piVar9 + 1);
                      piVar9 = (int *)((int)piVar9 + 1);
                      cVar2 = *pcVar8;
                    }
                    puStack_cc = puVar6;
                  }
                }
                else if (iStack_c == 0x2e) {
                  *(undefined4 *)(iVar10 + 0x34) = 1;
                }
                else if (iStack_c == 0x27) {
                  iVar11 = icon_bytecode_eval_wrapper(0);
                  if (param_1[2] == 0) {
                    param_1[3] = iVar11;
                    param_1[2] = iVar11;
                  }
                  else {
                    *(int *)(param_1[3] + 0x10) = iVar11;
                    param_1[3] = iVar11;
                  }
                  *(int **)param_1[3] = __buf + 2;
                }
                else if (iStack_c == 0x28) {
                  *(int **)(iVar11 + 4) = __buf + 2;
                }
                else if (iStack_c == 0x29) {
                  bcopy(__buf + 2,(void *)(iVar11 + 8),4);
                }
                else if (iStack_c == 0x2a) {
                  *(int **)(iVar11 + 0xc) = __buf + 2;
                }
              }
              else {
                *(int **)(iVar10 + iStack_c * 4 + 0x40) = __buf + 2;
              }
            }
          }
          else {
            __dl__FPv(__buf);
            close(iVar3);
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FindIconByType__14ByteCodeLoaderFPc(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    iVar1 = strcmp(param_2,(char *)*puVar2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
  setup_icon_entry(0,puVar2);
  halt_baddata();
}

void FindIconByName__14ByteCodeLoaderFPc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  reset_icon_interpreter(&TheFileIconInterpreter);
  if ((icon_cache_capacity == 0) && (icon_cache_size == 0)) {
    reset_icon_interpreter(&TheFileIconInterpreter);
    load_context_data(param_1,s_Unknown_10009a20);
  }
  else {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x68)) {
      if ((((*(int *)(iVar2 + 4) != 0) && (icon_cache_capacity == *(int *)(iVar2 + 0x34))) &&
          (icon_loader_instance != 0)) &&
         (iVar1 = run_icon_interpreter(&TheFileIconInterpreter,*(int *)(iVar2 + 4),
                               *(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x10)), iVar1 != 0
         )) {
        reset_icon_interpreter(&TheFileIconInterpreter);
        setup_icon_entry(0,iVar2);
        halt_baddata();
      }
    }
    reset_icon_interpreter(&TheFileIconInterpreter);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void FindInfoByName__14ByteCodeLoaderFPc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  reset_icon_interpreter(&TheFileIconInterpreter);
  while( true ) {
    if (iVar2 == 0) {
      reset_icon_interpreter(&TheFileIconInterpreter);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if ((((*(int *)(iVar2 + 4) != 0) && (icon_cache_capacity == *(int *)(iVar2 + 0x34))) &&
        (icon_loader_instance != 0)) &&
       (iVar1 = run_icon_interpreter(&TheFileIconInterpreter,*(int *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                             *(undefined4 *)(iVar2 + 0x10)), iVar1 != 0)) break;
    iVar2 = *(int *)(iVar2 + 0x68);
  }
  reset_icon_interpreter(&TheFileIconInterpreter);
  halt_baddata();
}

void FindInfoByType__14ByteCodeLoaderFPc(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void isSuperByName__14ByteCodeLoaderFPcT1(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = init_context_block(param_1,param_3);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x30);
    while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
      puVar2 = (undefined4 *)puVar2[1];
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void isSuperByType__14ByteCodeLoaderFPcT1(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = read_context_value(param_1,param_3);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x30);
    while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
      puVar2 = (undefined4 *)puVar2[1];
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_3 + 0x30);
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[1];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void __dt__14ByteCodeLoaderFv(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x68);
      __dl__FPv(iVar1);
      iVar1 = iVar3;
    }
    iVar1 = param_1[2];
    while (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x10);
      __dl__FPv(iVar1);
      iVar1 = iVar3;
    }
    puVar2 = (undefined4 *)param_1[4];
    while (puVar2 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar2[1];
      __dl__FPv(*puVar2);
      __dl__FPv(puVar2);
      puVar2 = puVar4;
    }
    if ((param_2 & 1) != 0) {
      __dl__FPv(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void __ct__13ByteCodedIconFP8RuleInfo(undefined1 *param_1,int param_2)

{
  void *__dest;
  undefined4 uVar1;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (param_1 = (undefined1 *)__nw__FUi(100), param_1 == (undefined1 *)0x0)) {
    halt_baddata();
  }
  *(int *)(param_1 + 0x14) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffff78;
  *(undefined4 *)(param_1 + 0xc) = 0xffffff81;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined **)(param_1 + 0x60) = &__vtbl__13ByteCodedIcon;
  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  else {
    __dest = (void *)__nw__FUi(*(int *)(param_2 + 0x20));
    *(void **)(param_1 + 0x18) = __dest;
    bcopy(*(void **)(param_2 + 0x1c),__dest,*(size_t *)(param_2 + 0x20));
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void __dt__13ByteCodedIconFv(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x60) = &__vtbl__13ByteCodedIcon;
    if (*(int *)(param_1 + 0x18) != 0) {
      __dl__FPv();
    }
    if ((param_2 & 1) != 0) {
      __dl__FPv(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setState__13ByteCodedIconFiN41
               (undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
               undefined1 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setColors__13ByteCodedIconFiN21(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw__13ByteCodedIconFv(undefined1 *param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x18) != 0) {
    setState__19FileIconInterpreterFiN41
              (&TheFileIconInterpreter,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
    setColors__19FileIconInterpreterFiN21
              (&TheFileIconInterpreter,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
    pushmatrix();
    multmatrix(param_1 + 0x20);
    linewidth(1);
    run_icon_interpreter(&TheFileIconInterpreter,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void typeName__13ByteCodedIconFv(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setMatrix__13ByteCodedIconFRA4_A4_Cf(int param_1,void *param_2)

{
  bcopy(param_2,(void *)(param_1 + 0x20),0x40);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void scale__13ByteCodedIconFf(int param_1,float param_2)

{
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * param_2;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * param_2;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * param_2;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * param_2;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) * param_2;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) * param_2;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) * param_2;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * param_2;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) * param_2;
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * param_2;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) * param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void icon_bytecode_eval_wrapper(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(0x14), param_1 != (undefined4 *)0x0)
     ) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
