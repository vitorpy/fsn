/**
 * FUN_00423b3c
 *
 * Extracted from fsn.c lines 62675-62704
 * Ghidra address: 0x00423b3c
 * Category: Other
 */

void FUN_00423b3c(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  iVar2 = 0;
  if (0 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */) {
    iVar3 = 0;
    do {
      if (((param_2 != '\0') ||
          (uVar1 = *(uint *)(*(int *)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + iVar3) + 0x28),
          param_3 != uVar1 >> 0x1d)) || (-1 < (int)(uVar1 << 0xd))) {
        /* TODO: GP:-0x7db0 */ (**(code **)(unaff_gp + -0x7db0) /* -> EXTERNAL_0x0f1276ac */)((int)(short)iVar2);
        if (param_2 != '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
              /*
     * BADDATA ANALYSIS (from binary @ 0x00423b3c):
     * Function: FUN_00423b3c
     *
     * Looking at this assembly:
     * 1. **What it does:** Function prologue that saves all callee-saved registers (s0-s8, ra, gp) and FP registers (f20-f29) to stack, allocates 184 bytes of stack frame, then loads curcontext pointer and begins accessing float fields at offsets +8, +20, +36 from context/argument structures.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_00423b3c(SomeStruct *param1, int param2, int param3) {
     * // param1 likely a directory/node struct
     * // param2, param3 saved to stack at sp+188, sp+192
     * float *ctx = curcontext;  // gp-30340 = curcontext
     * float val1 = ctx[2];      // offset +8, likely camera/view X
     * float val2 = param1->field_36;  // offset +36 from a0
     * double dval = (double)val1;
     * float val3 = ctx[5];      // offset +20, likely camera/view Y or Z
     * // ... continues with coordinate calculations
     * }
     * ```
     * This appears to be a drawing/rendering function that accesses camera/view parameters from curcontext and geometry from the first parameter. The heavy FP register saves (f20-f29) indicate significant floating-point math ahead - likely coordinate transformations for 3D rendering. The GP offset -30340 (0x897c) corresponds to curcontext global.
     */
halt_baddata();
        }
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x00423b3c):
     * Function: FUN_00423b3c
     *
     * Looking at this assembly:
     * **What it does:**
     * Visibility/frustum culling check for file blocks. Compares object bounds against view frustum planes using float comparisons. Sets flags (s2, a3) indicating if object is potentially visible, then early-exits if completely outside view.
     * **C pseudocode:**
     * ```c
     * // s4 = context, s0 = file node
     * int in_front = 0;  // s2
     * if (current_z < context->near_plane) {  // offset 0xac (172)
     * in_front = 1;
     * }
     * float far_z = context->far_plane + node->z_extent;  // offsets 0xbc (188), 0x24 (36)
     * int behind_camera = 0;  // a3
     * if (curcontext->camera_z < far_z) {  // gp-30340 -> curcontext, offset 8
     * behind_camera = 1;
     * }
     * if (!behind_camera) {
     * goto skip_draw;  // object entirely behind camera
     * }
     * // Additional near-plane check at 0x423e00-0x423e0c
     * if (current_y < context->top_plane) {  // offset 0xb4 (180)
     * // continue visibility checks...
     * }
     * ```
     * The pattern `cvt.d.s` + `c.lt.d` is SGI's way of doing float comparisons with double precision for accuracy. The `bc1f` branches on "false" (comparison failed).
     */
halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00423b3c):
     * Function: FUN_00423b3c
     *
     * Looking at this assembly:
     * 1. **What it does:** Compares two float values from child nodes (current vs previous). If current.offset_y < previous.offset_y, calls a function (likely swap_children) with args (parent, index-1, index) to sort children by Y position.
     * 2. **C pseudocode:**
     * ```c
     * // At 423ffc: if (index > 0)
     * if (s5 > 0) {
     * // Get previous child: parent->children[index-1]
     * child_prev = ((int*)s0->children)[s5 - 1];
     * // Compare Y offsets (float at offset 0x14)
     * if (s1->offset_y < child_prev->offset_y) {
     * // Call swap function via GP-relative jump (gp-31044)
     * swap_children(s0, s5 - 1, s5);  // parent, prev_idx, curr_idx
     * }
     * }
     * // At 42404c: if (index < parent->num_children - 1) ...continues with next comparison
     * ```
     * This is a bubble-sort pass comparing adjacent children by Y coordinate, swapping if out of order. The GP-relative call at offset -31044 (0x86bc) should resolve to a swap or reorder function.
     */
halt_baddata();
}
