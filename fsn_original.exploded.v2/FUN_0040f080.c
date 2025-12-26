/**
 * FUN_0040f080
 *
 * Extracted from fsn.c lines 51186-51207
 * Ghidra address: 0x0040f080
 * Category: Other
 */

void FUN_0040f080(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(curcontext + 0x2c);
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = iVar2 + 1;
  }
  *param_2 = (float)((param_1->_field_20 /* was: *(int *)(param_1 + 0x20) */ - (iVar1 >> 1)) * 2) / (float)iVar2;
  iVar2 = *(int *)(curcontext + 0x30);
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = iVar2 + 1;
  }
  *param_3 = (float)(((iVar1 >> 1) - param_1->_field_24 /* was: *(int *)(param_1 + 0x24) */) * 2) / (float)iVar2;
  FUN_0040bc28();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040f080):
     * Function: FUN_0040f080
     *
     * Looking at this assembly:
     * **What it does:**
     * Computes two scroll/scale factors: divides a double-precision value by another and stores as float to `*a1`, then calculates `((item_count/2 - offset) * 2) / item_count` with signed divide rounding and stores to `*a2`. Finally calls a function via GP and returns.
     * **C pseudocode:**
     * ```c
     * *out_scale1 = (float)(double_val / divisor);  // a1
     * int item_count = node->field_0x30;  // t1[0x30]
     * int offset = a0->field_0x24;        // a0[0x24]
     * int half = (item_count < 0) ? (item_count + 1) >> 1 : item_count >> 1;  // signed divide by 2
     * int delta = (half - offset) * 2;
     * *out_scale2 = (float)((double)delta / (double)item_count);  // a2
     * some_gp_function();  // GP offset -31456 (0x8520)
     * ```
     * The `bgez/sra` pattern is the standard MIPS idiom for signed integer division by 2 (rounding toward zero for negative values).
     */
halt_baddata();
}
