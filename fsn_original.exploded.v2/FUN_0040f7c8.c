/**
 * FUN_0040f7c8
 *
 * Extracted from fsn.c lines 51357-51389
 * Ghidra address: 0x0040f7c8
 * Category: Other
 */

void FUN_0040f7c8(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  uint in_fcsr;
  float local_8;
  float local_4;
  
  set_gl_context(param_1,0);
  FUN_0040f080(param_2,&local_4,&local_8);
  local_4 = local_4 - DAT_10000158;
  local_8 = local_8 - DAT_1000015c;
  DAT_100165c4 = local_8 * *(float *)(curcontext + 8) * DAT_100174a0;
  DAT_100165cc = (float)((double)-DAT_100165c4 * (double)curcontext->cos_x /* was: *(float *)(curcontext + 0x24) */);
  if (curcontext[0x38] == '\0') {
    DAT_100165c0 = local_4 * *(float *)(curcontext + 8) * DAT_100174a0;
    DAT_100165c8 = 0;
  }
  else {
    dVar1 = (double)local_4 * (double)((ulonglong)(double)-DAT_100165c4 & 0xffffffff00000000);
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar1 = ROUND(dVar1);
    }
    else {
      dVar1 = FLOOR(dVar1);
    }
    DAT_100165c8 = (undefined2)(int)dVar1;
    DAT_100165c0 = 0.0;
  }
  FUN_0040f150(FUN_0040f20c,&DAT_100165c0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040f7c8):
     * Function: FUN_0040f7c8
     *
     * Looking at this assembly:
     * **What it does:**
     * Converts a double to int16 and stores it, then either branches to call a function OR computes `result = sp[52] * v0[8] * f0` (float multiplication chain), stores result, zeros a short, then calls a function with two string arguments and a data pointer.
     * **C pseudocode:**
     * ```c
     * // Path 1 (from 40f8e8): convert double to short, store float, branch to function call
     * DAT_100165c8 = (short)(int)double_val;  // cvt.w.d + sh
     * DAT_100165c0 = f8;                       // swc1
     * goto call_func;
     * // Path 2 (from 40f904): float multiply chain
     * float temp = (float)((double)sp_52 * (double)v0_8 * accumulated_double);
     * DAT_100165c0 = temp;
     * DAT_100165c8 = 0;
     * call_func:
     * // t9 = base - 3760, a0 = base - 3572 (two different strings from same base)
     * // a1 = &DAT_100165c0 (the float/data we just stored)
     * some_func(string1, string2, &DAT_100165c0);  // likely XtVaSetValues or similar
     * ```
     * **Key observations:**
     * - GP offset -32660 (0x806c) → likely a widget or resource struct at ~0x100165c0
     * - GP offset -32744 (0x8018) → string table base, with offsets -3760 and -3572 for two resource names
     * - The jalr with two string args + data pointer pattern is classic Xt resource setting
     * - The short at offset +8 (26056 vs 26048) is likely a flag/count field
     */
halt_baddata();
}
