/**
 * highlightFileWarp
 *
 * Extracted from fsn.c lines 57468-57490
 * Category: Filesystem
 */

void highlightFileWarp(int param_1,int param_2)

{
  uint in_register_00001040;
  
  if (param_1 == curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */) {
    pushmatrix();
    translate(0,(float)((double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                       (double)((ulonglong)in_register_00001040 << 0x20)));
    FUN_00427300(param_2);
    translate(param_2->child_count /* was: *(undefined4 *)(param_2 + 0x14) */,param_2->child_array /* was: *(undefined4 *)(param_2 + 0x18) */);
    if ((curcontext[0xc50] == '\0') || (DAT_10017495 == '\0')) {
      scale(view_offset_x,view_offset_x);
    }
    else {
      scale(view_offset_x,view_offset_x);
    }
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x0041ac80):
     * Function: highlightFileWarp
     *
     * Looking at this assembly:
     * 1. **What it does**: Compares the first argument (a0) against `curcontext[15]` (offset 60 = 0x3c). If not equal, jumps to exit. If equal, calls a function (likely `getgdesc` or similar at GP-31560), then divides the float at offset 60 of arg0 by 2.0 (0x4000000000000000 in double).
     * 2. **C pseudocode**:
     * ```c
     * void highlightFileWarp(DirNode *node, int param2) {
     * if (node != curcontext[15]) {  // curcontext + 0x3c
     * return;
     * }
     * some_init_func();  // GP-31560, likely getgdesc or winget
     * double scaled = (double)node->field_3c / 2.0;
     * // ... continues with warp calculation
     * }
     * ```
     * The `halt_baddata` likely came from Ghidra struggling with the double-precision division setup (mtc1 to both halves of f8/f9 to construct 2.0) and the mixed single/double precision conversion sequence.
     */
halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041ac80):
     * Function: highlightFileWarp
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Compares node dimensions against context bounds to determine highlight flags. Checks if `node->field_0x1c <= curcontext->field_0x8` and if `curcontext->field_0x0 <= (node->field_0x14 - some_global[0x70]/2.0)`. Sets flags in a3/t3 based on comparisons.
     * **C pseudocode:**
     * ```c
     * float f14 = f12;  // preserve input
     * int flags = a3;   // incoming flags from stack
     * // Compare node height against context upper bound
     * if (node->z_pos <= curcontext->bounds_max) {  // offset 0x1c vs offset 0x8
     * flags = 0x10;
     * }
     * // Compare against adjusted lower bound
     * float threshold = some_global_array[0x70] / 2.0f;
     * if (curcontext->bounds_min <= (node->y_pos - threshold)) {  // offset 0x0 vs offset 0x14
     * flags |= 0x2;
     * }
     * ```
     * The `bc1f` at 0x41ade8 branches if the first comparison is false (skipping the `li a3,16`). This appears to be visibility/clipping logic for determining which highlight style to apply based on whether the file node is within viewable bounds.
     */
halt_baddata();
}
