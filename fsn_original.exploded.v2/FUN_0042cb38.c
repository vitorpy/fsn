/**
 * FUN_0042cb38
 *
 * Extracted from fsn.c lines 67857-67865
 * Ghidra address: 0x0042cb38
 * Category: Other
 */

void FUN_0042cb38(undefined4 param_1,int param_2,int param_3)

{
  **(float **)(param_2 + 4) =
       (float)*(int *)(param_3 + 8) / *(float *)(&DAT_100094f0 + param_2->child_count /* was: *(int *)(param_2 + 0x14) */ * 4);
  FUN_0042c970(*(undefined4 *)(param_2 + 8));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042cb38):
     * Function: FUN_0042cb38
     *
     * Looking at this assembly:
     * 1. **What it does:** Computes `(int_value / float_array[index])` where `index = param2[5]`, stores result to `param2[1]`, then calls a function with `param2[2]` as argument. The float array is at GP-27408 (likely a scale/size table), and the called function is at GP-13968.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0042cb38(void *param1, int *param2, int *param3) {
     * int index = param2[5];           // offset 0x14 = word 5
     * int int_val = param3[2];         // offset 0x08 = word 2
     * float *scale_table = &DAT_100094f0;  // GP-27408
     * float scale = scale_table[index];
     * float result = (float)int_val / scale;
     * *(float *)param2[1] = result;    // store to address in param2[1]
     * FUN_0041c970(param2[2]);         // GP-13968, call with param2[2]
     * }
     * ```
     * The GP offsets resolve to: -32660+(-27408) suggests a sizing/scale lookup table, -32736+(-13968) is likely a callback or update function. The pattern suggests this scales a pixel/screen coordinate by some per-item scale factor.
     */
halt_baddata();
}
