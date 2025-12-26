/**
 * FUN_00412bc0
 *
 * Extracted from fsn.c lines 53182-53194
 * Ghidra address: 0x00412bc0
 * Category: Other
 */

void FUN_00412bc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 unaff_000010a0;
  
  uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x18b0))();
  param_1->_field_24 /* was: *(undefined4 *)(param_1 + 0x24) */ = uVar1;
  param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ = (float)(double)CONCAT44(unaff_000010a0,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00412bc0):
     * Function: FUN_00412bc0
     *
     * Looking at this MIPS assembly snippet:
     * **What it does:**
     * This is the end of a loop that computes scaled/normalized values for child nodes. It divides a float by f22 (a scale factor), stores result at offset 80 of a node struct, then computes another value using multiplication and addition, stores at offset 76, and loops back. The loop increments by 16 bytes per iteration.
     * **C pseudocode:**
     * ```c
     * // Inside loop iterating over child nodes (s1 increments by 16 each iteration)
     * // s2 = parent/context struct, s0 = current child node
     * do {
     * float val = (float)((double)some_value / scale_factor);  // f22 = scale
     * child_node->field_0x50 = val;  // offset 80 = 0x50
     * float factor = parent->field_0x58;  // offset 88
     * float result = (float)((double)val * (double)factor);
     * child_node->field_0x4c = result;  // offset 76 = 0x4c
     * // Also accumulates: running_sum += val (the add.d f6,f0,f2)
     * s1 += 16;
     * } while (s1 != end_marker);
     * // Epilogue: restore saved registers and return
     * ```
     * The offsets 0x4c (76) and 0x50 (80) in the child node likely correspond to computed display coordinates or scale factors for the 3D file block visualization.
     */
halt_baddata();
}
