/**
 * FUN_0040f668
 *
 * Extracted from fsn.c lines 51317-51351
 * Ghidra address: 0x0040f668
 * Category: Other
 */

void FUN_0040f668(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 in_f4;
  double dVar2;
  uint in_fcsr;
  float local_8;
  float local_4;
  
  uVar1 = (uint)((ulonglong)in_f4 >> 0x20);
  set_gl_context(param_1,0);
  FUN_0040f080(param_2,&local_4,&local_8);
  local_4 = local_4 - DAT_10000158;
  local_8 = local_8 - DAT_1000015c;
  DAT_100165b4 = local_8 * DAT_100174a0;
  if (curcontext[0x38] == '\0') {
    DAT_100165b0 = local_4 * DAT_100174a0;
    DAT_100165b8 = 0;
  }
  else {
    dVar2 = (double)local_4 * (double)((ulonglong)uVar1 << 0x20);
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar2 = ROUND(dVar2);
    }
    else {
      dVar2 = FLOOR(dVar2);
    }
    DAT_100165b8 = (undefined2)(int)dVar2;
    DAT_100165b0 = 0.0;
  }
  FUN_0040f150(FUN_0040f20c,&DAT_100165b0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040f668):
     * Function: FUN_0040f668
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Converts a double-precision calculation to integer (with FPU rounding mode manipulation), stores result as short at GP-32660+26040. Then either stores a float at GP-32660+26032, OR takes a different path that multiplies a float by a double constant and stores result. Finally calls a function via GP indirect with two string/data pointers as arguments.
     * **C pseudocode:**
     * ```c
     * // GP-32660 points to a data structure base (let's call it base_ptr)
     * // Offsets: 26032 = 0x65b0 (float field), 26040 = 0x65b8 (short field)
     * // Path 1 (from cvt.w.d):
     * short int_result = (short)(int)double_value;  // $f8 -> $f10 -> t9
     * base_ptr->field_65b8 = int_result;
     * base_ptr->field_65b0 = float_value;  // $f16
     * // Path 2 (alternate, at 0x40f778):
     * float sp_44 = *(float*)(sp + 44);
     * base_ptr->field_65b0 = (float)((double)sp_44 * scale_factor);
     * base_ptr->field_65b8 = 0;
     * // Common exit:
     * // jalr to function at GP-32744 offset -3760
     * // Args: string at GP-32744 offset -3572, pointer to base_ptr+26032
     * some_func(format_string, &base_ptr->field_65b0);
     * ```
     * **Likely interpretation:** Animation/interpolation code storing a computed position (float) and frame count (short), then calling a status/debug print function. The xori/ctc1 manipulates FPU rounding mode for the float-to-int conversion.
     */
halt_baddata();
}
