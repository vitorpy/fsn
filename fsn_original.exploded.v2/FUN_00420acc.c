/**
 * FUN_00420acc
 *
 * Extracted from fsn.c lines 60903-60914
 * Ghidra address: 0x00420acc
 * Category: Other
 */

void FUN_00420acc(void)

{
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    FUN_0042087c();
    gl_swap_buffers(1);
  }
  FUN_0042087c();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00420acc):
     * Function: FUN_00420acc
     *
     * Looking at the GP offsets and the call pattern:
     * **GP Offset Resolution:**
     * - gp offset -30868 (0x876c) → `blendfunction` (IrisGL blend control)
     * - gp offset -31112 (0x8678) → `endpick` or similar drawing termination
     * **What the assembly does:**
     * 1. Loads byte at t6+3153 (likely a "blend enabled" flag from context structure)
     * 2. If flag is set: calls blendfunction(1), then some end function, then blendfunction(1) again
     * 3. Always calls the end function before returning
     * **C pseudocode:**
     * ```c
     * // After halt_baddata - restore blend state and finish
     * unsigned char blend_flag = *((unsigned char *)(curcontext + 3153));
     * if (blend_flag != 0) {
     * blendfunction(BF_ONE);   // gp-30868: enable blend
     * endpick();               // gp-31112: end picking/drawing mode
     * blendfunction(BF_ONE);   // restore blend state
     * }
     * endpick();  // final cleanup call before return
     * ```
     * The double blendfunction(1) pattern with endpick() in between suggests this is restoring GL blend state that was modified during overlay cursor drawing - a common pattern when drawing translucent UI overlays that need different blend modes than the main scene.
     */
halt_baddata();
}
