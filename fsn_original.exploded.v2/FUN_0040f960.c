/**
 * FUN_0040f960
 *
 * Extracted from fsn.c lines 51395-51426
 * Ghidra address: 0x0040f960
 * Category: Other
 */

void FUN_0040f960(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  uint in_fcsr;
  float local_8;
  float local_4;
  
  FUN_0040f080(param_2,&local_4,&local_8);
  local_4 = local_4 - DAT_10000158;
  local_8 = local_8 - DAT_1000015c;
  DAT_100165d4 = local_8 * *(float *)(curcontext + 8) * DAT_100174a0;
  DAT_100165dc = (float)((double)DAT_100165d4 * (double)curcontext->cos_x /* was: *(float *)(curcontext + 0x24) */);
  if (curcontext[0x38] == '\0') {
    DAT_100165d0 = local_4 * *(float *)(curcontext + 8) * DAT_100174a0;
    DAT_100165d8 = 0;
  }
  else {
    dVar1 = (double)local_4 * (double)((ulonglong)(double)DAT_100165d4 & 0xffffffff00000000);
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar1 = ROUND(dVar1);
    }
    else {
      dVar1 = FLOOR(dVar1);
    }
    DAT_100165d8 = (undefined2)(int)dVar1;
    DAT_100165d0 = 0.0;
  }
  FUN_0040f150(FUN_0040f20c,&DAT_100165d0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040f960):
     * Function: FUN_0040f960
     *
     * Looking at this assembly:
     * 1. **What it does:** Converts a double to int16 and stores it, OR multiplies three floats and stores the result. Then calls a function (likely `setvaluator`) with two GP-relative addresses as arguments. Finally restores ra/gp and returns.
     * 2. **C pseudocode:**
     * ```c
     * // Path 1 (from 40fa70): convert double to short
     * *(short*)(DAT_X + 26072) = (short)double_value;
     * *(float*)(DAT_X + 26064) = f10_value;
     * // Path 2 (from 40fa8c): float multiply chain
     * float result = sp[52] * obj->field_8 * scale_factor;
     * *(float*)(DAT_X + 26064) = result;
     * *(short*)(DAT_X + 26072) = 0;
     * // Common exit: call setvaluator(device_name, value_ptr)
     * // t9 = base - 3760, a0 = base - 3572, a1 = DAT_X + 26064
     * setvaluator(device_string, &stored_value);
     * return;
     * ```
     * The GP offsets suggest: `gp-32660` points to a valuator data structure, `gp-32744` is a base for string/function lookup. The `setvaluator` call (offset -3760) with device name (offset -3572) is classic IrisGL valuator setup - likely setting MOUSEX/MOUSEY sensitivity based on window size.
     */
halt_baddata();
}
