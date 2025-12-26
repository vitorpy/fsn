/**
 * FUN_0041fc30
 *
 * Extracted from fsn.c lines 60181-60198
 * Ghidra address: 0x0041fc30
 * Category: Other
 */

void FUN_0041fc30(undefined4 param_1)

{
  int unaff_gp;
  int local_8;
  int local_4;
  
  (**(code **)(unaff_gp + -0x7874) /* -> FUN_0042ab1c */)(param_1,&local_4,&local_8) /* =FUN_0042ab1c */;
  if (local_4 != 0) {
    (**(code **)(unaff_gp + -0x79c4) /* -> FUN_0041d69c */)() /* =FUN_0041d69c */;
    if (local_8 != 0) {
      (**(code **)(unaff_gp + -0x79bc) /* -> FUN_0041da44 */)() /* =FUN_0041da44 */;
    }
    (**(code **)(unaff_gp + -0x79a8) /* -> FUN_0041fbb4 */)() /* =FUN_0041fbb4 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041fc30):
     * Function: FUN_0041fc30
     *
     * Now I can see Ghidra's partial decompilation. The assembly shows there's a return value that Ghidra missed. Let me provide the corrected analysis:
     * ---
     * **Assembly Analysis for FUN_0041fc30 (gotoFileName):**
     * 1. **What it does:** Looks up file coordinates via get_position_coords(). If found (non-NULL), calls update_marked_item(). If second coord is also non-NULL, calls get_item_screen_coords(). Always calls update_gl_context() before returning 1. Returns 0 if initial lookup fails.
     * 2. **Corrected C pseudocode:**
     * ```c
     * int gotoFileName(void *param_1) {
     * void *coords_x = NULL;
     * void *coords_y = NULL;
     * get_position_coords(param_1, &coords_x, &coords_y);
     * if (coords_x == NULL)
     * return 0;
     * update_marked_item(coords_x);
     * if (coords_y != NULL) {
     * get_item_screen_coords(coords_y);
     * }
     * update_gl_context();
     * return 1;
     * }
     * ```
     * **Key corrections from assembly:**
     * - Return type is `int`, not `void`
     * - Returns 0 on early exit (line 41fc58: `move v0,zero`)
     * - Returns 1 on success (line 41fcac: `li v0,1`)
     * - The `halt_baddata()` masked the return statement - actual code continues to epilogue
     */
halt_baddata();
}
