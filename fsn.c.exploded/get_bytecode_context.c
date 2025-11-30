/**
 * get_bytecode_context
 *
 * Extracted from fsn.c lines 55597-55728
 * Category: Memory
 */

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
