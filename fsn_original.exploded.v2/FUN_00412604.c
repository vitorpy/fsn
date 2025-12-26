/**
 * FUN_00412604
 *
 * Extracted from fsn.c lines 52977-53049
 * Ghidra address: 0x00412604
 * Category: Other
 */

void FUN_00412604(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  double dVar4;
  float fVar5;
  float fVar6;
  uint unaff_000010b0;
  uint in_fcsr;
  
  param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ = param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ | 0x10;
  if (param_1->file_count /* was: *(int *)(param_1 + 0xc) */ == 0) {
    iVar3 = 0;
  }
  else {
    dVar4 = (double)/* TODO: GP:-0x7ef8 */ (**(code **)(unaff_gp + -0x7ef8) /* -> EXTERNAL_0x0f896eb0 */)((double)(param_1->file_count /* was: *(int *)(param_1 + 0xc) */ + -1));
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar4 = ROUND(dVar4);
    }
    else {
      dVar4 = FLOOR(dVar4);
    }
    iVar3 = (int)dVar4 + 1;
  }
  if (iVar3 == 0) {
    iVar2 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
    param_1->height /* was: *(float *)(param_1 + 0x3c) */ =
         (float)((double)iVar2->initial_val /* was: *(float *)(iVar2 + 0x70) */ +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)iVar2->render_flags /* was: *(float *)(iVar2 + 0x74) */);
  }
  else {
    iVar2 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
    param_1->height /* was: *(float *)(param_1 + 0x3c) */ =
         (float)((double)iVar3 *
                ((double)iVar2->initial_val /* was: *(float *)(iVar2 + 0x70) */ +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)iVar2->render_flags /* was: *(float *)(iVar2 + 0x74) */));
  }
  fVar5 = iVar2->render_flags /* was: *(float *)(iVar2 + 0x74) */;
  fVar6 = iVar2->initial_val /* was: *(float *)(iVar2 + 0x70) */;
  param_1->_field_1c /* was: *(undefined4 *)(param_1 + 0x1c) */ = 0;
  param_1->_field_54 /* was: *(undefined4 *)(param_1 + 0x54) */ = 0;
  fVar5 = (float)((double)(1 - iVar3) *
                  ((double)fVar6 + (double)((ulonglong)unaff_000010b0 << 0x20) * (double)fVar5) *
                 (double)((ulonglong)(double)fVar6 & 0xffffffff00000000));
  if (param_1->file_count /* was: *(int *)(param_1 + 0xc) */ < 1) {
    iVar3 = FUN_00410000 /* was: *(int *)(unaff_gp + -0x7fe8) */ /* -> FUN_00410000 */;
    param_1->_field_20 /* was: *(undefined4 *)(param_1 + 0x20) */ = param_1->_field_1c /* was: *(undefined4 *)(param_1 + 0x1c) */;
    (*(code *)(iVar3 + 0x2234))(param_1);
    piVar1 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x18c);
    if (*piVar1 < param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */) {
      *piVar1 = param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */;
    }
    param_1->bound_min_x /* was: *(undefined4 *)(param_1 + 0x48) */ = 0;
    if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
      (**(code **)(unaff_gp + -0x7a70) /* -> FUN_00412604 */)(*param_1->child_array /* was: *(undefined4 **)(param_1 + 0x18) */) /* =FUN_00412604 */;
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00412604):
     * Function: FUN_00412604
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Function prologue: saves registers (s0-s7, ra, gp) and 8 float registers (f20-f27) to stack
     * 2. Loads byte at offset 116 from arg0 (a0), ORs it with 0x10, stores back (sets a flag bit)
     * 3. Loads word at offset 12 from arg0, if zero jumps ahead; otherwise converts (value-1) to double for calculation
     * **C pseudocode:**
     * ```c
     * void FUN_00412604(void *node) {
     * // node is a directory/file node structure
     * unsigned char flags = ((unsigned char *)node)[116];
     * ((unsigned char *)node)[116] = flags | 0x10;  // Set "visited" or "traversed" flag
     * int child_count = ((int *)node)[3];  // offset 12 = word index 3
     * if (child_count != 0) {
     * double adjusted = (double)(child_count - 1);
     * // ... continues with traversal using adjusted count
     * }
     * // s6 = 0 suggests accumulator/counter initialized
     * }
     * ```
     * Based on context (FSN file browser, "first_traversal" label, flag at offset 116, child count at offset 12), this appears to be a recursive directory tree traversal function that marks nodes as visited and processes children. The float register saves suggest subsequent 3D position/layout calculations.
     */
halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x00412604):
     * Function: FUN_00412604
     *
     * Looking at this assembly:
     * **What it does:**
     * Computes an animation interpolation factor from s4[116] and s4[112] (floats at offsets 0x74 and 0x70), scaled by (1-s7) and multiplied by 0.5. Initializes loop counters and stores the result in f26/f20/f24 for use in a child traversal loop.
     * **C pseudocode:**
     * ```c
     * float f8 = s4->field_74;           // lwc1 $f8,116(s4)
     * float f16 = s4->field_70;          // lwc1 $f16,112(s4)
     * double temp = f22 * (double)f8;    // mul.d with f22 (pre-loaded constant)
     * double sum = (double)f16 + temp;   // add.d
     * int toggle = 1 - s7;               // subu t2,t1,s7
     * double scaled = (double)toggle * sum * 0.5;  // 0x3fe0_0000 = 0.5 in double
     * float f26 = (float)scaled;         // cvt.s.d
     * float f20 = f26;
     * float f24 = f26;
     * s1->field_1c = 0;                  // sw zero,28(s1)
     * *(float*)&s1->field_54 = 0.0f;     // swc1 $f16,84(s1)
     * s2 = s5 = s3 = 0;                  // loop counters
     * int num_children = s1->field_0c;   // lw t3,12(s1)
     * if (num_children > 0) { /* loop over children at s1->field_10 */ }
     * ```
     * This appears to be computing a position offset for animating child directory blocks, where s7 acts as a toggle (0 or 1) to enable/disable the interpolation.
     */
halt_baddata();
  }
  iVar3 = *param_1->file_array /* was: *(int **)(param_1 + 0x10) */;
  iVar3->child_center /* was: *(byte *)(iVar3 + 0x28) */ = iVar3->child_center /* was: *(byte *)(iVar3 + 0x28) */ | 4;
  param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ = param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ + iVar3->file_count /* was: *(int *)(iVar3 + 0xc) */;
  iVar3->child_count /* was: *(float *)(iVar3 + 0x14) */ = fVar5;
  iVar3->child_array /* was: *(float *)(iVar3 + 0x18) */ = fVar5;
  (**(code **)(unaff_gp + -0x7a74) /* -> FUN_00412400 */)(iVar3) /* =FUN_00412400 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00412604):
     * Function: FUN_00412604
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Stores a float at offset 84 of s1 (node struct), increments counter s5, loops back if more children remain
     * 2. After loop: calls a function via GP indirect (offset 8018 + 8756), copies node->offset28 to node->offset32
     * 3. Updates a global max value (curcontext+396) if node->children_count exceeds it, then zeros node->offset72
     * **C pseudocode:**
     * ```c
     * // End of inner loop
     * node->offset84 = computed_float;
     * counter++;
     * if (counter < node->child_count) {  // offset 12
     * child_ptr += 4;
     * goto loop_start;  // 0x412798
     * }
     * // After loop
     * counter = 0;
     * node->offset32 = node->offset28;  // copy value before call
     * some_function(node);  // GP[-32744] + 8756, likely compute_node_bounds or similar
     * // Update global max children count
     * int *max_children = &curcontext->field_396;  // GP[-32664] + 396
     * if (*max_children < node->offset28) {
     * *max_children = node->offset28;
     * }
     * child_ptr = 0;
     * node->offset72 = 0.0f;
     * if (node->offset20 <= 0) {  // subdirectory count?
     * goto exit;  // 0x412940
     * }
     * // Continue processing subdirectories...
     * ```
     * The GP indirect call at offset -32744 + 8756 likely resolves to a tree traversal or bounds computation function. The global at curcontext+396 appears to track the maximum number of children across all nodes (possibly for layout/spacing calculations).
     */
halt_baddata();
}
