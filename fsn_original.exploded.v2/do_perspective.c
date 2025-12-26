/**
 * do_perspective
 *
 * Extracted from fsn.c lines 50152-50158
 * Category: Other
 */

void do_perspective(void)

{
  perspective((int)curcontext->fov /* was: *(short *)(curcontext + 0x10) */,0x3f800000,0x3d4ccccd,0x43fa0000);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040bf94):
     * Function: do_perspective
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Loads curcontext pointer, extracts a 16-bit value at offset 16 (likely FOV or aspect), then calls `perspective()` with that value and three float constants: 0.05 (near), 1.0 (aspect), 500.0 (far).
     * 2. **C pseudocode:**
     * ```c
     * void do_perspective(void) {
     * short fov = *(short *)(curcontext + 16);  // or curcontext->fov at offset 0x10
     * perspective(fov, 1.0f, 0.05f, 500.0f);    // fov, aspect, near, far
     * }
     * ```
     * Float constants decoded:
     * - 0x3d4ccccd = 0.05f (near clip)
     * - 0x3f800000 = 1.0f (aspect ratio)
     * - 0x43fa0000 = 500.0f (far clip)
     * GP offset -31912 (0x8358) resolves to `perspective` (IrisGL function).
     * GP offset -30340 (0x897c) resolves to `curcontext`.
     */
halt_baddata();
}
