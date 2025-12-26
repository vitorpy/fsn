/**
 * FUN_00433c3c
 *
 * Extracted from fsn.c lines 72021-72031
 * Ghidra address: 0x00433c3c
 * Category: Other
 */

void FUN_00433c3c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  *param_2 = *(undefined4 *)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x38);
  *param_3 = *(undefined4 *)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x3c);
  *param_4 = *(undefined4 *)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x40);
  *param_5 = *(undefined4 *)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x44);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433c3c):
     * Function: FUN_00433c3c
     *
     * ## Analysis
     * **1. What it does:**
     * Extracts 4 consecutive floats from offsets 56-68 (0x38-0x44) of the structure at a0->offset_20, storing them into the 4 output pointer parameters (a1, a2, a3, and stack arg at sp+16).
     * **2. C pseudocode:**
     * ```c
     * void FUN_00433c3c(void *a0, float *out_x, float *out_y, float *out_z, float *out_w) {
     * void *inner = *(void **)((char *)a0 + 20);  // a0->field_0x14
     * *out_x = *(float *)((char *)inner + 56);    // inner->field_0x38
     * *out_y = *(float *)((char *)inner + 60);    // inner->field_0x3c
     * *out_z = *(float *)((char *)inner + 64);    // inner->field_0x40
     * *out_w = *(float *)((char *)inner + 68);    // inner->field_0x44
     * }
     * ```
     * This is likely a "get bounding box" or "get position/extent" function - extracts 4 floats (possibly x,y,z,w or min_x,min_y,max_x,max_y) from a nested structure.
     */
halt_baddata();
}
