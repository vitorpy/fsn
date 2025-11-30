/**
 * parse_context_data
 *
 * Extracted from fsn.c lines 56972-57173
 * Category: Other
 */

void parse_context_data(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int unaff_gp;
  undefined4 *local_cc;
  undefined4 *local_c0;
  undefined1 auStack_b8 [48];
  int local_88;
  undefined1 auStack_30 [4];
  int local_2c;
  undefined1 auStack_28 [24];
  int local_10;
  int local_c;
  
  iVar11 = 0;
  iVar12 = 0;
  iVar3 = (**(code **)(unaff_gp + -0x7e34))(param_2,0);
  if (iVar3 != -1) {
    (**(code **)(unaff_gp + -0x7b58))(iVar3,auStack_b8);
    if (0xc < local_88) {
      (**(code **)(unaff_gp + -0x7e14))(iVar3,auStack_30,0xc);
      iVar4 = (**(code **)(unaff_gp + -0x7b50))(auStack_30,*(undefined4 *)(unaff_gp + -0x7620),4);
      if (((iVar4 == 0) &&
          (iVar4 = (**(code **)(unaff_gp + -0x7b50))
                             (auStack_28,*(undefined4 *)(unaff_gp + -0x7618),4), iVar4 == 0)) &&
         (local_2c == **(int **)(unaff_gp + -0x761c))) {
        iVar4 = local_88 + -0xc;
        piVar5 = (int *)(**(code **)(unaff_gp + -0x7b5c))(iVar4);
        if (piVar5 == (int *)0x0) {
          (**(code **)(unaff_gp + -0x7da4))(iVar3);
        }
        else {
          iVar6 = (**(code **)(unaff_gp + -0x7e14))(iVar3,piVar5,iVar4);
          if (iVar4 == iVar6) {
            puVar7 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(8);
            iVar3 = param_1[4];
            piVar8 = (int *)((int)piVar5 + iVar4);
            *puVar7 = piVar5;
            puVar7[1] = iVar3;
            param_1[4] = (int)puVar7;
            for (; piVar5 < piVar8; piVar5 = (int *)((int)piVar5 + (local_10 + 3U & 0xfffffffc) + 8)
                ) {
              local_c = *piVar5;
              local_10 = piVar5[1];
              if ((local_c < 4) || (0x20 < local_c)) {
                if (local_c == 1) {
                  iVar11 = (**(code **)(unaff_gp + -0x778c))(0);
                  if (*param_1 == 0) {
                    param_1[1] = iVar11;
                    *param_1 = iVar11;
                  }
                  else {
                    *(int *)(param_1[1] + 0x68) = iVar11;
                    param_1[1] = iVar11;
                  }
                  *(int **)param_1[1] = piVar5 + 2;
                }
                else if (local_c == 2) {
                  *(int **)(iVar11 + 8) = piVar5 + 2;
                  *(int *)(iVar11 + 0xc) = local_10;
                }
                else if (local_c == 3) {
                  *(int **)(iVar11 + 0x1c) = piVar5 + 2;
                  *(int *)(iVar11 + 0x20) = local_10;
                }
                else if (local_c == 0x21) {
                  (**(code **)(unaff_gp + -0x7e64))(piVar5 + 2,iVar11 + 0x38,4);
                  (**(code **)(unaff_gp + -0x7e64))(piVar5 + 3,iVar11 + 0x3c,4);
                  (**(code **)(unaff_gp + -0x7e64))(piVar5 + 4,iVar11 + 0x40,4);
                  (**(code **)(unaff_gp + -0x7e64))(piVar5 + 5,iVar11 + 0x44,4);
                }
                else if (local_c == 0x22) {
                  (**(code **)(unaff_gp + -0x7e64))(piVar5 + 2,iVar11 + 0x48,4);
                  (**(code **)(unaff_gp + -0x7e64))(piVar5 + 3,iVar11 + 0x4c,4);
                }
                else if (local_c == 0x23) {
                  *(int **)(iVar11 + 4) = piVar5 + 2;
                }
                else if (local_c == 0x24) {
                  *(int **)(iVar11 + 0x18) = piVar5 + 2;
                }
                else if (local_c == 0x25) {
                  *(int **)(iVar11 + 0x10) = piVar5 + 2;
                  *(int *)(iVar11 + 0x14) = local_10;
                }
                else if (local_c == 0x26) {
                  *(int **)(iVar11 + 0x24) = piVar5 + 2;
                  *(int *)(iVar11 + 0x28) = local_10;
                }
                else if (local_c == 0x2b) {
                  (**(code **)(unaff_gp + -0x7e64))(piVar5 + 2,iVar11 + 100,4);
                }
                else if (local_c == 0x2c) {
                  iVar3 = local_10 + 8;
                  local_c = 0x2c;
                  piVar10 = piVar5 + 2;
                  while (piVar10 < (int *)((int)piVar5 + iVar3)) {
                    if (*(int *)(iVar11 + 0x2c) == 0) {
                      puVar7 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(0xc);
                      *(undefined4 **)(iVar11 + 0x2c) = puVar7;
                    }
                    else {
                      puVar7 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(0xc);
                      local_c0[2] = puVar7;
                    }
                    puVar7[2] = 0;
                    *puVar7 = piVar10;
                    cVar2 = *(char *)piVar10;
                    while (cVar2 != '\0') {
                      pcVar9 = (char *)((int)piVar10 + 1);
                      piVar10 = (int *)((int)piVar10 + 1);
                      cVar2 = *pcVar9;
                    }
                    pcVar9 = (char *)((int)piVar10 + 1);
                    puVar7[1] = pcVar9;
                    cVar2 = *pcVar9;
                    while (cVar2 != '\0') {
                      pcVar1 = pcVar9 + 1;
                      pcVar9 = pcVar9 + 1;
                      cVar2 = *pcVar1;
                    }
                    local_c0 = puVar7;
                    piVar10 = (int *)(pcVar9 + 1);
                  }
                }
                else if (local_c == 0x2d) {
                  iVar3 = local_10 + 8;
                  local_c = 0x2d;
                  for (piVar10 = piVar5 + 2; piVar10 < (int *)((int)piVar5 + iVar3);
                      piVar10 = (int *)((int)piVar10 + 1)) {
                    if (*(int *)(iVar11 + 0x30) == 0) {
                      puVar7 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(8);
                      *(undefined4 **)(iVar11 + 0x30) = puVar7;
                    }
                    else {
                      puVar7 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(8);
                      local_cc[1] = puVar7;
                    }
                    puVar7[1] = 0;
                    *puVar7 = piVar10;
                    cVar2 = *(char *)piVar10;
                    while (cVar2 != '\0') {
                      pcVar9 = (char *)((int)piVar10 + 1);
                      piVar10 = (int *)((int)piVar10 + 1);
                      cVar2 = *pcVar9;
                    }
                    local_cc = puVar7;
                  }
                }
                else if (local_c == 0x2e) {
                  *(undefined4 *)(iVar11 + 0x34) = 1;
                }
                else if (local_c == 0x27) {
                  iVar12 = (**(code **)(unaff_gp + -0x7788))(0);
                  if (param_1[2] == 0) {
                    param_1[3] = iVar12;
                    param_1[2] = iVar12;
                  }
                  else {
                    *(int *)(param_1[3] + 0x10) = iVar12;
                    param_1[3] = iVar12;
                  }
                  *(int **)param_1[3] = piVar5 + 2;
                }
                else if (local_c == 0x28) {
                  *(int **)(iVar12 + 4) = piVar5 + 2;
                }
                else if (local_c == 0x29) {
                  (**(code **)(unaff_gp + -0x7e64))(piVar5 + 2,iVar12 + 8,4);
                }
                else if (local_c == 0x2a) {
                  *(int **)(iVar12 + 0xc) = piVar5 + 2;
                }
              }
              else {
                *(int **)(iVar11 + local_c * 4 + 0x40) = piVar5 + 2;
              }
            }
          }
          else {
            (**(code **)(unaff_gp + -0x7b34))(piVar5);
            (**(code **)(unaff_gp + -0x7da4))(iVar3);
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
