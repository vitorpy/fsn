/**
 * FUN_004144ec
 *
 * Extracted from fsn.c lines 53756-53894
 * Ghidra address: 0x004144ec
 * Category: Memory
 */

void FUN_004144ec(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  size_t sVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd) {
    if ((param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 1) != 0) {
      sVar7 = param_1->file_count /* was: *(size_t *)(param_1 + 0xc) */;
      bVar2 = false;
      iVar11 = 0;
      if (0 < (int)sVar7) {
        piVar6 = param_1->file_array /* was: *(int **)(param_1 + 0x10) */;
        iVar12 = 0;
        do {
          iVar4 = *piVar6;
          if (iVar11 < (int)sVar7) {
            bVar1 = iVar4->child_center /* was: *(byte *)(iVar4 + 0x28) */;
            iVar10 = iVar11 + 1;
            if ((bVar1 & 1) != 0) {
              bVar2 = true;
              do {
                iVar4->child_center /* was: *(byte *)(iVar4 + 0x28) */ = bVar1 & 0xfb;
                iVar8 = param_1->file_count /* was: *(int *)(param_1 + 0xc) */;
                iVar3 = iVar10 * 4;
                iVar4 = iVar10;
                if (iVar10 < iVar8) {
                  do {
                    iVar4 = iVar4 + 1;
                    puVar5 = (undefined4 *)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + iVar3);
                    iVar3 = iVar3 + 4;
                    puVar5[-1] = *puVar5;
                    iVar8 = param_1->file_count /* was: *(int *)(param_1 + 0xc) */;
                  } while (iVar4 < iVar8);
                }
                sVar7 = iVar8 - 1;
                param_1->file_count /* was: *(size_t *)(param_1 + 0xc) */ = sVar7;
                piVar6 = (int *)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + iVar12);
                iVar4 = *piVar6;
              } while ((iVar11 < (int)sVar7) && (bVar1 = iVar4->child_center /* was: *(byte *)(iVar4 + 0x28) */, (bVar1 & 1) != 0))
              ;
            }
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
          piVar6 = piVar6 + 1;
        } while (iVar11 < (int)sVar7);
      }
      pvVar9 = param_1->file_array /* was: *(void **)(param_1 + 0x10) */;
      if (bVar2) {
        if (sVar7 == 0) {
          free(pvVar9);
          sVar7 = param_1->file_count /* was: *(size_t *)(param_1 + 0xc) */;
          param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */ = 0;
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = realloc(pvVar9,sVar7 << 2);
          sVar7 = param_1->file_count /* was: *(size_t *)(param_1 + 0xc) */;
          param_1->file_array /* was: *(void **)(param_1 + 0x10) */ = pvVar9;
        }
      }
      qsort(pvVar9,sVar7,4,compare_files);
    }
    if (*(char *)(param_1 + 0x75) < '\0') {
      sVar7 = param_1->child_count /* was: *(size_t *)(param_1 + 0x14) */;
      bVar2 = false;
      iVar11 = 0;
      if (0 < (int)sVar7) {
        piVar6 = param_1->child_array /* was: *(int **)(param_1 + 0x18) */;
        iVar12 = 0;
        do {
          if ((iVar11 < (int)sVar7) && (iVar4 = iVar11 + 1, *(int *)(*piVar6 + 0x74) << 5 < 0)) {
            bVar2 = true;
            do {
              FUN_004143d0();
              iVar8 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
              iVar3 = iVar4 * 4;
              iVar10 = iVar4;
              if (iVar4 < iVar8) {
                do {
                  iVar10 = iVar10 + 1;
                  puVar5 = (undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar3);
                  iVar3 = iVar3 + 4;
                  puVar5[-1] = *puVar5;
                  iVar8 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
                } while (iVar10 < iVar8);
              }
              sVar7 = iVar8 - 1;
              param_1->child_count /* was: *(size_t *)(param_1 + 0x14) */ = sVar7;
              piVar6 = (int *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar12);
            } while ((iVar11 < (int)sVar7) && (*(int *)(*piVar6 + 0x74) << 5 < 0));
          }
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
          piVar6 = piVar6 + 1;
        } while (iVar11 < (int)sVar7);
      }
      pvVar9 = param_1->child_array /* was: *(void **)(param_1 + 0x18) */;
      if (bVar2) {
        if (sVar7 == 0) {
          free(pvVar9);
          sVar7 = param_1->child_count /* was: *(size_t *)(param_1 + 0x14) */;
          param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */ = 0;
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = realloc(pvVar9,sVar7 << 2);
          sVar7 = param_1->child_count /* was: *(size_t *)(param_1 + 0x14) */;
          param_1->child_array /* was: *(void **)(param_1 + 0x18) */ = pvVar9;
        }
      }
      qsort(pvVar9,sVar7,4,compare_dirs);
    }
    if (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 9 < 0) {
      iVar11 = 0;
      iVar12 = 0;
      if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
        do {
          FUN_004144ec(*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar12));
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 4;
        } while (iVar11 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004144ec):
     * Function: FUN_004144ec
     *
     * ## Assembly Analysis
     * **What it does:**
     * Checks bit 22 of t3 (flags). If set, iterates through children array at s1+24, calling this function recursively on each child. Then restores saved registers and returns.
     * **C pseudocode:**
     * ```c
     * if (flags & 0x00400000) {  // bit 22 set - has children to process
     * int count = node->numChildren;      // s1+20
     * DirNode **children = node->children; // s1+24
     * for (int i = 0; i < count; i++) {
     * FUN_004144ec(children[i]);  // recursive call (t9 loaded via GP, offset 17644 = 0x44EC)
     * }
     * }
     * // epilogue: restore s0-s5, ra from stack and return
     * ```
     * **Key details:**
     * - `sll t5,t3,0x9` + `bgez` tests bit 22 (shift left 9, check sign = bit 31-9=22)
     * - GP-indirect call at -32744(gp) + 17644 = self-recursive call to FUN_004144ec
     * - s1 points to a directory node structure with numChildren at +20 and children array at +24
     * - Loop increments pointer offset (s4) by 4 bytes per iteration (pointer size)
     */
halt_baddata();
}
