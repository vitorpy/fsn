/**
 * FUN_0042d8e0
 *
 * Extracted from fsn.c lines 68230-68253
 * Ghidra address: 0x0042d8e0
 * Category: Other
 */

void FUN_0042d8e0(void)

{
  undefined4 local_14;
  int *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = &local_4;
  local_14 = 0xf66187b;
  XtGetValues(pref_red_scale,&local_14,1);
  local_10 = &local_8;
  local_14 = 0xf66187b;
  XtGetValues(pref_green_scale,&local_14,1);
  local_10 = &local_c;
  local_14 = 0xf66187b;
  XtGetValues(pref_blue_scale,&local_14,1);
  **(int **)(PTR_PTR_100094ec + 4) = local_8 * 0x100 + local_4 + local_c * 0x10000;
  FUN_0042d6f0();
  FUN_0042c970(6);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042d8e0):
     * Function: FUN_0042d8e0
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Calls a function via t9 with args (sp+36, 1)
     * 2. Packs three values (t2, t4, t6) into a 32-bit color: `(t6 << 16) | (t2 << 8) | t4` (RGB format)
     * 3. Stores the packed color to an indirect pointer, then calls two more functions (likely IrisGL calls at offsets -10512 and -13968 from GP base)
     * **C pseudocode:**
     * ```c
     * // After halt_baddata section in FUN_0042d8e0
     * some_func(&local_var, 1);  // jalr t9 at 42d988
     * // Pack RGB color from stack values
     * uint8_t r = stack[0x30];  // t2
     * uint8_t g = stack[0x34];  // t4
     * uint8_t b = stack[0x2c];  // t6
     * uint32_t packed_color = (b << 16) | (r << 8) | g;
     * // Store to global color pointer (curcontext->something->color)
     * uint32_t **color_ptr = *(gp[-32660]);  // likely curcontext
     * *(color_ptr[-27412]->field_4) = packed_color;
     * gl_func1();  // gp[-32736] - 10512, likely cpack() or similar
     * gl_func2(6); // gp[-32736] - 13968, a0=6, likely lmcolor(LMC_COLOR) or similar
     * ```
     * The GP offsets -10512 (0xd6f0) and -13968 (0xc970) relative to the base at gp[-32736] suggest IrisGL color-setting functions, possibly `cpack()` and `lmcolor()`.
     */
halt_baddata();
}
