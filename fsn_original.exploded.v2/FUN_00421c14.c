/**
 * FUN_00421c14
 *
 * Extracted from fsn.c lines 61458-61480
 * Ghidra address: 0x00421c14
 * Category: Other
 */

void FUN_00421c14(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  if (0 < numtop) {
    puVar4 = &DAT_10016c10;
    do {
      iVar1 = numcmap;
      uVar2 = *puVar4;
      (&current_colormap)[numcmap] = uVar2;
      XSetWMColormapWindows(display,uVar2,&current_colormap,iVar1 + 1);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < numtop);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421c14):
     * Function: FUN_00421c14
     *
     * Looking at the GP offsets and loop structure:
     * **What it does:**
     * Loop copies values from an array at s1 (offset 27664) into an indexed array at s2 (offset 27704), using index from s4. Then calls a function (at GP-32076) with (s5[0], s2, index+1). Loops while s0 < s3[0].
     * **C pseudocode:**
     * ```c
     * // GP offsets: -32660→base_array, -30204→param_ptr, -30392→index_ptr, -32076→func_ptr
     * int *src_array = &some_base[27664/4];   // s1 offset
     * int *dst_array = &some_base[27704/4];   // s2 offset
     * int *index_ptr = GP_30392;              // s4
     * int *count_ptr = s3;                    // loop bound
     * void *param = *GP_30204;                // s5
     * for (int i = s0; i < *count_ptr; i++) {
     * int idx = *index_ptr;
     * dst_array[idx] = *src_array;
     * some_func(param, dst_array, idx + 1);  // jalr to GP-32076
     * src_array++;
     * }
     * ```
     * This looks like **highlight synchronization** - copying highlight states from a source list into an indexed destination array, then calling an update function (likely XmListSelectPos or similar Motif list selection function based on the idx+1 parameter pattern typical of 1-based Motif indices).
     */
halt_baddata();
}
