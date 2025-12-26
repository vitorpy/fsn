/**
 * first_traversal
 *
 * Extracted from fsn.c lines 52906-52971
 * Category: Other
 */

void first_traversal(int param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  uint unaff_000010b0;
  float fVar4;
  uint in_fcsr;
  
  param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ = param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ | 0x10;
  if (param_1->file_count /* was: *(int *)(param_1 + 0xc) */ == 0) {
    iVar1 = 0;
  }
  else {
    dVar2 = sqrt((double)(param_1->file_count /* was: *(int *)(param_1 + 0xc) */ + -1));
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar2 = ROUND(dVar2);
    }
    else {
      dVar2 = FLOOR(dVar2);
    }
    iVar1 = (int)dVar2 + 1;
  }
  if (iVar1 == 0) {
    param_1->height /* was: *(float *)(param_1 + 0x3c) */ =
         (float)((double)view_offset_x +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)DAT_10017504);
  }
  else {
    param_1->height /* was: *(float *)(param_1 + 0x3c) */ =
         (float)((double)iVar1 *
                ((double)view_offset_x +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)DAT_10017504));
  }
  dVar3 = (double)DAT_10017504;
  dVar2 = (double)view_offset_x;
  param_1->_field_1c /* was: *(undefined4 *)(param_1 + 0x1c) */ = 0;
  param_1->_field_54 /* was: *(undefined4 *)(param_1 + 0x54) */ = 0;
  fVar4 = (float)((double)(1 - iVar1) *
                  (dVar2 + (double)((ulonglong)unaff_000010b0 << 0x20) * dVar3) *
                 (double)((ulonglong)dVar2 & 0xffffffff00000000));
  if (param_1->file_count /* was: *(int *)(param_1 + 0xc) */ < 1) {
    param_1->_field_20 /* was: *(undefined4 *)(param_1 + 0x20) */ = param_1->_field_1c /* was: *(undefined4 *)(param_1 + 0x1c) */;
    FUN_00412234(param_1);
    if (DAT_1000018c < param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */) {
      DAT_1000018c = param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */;
    }
    param_1->bound_min_x /* was: *(undefined4 *)(param_1 + 0x48) */ = 0;
    if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
      FUN_00412604(*param_1->child_array /* was: *(undefined4 **)(param_1 + 0x18) */);
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x004125f8):
     * Function: first_traversal
     *
     * Looking at this assembly snippet (function prologue + start of first_traversal):
     * **What it does:**
     * 1. Standard MIPS function prologue: saves ra, gp, s0-s7, and f20-f27 to stack (96-byte frame)
     * 2. Sets flag: `node->flags |= 0x10` (marks node as "traversed" or "visited")
     * 3. Loads child pointer from offset 12, initializes counter to 0, branches if no children
     * **C pseudocode:**
     * ```c
     * void first_traversal(DirNode *node) {
     * int count = 0;
     * DirNode *child;
     * node->flags |= 0x10;        // Mark as visited (offset 0x74)
     * child = node->child;        // offset 0x0c
     * if (child == NULL) {
     * goto no_children;
     * }
     * child_index = child - 1;    // addiu t9,v0,-1 suggests pre-decrement or count adjustment
     * ...
     * }
     * ```
     * The `addiu t9,v0,-1` after the NULL check suggests it's either adjusting a 1-based index to 0-based, or preparing for a loop that counts down children. The `s6 = 0` initialization is likely a child counter or accumulator that gets updated during traversal.
     */
halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x004125f8):
     * Function: first_traversal
     *
     * Looking at this assembly:
     * **What it does:**
     * Calculates a spacing value from parent dimensions (offsets 112, 116) scaled by some factor in $f22, then multiplied by 0.5 * (1 - s7). Initializes loop variables and stores the result as starting X positions ($f20, $f24, $f26).
     * **C pseudocode:**
     * ```c
     * // s1 = current node, s4 = parent/context, s7 = some flag, $f22 = scale factor
     * node->offset_60 = (float)computed_value;  // from previous code
     * float f8 = parent->field_116;  // offset 0x74
     * float f16 = parent->field_112; // offset 0x70
     * double scaled = f22_scale * (double)f8;
     * double sum = (double)f16 + scaled;
     * int adjust = 1 - s7_flag;
     * double spacing = ((double)adjust * sum) * 0.5;  // 0x3fe0... = 0.5
     * float start_x = (float)spacing;
     * node->field_84 = 0.0f;  // offset 0x54
     * node->field_28 = 0;     // offset 0x1c
     * int child_count = node->nchildren;  // offset 0x0c
     * int i = 0, s5 = 0, s3 = 0;
     * float accum_x = start_x;
     * float child_x = start_x;
     * if (child_count > 0) {
     * child_ptr = node->children;  // offset 0x10
     * i++;
     * // loop continues...
     * }
     * ```
     * The 0x3fe0 in $f7 with zero in $f6 forms the double 0.5. This appears to be calculating initial X positions for laying out child nodes, centered around a midpoint.
     */
halt_baddata();
  }
  iVar1 = *param_1->file_array /* was: *(int **)(param_1 + 0x10) */;
  iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ = iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ | 4;
  param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ = param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ + iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */;
  iVar1->child_count /* was: *(float *)(iVar1 + 0x14) */ = fVar4;
  iVar1->child_array /* was: *(float *)(iVar1 + 0x18) */ = fVar4;
  FUN_00412400(iVar1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004125f8):
     * Function: first_traversal
     *
     * Looking at this assembly:
     * 1. **What it does:** Completes a child traversal loop, calls a function at GP-0x8018+8756 (likely `first_traversal` recursively), then updates a global max value at GP-0x8068+396 if the current node's child count (offset 28) exceeds it. Stores 0.0 at offset 72 and begins iterating files (offset 20 = file count).
     * 2. **C pseudocode:**
     * ```c
     * // ... end of child loop
     * node->y_offset = result;  // offset 84
     * s5++;
     * s3 += 4;
     * } while (s5 < node->num_children);  // offset 12
     * s5 = 0;
     * node->depth = node->num_children;  // offset 32 = offset 28
     * first_traversal(node);  // recursive call via GP-0x8018+8756
     * child_count = node->num_children;  // offset 28
     * max_children_ptr = curcontext + 396;  // GP-0x8068 + 0x18c
     * if (*max_children_ptr < child_count)
     * *max_children_ptr = child_count;
     * node->x_position = 0.0f;  // offset 72
     * s3 = 0;
     * if (node->num_files > 0) {  // offset 20
     * // begin file iteration loop at 4128cc
     * ```
     */
halt_baddata();
}
