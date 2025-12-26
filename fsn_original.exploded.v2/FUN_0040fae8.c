/**
 * FUN_0040fae8
 *
 * Extracted from fsn.c lines 51432-51445
 * Ghidra address: 0x0040fae8
 * Category: Other
 */

void FUN_0040fae8(undefined4 param_1,undefined4 param_2)

{
  float local_8;
  float local_4;
  
  FUN_0040f080(param_2,&local_4,&local_8);
  local_4 = local_4 - DAT_10000158;
  local_8 = local_8 - DAT_1000015c;
  DAT_100165ec = local_8;
  FUN_0040f150(FUN_0040f20c,&DAT_100165e0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040fae8):
     * Function: FUN_0040fae8
     *
     * Looking at this assembly:
     * **What it does:**
     * Computes delta_x = (local_float - curcontext[86]) and delta_y = (stack_float - curcontext[87]), stores delta_y to a global, then calls a function with two string/data arguments.
     * **C pseudocode:**
     * ```c
     * float delta_x = local_f4 - curcontext[86];  // offset 344 = index 86
     * float delta_y = stack_var_20 - curcontext[87];  // offset 348 = index 87
     * DAT_100165ec = delta_y;  // store to global at gp-32660 + 26092
     * some_func(string_at_gp_minus_3572, data_at_gp_plus_26080);  // jalr t9
     * ```
     * The GP-relative addresses:
     * - `gp-32664` (0x8068) → curcontext pointer
     * - `gp-32744` (0x8018) → function pointer, resolved to address + (-3760) = likely a print/log function
     * - `gp-32660` (0x806c) → base for global storage, offset 26092 (0x65ec) and 26080 (0x65e0)
     */
halt_baddata();
}
