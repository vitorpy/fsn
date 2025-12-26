/**
 * setcolorsys
 *
 * Extracted from fsn.c lines 77187-77197
 * Category: Other
 */

void setcolorsys(int param_1)

{
  if (param_1 - 1U < 5) {
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x004396ec):
     * Function: setcolorsys
     *
     * Looking at this assembly:
     * 1. **What it does:** This is a switch statement on `(param1 - 1)` with 5 cases. It loads a jump table address via GP, computes the target, and jumps. Each case writes values to global color system variables (at GP-relative offsets like -25040, -25036, -25032).
     * 2. **C pseudocode:**
     * ```c
     * void setcolorsys(int mode) {
     * switch (mode) {
     * case 1:  // offset 0x00 in jump table
     * colorsys_r = default_color_value;
     * colorsys_g = default_color_value;
     * colorsys_b = mode;
     * break;
     * case 2:  // offset 0x04 in jump table
     * colorsys_r = alt_color_value;
     * colorsys_g = ...; // continues at 0x43975c
     * // ... remaining cases
     * break;
     * // cases 3, 4, 5 follow similar pattern
     * default:
     * // branch at 0x43970c jumps to 0x4397fc (exit)
     * break;
     * }
     * }
     * ```
     * The key insight: `sltiu at,t6,5` checks if `(mode-1) < 5`, meaning valid modes are 1-5. The jump table at `GP[-32676] + 23336` contains 5 offsets that get added to GP to compute each case's address.
     */
halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"bad color system no %d\n",param_1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004396ec):
     * Function: setcolorsys
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Three parallel code blocks (at 0x43978c, 0x4397ac, 0x4397d4) each load two values from GP-relative globals and store them to a structure at gp[-32660] (offsets -25040, -25036, -25032), then branch to 0x43981c. This is a switch/case selecting different color pairs based on some condition, storing them into a color system struct along with parameter a2.
     * **C pseudocode:**
     * ```c
     * // GP offsets resolved: gp[-32660] = colorSystem struct pointer
     * // Three cases storing different color pairs:
     * // Case 1 (0x43978c):
     * colorSystem->field_9e30 = gp_global_88d0;  // first color
     * colorSystem->field_9e34 = gp_global_88d0;  // (t0 reused)
     * colorSystem->field_9e38 = param_a2;
     * // Case 2 (0x4397ac):
     * colorSystem->field_9e30 = gp_global_88b8;
     * colorSystem->field_9e34 = gp_global_88cc;
     * colorSystem->field_9e38 = param_a2;
     * // Case 3 (0x4397d4):
     * colorSystem->field_9e30 = gp_global_88c0;
     * colorSystem->field_9e34 = gp_global_88d4;
     * colorSystem->field_9e38 = param_a2;
     * ```
     * This appears to be setting RGB or color pair values based on a color system mode selector, with the third field (a2) likely being an alpha or intensity value passed as a parameter.
     */
halt_baddata();
}
