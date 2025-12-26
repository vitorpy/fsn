/**
 * FUN_00429a48
 *
 * Extracted from fsn.c lines 65981-65994
 * Ghidra address: 0x00429a48
 * Category: Other
 */

void FUN_00429a48(void)

{
  int unaff_gp;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  (**(code **)(unaff_gp + -0x7ae4) /* -> FUN_0040bbe0 */)() /* =FUN_0040bbe0 */;
  (**(code **)(unaff_gp + -31000) /* -> FUN_00426dc0 */)(&local_4,&local_c,&local_8);
  (**(code **)(unaff_gp + -0x78b4) /* -> FUN_00429640 */)(local_4,local_c,local_8) /* =FUN_00429640 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429a48):
     * Function: FUN_00429a48
     *
     * Looking at the GP offsets and call pattern:
     * **GP offset resolution:**
     * - gp-31460 (0x851c) = getgdesc or similar query function
     * - gp-31000 (0x86e8) = getsize (gets window dimensions)
     * - gp-30900 (0x874c) = viewport (sets GL viewport)
     * **What it does:**
     * Queries display/window, gets current window size (width, height, origin), then sets the GL viewport to match those dimensions.
     * **C pseudocode:**
     * ```c
     * void FUN_00429a48(void) {
     * long origin_x, width, height;
     * getgdesc(/* some query */);  // or winget() - gets current window
     * getsize(&origin_x, &width, &height);  // gets window dimensions
     * viewport(origin_x, width, height);  // sets viewport - note: may need 4th param
     * }
     * ```
     * Actually, looking more carefully at the stack layout:
     * - sp+44 = a0 for viewport (origin_x or x1)
     * - sp+36 = a1 for viewport (y or x2)
     * - sp+40 = a2 for viewport (width or y1/y2)
     * This is likely **reshapeviewport()** or a wrapper that calls:
     * 1. Some window query (winget or getgdesc)
     * 2. getsize(&x, &y) or getorigin + getsize
     * 3. viewport(x1, x2, y1, y2) - IrisGL viewport takes 4 args but only 3 passed here
     * **Most likely function name:** `reshape_viewport` or `update_viewport`
     * ```c
     * void reshape_viewport(void) {
     * long x, y1, y2;
     * winget();  // or getgdesc - establish current window
     * getsize(&x, &y1, &y2);  // get dimensions
     * viewport(x, y1, y2);  // set viewport (missing 4th arg suggests wrapper)
     * }
     * ```
     */
halt_baddata();
}
