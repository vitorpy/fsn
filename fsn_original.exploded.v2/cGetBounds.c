/**
 * cGetBounds
 *
 * Extracted from fsn.c lines 72005-72015
 * Category: Other
 */

void cGetBounds(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  *param_2 = *(undefined4 *)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x38);
  *param_3 = *(undefined4 *)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x3c);
  *param_4 = *(undefined4 *)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x40);
  *param_5 = *(undefined4 *)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x44);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433c30):
     * Function: cGetBounds
     *
     * **What it does:**
     * Extracts 4 float values from offsets 56, 60, 64, 68 of the structure at a0->offset20 (child/bounds struct), storing them into the 4 output pointers (a1, a2, a3, sp+16).
     * **C equivalent:**
     * ```c
     * void cGetBounds(void *node, float *x1, float *y1, float *x2, float *y2) {
     * void *bounds = ((void **)node)[5];  // offset 20 = index 5 for 32-bit pointers
     * *x1 = *(float *)((char *)bounds + 56);
     * *y1 = *(float *)((char *)bounds + 60);
     * *x2 = *(float *)((char *)bounds + 64);
     * *y2 = *(float *)((char *)bounds + 68);
     * }
     * ```
     * Or with proper struct typing:
     * ```c
     * void cGetBounds(TreeNode *node, float *minX, float *minY, float *maxX, float *maxY) {
     * BoundsStruct *b = node->bounds;  // offset 20
     * *minX = b->x1;  // offset 56
     * *minY = b->y1;  // offset 60
     * *maxX = b->x2;  // offset 64
     * *maxY = b->y2;  // offset 68
     * }
     * ```
     */
halt_baddata();
}
