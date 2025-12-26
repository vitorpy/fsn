/**
 * draw_files
 *
 * Extracted from fsn.c lines 62641-62669
 * Category: Graphics
 */

void draw_files(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */) {
    iVar3 = 0;
    do {
      if (((param_2 != '\0') ||
          (uVar1 = *(uint *)(*(int *)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + iVar3) + 0x28),
          param_3 != uVar1 >> 0x1d)) || (-1 < (int)(uVar1 << 0xd))) {
        pushname((int)(short)iVar2);
        if (param_2 != '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
              /*
     * BADDATA ANALYSIS (from binary @ 0x00423b30):
     * Function: draw_files
     *
     * ## Assembly Analysis
     * **What it does:**
     * Standard MIPS function prologue - sets up GP (global pointer), allocates 184 bytes of stack, saves all callee-saved registers (s0-s8, ra), saves 10 float registers (f20-f29), stores arguments a1/a2 to stack, then loads curcontext and accesses curcontext[2] (offset 8 = Z coordinate or similar float field).
     * **C pseudocode:**
     * ```c
     * void draw_files(void *arg0, int arg1, int arg2) {
     * // arg1, arg2 saved to stack at sp+188, sp+192
     * float f6 = curcontext[2];  // offset 8 from curcontext base
     * // ... function continues with f6 value
     * }
     * ```
     * **GP offset 0x897c (-30340):** This is `curcontext` pointer (0x10009524). The code does:
     * 1. Load &curcontext from GP-relative address
     * 2. Dereference to get curcontext value
     * 3. Load float at offset +8 from that context
     */
halt_baddata();
        }
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x00423b30):
     * Function: draw_files
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Visibility culling check - tests if a file block is within the camera's view frustum. Compares object position + offset against view boundaries to determine if it should be drawn.
     * **C pseudocode:**
     * ```c
     * int in_view = 1;
     * if (in_view) {
     * float obj_near = node->near_z;  // offset 172 (0xac)
     * if (current_z < obj_near)
     * in_view = 0;
     * else
     * in_view = 1;
     * }
     * float obj_far = node->far_z;        // offset 188 (0xbc)
     * float obj_y = fileblock->y;         // offset 36 (0x24)
     * float sum = obj_far + obj_y;
     * int visible = 0;
     * if (curcontext->view_limit < sum)   // gp-30340 -> curcontext, offset 8
     * visible = 1;
     * if (visible) {
     * float obj_height = node->height; // offset 180 (0xb4)
     * // ... continues with more visibility tests
     * }
     * ```
     * **Key offsets:**
     * - s4+172 (0xac): near Z bound
     * - s4+188 (0xbc): far Z bound
     * - s4+180 (0xb4): height
     * - s0+36 (0x24): file block Y position
     * - gp-30340 → curcontext, then offset 8 = view limit
     */
halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00423b30):
     * Function: draw_files
     *
     * Looking at this assembly:
     * 1. **What it does:** After a function call, if s5 > 0, loads a child node from an array at s0+16, compares float at offset 20 of s1 vs the child's offset 20. If s1's value < child's value, calls a function (at gp-31044) with args (s0, s5-1, s5). Then checks if s5 < s0->field_0xc - 1 to continue looping.
     * 2. **C pseudocode:**
     * ```c
     * if (s5 > 0) {
     * void **children = node->children;  // offset 16
     * child_node = children[s5 - 1];     // array indexed by s5-1
     * if (s1->sort_key < child_node->sort_key) {  // float compare at offset 20
     * swap_children(node, s5 - 1, s5);  // gp-31044, likely bubble-sort swap
     * }
     * }
     * if (s5 < node->num_children - 1) {  // offset 12
     * // continue loop at 424064
     * }
     * ```
     * This is part of a bubble-sort or insertion-sort loop sorting child nodes by a float key at offset 20 (likely z-position or similar display ordering value).
     */
halt_baddata();
}
