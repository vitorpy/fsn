/**
 * FUN_0041ac8c
 *
 * Extracted from fsn.c lines 57496-57525
 * Ghidra address: 0x0041ac8c
 * Category: Other
 */

void FUN_0041ac8c(int param_1,int param_2)

{
  int unaff_gp;
  uint in_register_00001040;
  undefined4 uVar1;
  
  if (param_1 == *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x3c)) {
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (0,(float)((double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                        (double)((ulonglong)in_register_00001040 << 0x20)));
    (**(code **)(unaff_gp + -0x7908) /* -> FUN_00427300 */)(param_2) /* =FUN_00427300 */;
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (param_2->child_count /* was: *(undefined4 *)(param_2 + 0x14) */,param_2->child_array /* was: *(undefined4 *)(param_2 + 0x18) */);
    if ((*(char *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0xc50) == '\0') ||
       (*(char *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 5) == '\0')) {
      uVar1 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x70);
      /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar1,uVar1);
    }
    else {
      uVar1 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x70);
      /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar1,uVar1);
    }
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x0041ac8c):
     * Function: FUN_0041ac8c
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if arg0 (a0) equals curcontext->field_0x3c (the current directory/node). If equal, calls getGlobalXform(), then computes arg0->field_0x3c / 2.0 and calls translate(0.0, result, ...) to position highlight.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0041ac8c(void *item, int param2) {
     * if (item != curcontext->currentNode)  // offset 0x3c
     * return;
     * getGlobalXform();
     * float ypos = ((float *)item)[15] / 2.0f;  // field at offset 0x3c
     * translate(0.0f, ypos, ...);
     * // continues with highlight warp setup...
     * }
     * ```
     * The function name in the symbol table is `highlightFileWarp` - this positions the highlight/selection indicator at the vertical center of the selected file block (dividing height by 2.0 to get center).
     */
halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041ac8c):
     * Function: FUN_0041ac8c
     *
     * Looking at this assembly:
     * 1. **What it does:** Compares node->field_1c against curcontext->field_8, sets a3=16 if less/equal. Then computes node->field_14 ± (some_global[0x70] / 2.0) and compares against curcontext->field_0.
     * 2. **C pseudocode:**
     * ```c
     * // GP-30340 = curcontext, GP-30172 = some global (likely view params)
     * float node_z = node->field_1c;           // s0+0x1c
     * float ctx_z = curcontext->field_8;       // context Z threshold
     * if (node_z <= ctx_z) {
     * a3 = 16;  // flag: node in visible Z range
     * }
     * float half_range = global_view[0x70] / 2.0f;  // GP-30172, offset 0x70
     * float node_y = node->field_14;                 // s0+0x14
     * float ctx_y = curcontext->field_0;
     * float y_min = node_y - half_range;
     * float y_max = node_y + half_range;
     * // subsequent code likely: if (ctx_y >= y_min && ctx_y <= y_max) set another flag
     * t3 = a3 | 0x2;  // accumulate visibility flags
     * ```
     * **Context:** This appears to be visibility/culling logic in `highlightFileWarp` - checking if a file node's Y and Z coordinates fall within the current view frustum, building up a bitmask of which axes pass the test.
     */
halt_baddata();
}
