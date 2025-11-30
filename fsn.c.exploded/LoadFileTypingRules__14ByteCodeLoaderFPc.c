/**
 * LoadFileTypingRules__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 56768-56966
 * Category: Filesystem
 */

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
