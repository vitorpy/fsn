/**
 * hls_to_rgb
 *
 * Extracted from fsn.c lines 76981-76986
 * Category: Other
 */

void hls_to_rgb(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043886c):
     * Function: hls_to_rgb
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Calls a helper function (at GP offset -30892, likely `value()` for HLS conversion), stores result to first output pointer
     * 2. Computes `f2 - 120.0` (0x405e0000 = 120.0f as double high word), calls the helper again
     * 3. Stores second result to second output pointer, then returns
     * **C pseudocode:**
     * ```c
     * // At end of hls_to_rgb, after computing intermediate values:
     * // m1, m2 already computed, hue in f12/f13
     * *r_out = value(m1, m2, hue);           // First component
     * *g_out = value(m1, m2, hue - 120.0);   // Second component (hue shifted by -120 degrees)
     * // (Earlier code likely computed *b_out = value(m1, m2, hue + 120.0))
     * return;
     * ```
     * The `value()` helper (at offset -30892 / 0x8754) is the standard HLS-to-RGB helper that interpolates based on hue position in the color wheel. The 120.0 degree offsets are classic HLS conversion - R, G, B are computed at hue, hue-120°, and hue+120° respectively.
     */
halt_baddata();
}
