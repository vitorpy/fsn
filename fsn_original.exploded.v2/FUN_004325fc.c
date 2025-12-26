/**
 * FUN_004325fc
 *
 * Extracted from fsn.c lines 71294-71425
 * Ghidra address: 0x004325fc
 * Category: Memory
 */

void FUN_004325fc(int param_1,int param_2)

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
    if (DAT_10009664 != (undefined4 *)0x0) {
      bVar1 = DAT_10009664 != (undefined4 *)0x0;
      puVar2 = DAT_10009664;
      while (bVar1) {
        if ((param_1 == puVar2[1]) && (param_2 == puVar2[2])) {
              /*
     * BADDATA ANALYSIS (from binary @ 0x004325fc):
     * Function: FUN_004325fc
     *
     * Looking at this assembly:
     * 1. **What it does:** Function validates input params (returns -2 if a0 is NULL), defaults s2 from offset 132 of s0 if s2 is NULL, then searches a global linked list (at GP-relative offset) for a node whose field at offset 4 matches s0.
     * 2. **C pseudocode:**
     * ```c
     * int FUN_004325fc(void *param1, void *param2) {
     * if (param1 == NULL) return -2;
     * if (param2 == NULL) param2 = *(void**)((char*)param1 + 132);
     * void *list = global_list;  // GP-relative at -32660, then -27036
     * if (list != NULL) {
     * void *node = list;
     * while (node != NULL) {
     * if (*(void**)((char*)node + 4) == param1) {
     * // found match - continue at 0x432670+
     * break;
     * }
     * // node = node->next (implied by loop structure)
     * }
     * }
     * // ... continues ...
     * }
     * ```
     * The GP indirection `lw a0,-32660(gp)` then `lw a0,-27036(a0)` suggests accessing a global pointer table (GOT) to reach a module-level linked list head. The structure at offset 4 appears to be a back-pointer to the owning object being searched for.
     */
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
                if (((iVar5->file_count /* was: *(int *)(iVar5 + 0xc) */ != 2) || (iVar5->file_array /* was: *(int *)(iVar5 + 0x10) */ != 3)) || (bVar1)) {
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
    if (DAT_10009664 == (undefined4 *)0x0) {
      *local_8 = 0;
    }
    else {
      *local_8 = DAT_10009664;
    }
    DAT_10009664 = local_8;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004325fc):
     * Function: FUN_004325fc
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Initializes array pointers at offsets 108, 112, 116 in structure t0, then loops through items (count at offset 24). For each item, checks a flag (offset 16) and writes different values (2, 3, or 4) to an output array based on conditions.
     * **C pseudocode:**
     * ```c
     * // t0 is a structure pointer, offsets suggest visual/GL attribute building
     * struct_t0->ptr_108 = base + 15892;  // likely GLX attribute arrays
     * struct_t0->ptr_112 = base + 15900;
     * struct_t0->ptr_116 = base + 15908;
     * t4 = t5 = 0;
     * struct_t0->output_array = v0;  // offset 32
     * if (struct_t0->count > 0) {  // offset 24
     * t2 = t1 = 0;
     * for each item {
     * int *out = struct_t0->output_array + t2;
     * int flag = struct_t0->field_16;  // offset 16
     * if (flag == 0) {
     * *out = 2;  // GLX_USE_GL or similar constant
     * } else if (flag != 0) {
     * // more complex path using offset 20, 12
     * // builds attribute list based on visual capabilities
     * }
     * }
     * }
     * ```
     * This appears to be building GLX visual attribute lists (the 15892/15900/15908 offsets are likely static attribute template arrays, and values 2/3/4 are GLX attribute tokens like GLX_USE_GL=1, GLX_BUFFER_SIZE, GLX_LEVEL, etc.).
     */
halt_baddata();
}
