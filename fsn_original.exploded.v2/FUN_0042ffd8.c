/**
 * FUN_0042ffd8
 *
 * Extracted from fsn.c lines 69970-70060
 * Ghidra address: 0x0042ffd8
 * Category: Other
 */

void FUN_0042ffd8(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)0x0;
  if ((int)(param_1[0x1d] << 3) < 0) {
    if ((pattern_match_enabled == 1) && (iVar1 = gmatch(*param_1,DAT_10016f08), iVar1 != 0)) {
      *(byte *)((int)param_1 + 0x75) = *(byte *)((int)param_1 + 0x75) | 1;
      *(byte *)((int)param_1 + 0x76) = *(byte *)((int)param_1 + 0x76) | 0x80;
      DAT_10016edc = DAT_10016edc + 1;
      if (param_1 != lastSearchDir) {
        if (lastSearchDir != (undefined4 *)0x0) {
          lastSearchDir[0x1b] = param_1;
        }
        lastSearchDir = param_1;
        if (firstSearchDir == (undefined4 *)0x0) {
          firstSearchDir = param_1;
        }
      }
      iVar1 = param_1[3];
    }
    else {
      *(byte *)((int)param_1 + 0x76) = *(byte *)((int)param_1 + 0x76) & 0x7f;
      *(byte *)((int)param_1 + 0x75) = *(byte *)((int)param_1 + 0x75) & 0xfe;
      iVar1 = param_1[3];
    }
    iVar5 = 0;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        puVar3 = *(undefined4 **)(param_1[4] + iVar4);
        *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | 8;
        if (((pattern_match_enabled & 1) != 0) && (iVar1 = gmatch(*puVar3,DAT_10016f08), iVar1 == 0)) {
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xf7;
        }
        uVar2 = pattern_match_enabled & 4;
        if (((pattern_match_enabled & 2) != 0) &&
           (((DAT_10016f04 != '\0' && (search_number_value <= (int)puVar3[3])) ||
            ((uVar2 = pattern_match_enabled & 4, DAT_10016f04 == '\0' &&
             (uVar2 = pattern_match_enabled & 4, (int)puVar3[3] <= search_number_value)))))) {
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xf7;
          uVar2 = pattern_match_enabled & 4;
        }
        if ((uVar2 != 0) &&
           (((iVar1 = FUN_00411e38(puVar3[4]), DAT_10016f05 != '\0' && (DAT_10016f10 <= iVar1)) ||
            ((DAT_10016f05 == '\0' && (iVar1 <= DAT_10016f10)))))) {
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xf7;
        }
        if ((int)(puVar3[10] << 4) < 0) {
          *(byte *)((int)param_1 + 0x75) = *(byte *)((int)param_1 + 0x75) & 0xfe | 1;
          DAT_10016edc = DAT_10016edc + 1;
          if (param_1 != lastSearchDir) {
            if (lastSearchDir != (undefined4 *)0x0) {
              lastSearchDir[0x1b] = param_1;
            }
            lastSearchDir = param_1;
            if (firstSearchDir == (undefined4 *)0x0) {
              firstSearchDir = param_1;
            }
          }
          if (puVar6 != (undefined4 *)0x0) {
            puVar6[9] = puVar3;
          }
          puVar6 = puVar3;
          if (param_1[0x1c] == 0) {
            param_1[0x1c] = puVar3;
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < (int)param_1[3]);
    }
    iVar4 = 0;
    iVar1 = 0;
    if (0 < (int)param_1[5]) {
      do {
        FUN_0042ffd8(*(undefined4 *)(param_1[6] + iVar1));
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar4 < (int)param_1[5]);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042ffd8):
     * Function: FUN_0042ffd8
     *
     * ## Analysis
     * **What it does:**
     * Loop iterates over an array of pointers stored at s1+24, calling a function (from GP-32736, offset -40) on each element. Loop count is at s1+20. Registers s4=counter, s3=byte offset (increments by 4).
     * **C pseudocode:**
     * ```c
     * // s1 points to a structure with:
     * //   offset 20: int count
     * //   offset 24: void** array (array of pointers)
     * // GP-32736 offset -40 is likely a destructor/cleanup function
     * int count = s1->count;        // s1[20]
     * void **array = s1->array;     // s1[24]
     * for (int i = 0; i < count; i++) {
     * some_cleanup_func(array[i]);  // via GP indirect call
     * }
     * // Epilogue: restore s0-s8, ra, return
     * ```
     * **GP offset resolution:**
     * - `gp-32736` = `gp-0x7FE0` — this is the GOT base on MIPS o32
     * - Offset `-40` (`0xFFD8` or `-0x28`) into that table points to a function pointer
     * To identify the actual function, run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "-32736 -40"
     * ```
     * Or check `fsn_original.exploded.cleanup/GP_MAPPING.md` for offset 0x7FE0-0x28 = 0x7FB8.
     */
halt_baddata();
}
