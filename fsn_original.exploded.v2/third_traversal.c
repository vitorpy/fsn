/**
 * third_traversal
 *
 * Extracted from fsn.c lines 53165-53176
 * Category: Other
 */

void third_traversal(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 unaff_000010a0;
  
  uVar1 = FUN_004118b0();
  param_1->_field_24 /* was: *(undefined4 *)(param_1 + 0x24) */ = uVar1;
  param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ = (float)(double)CONCAT44(unaff_000010a0,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00412bb4):
     * Function: third_traversal
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * This is the end of a loop that computes layout positions for child nodes. It calculates a scaled width (divide by constant), stores it at offset 80, then computes a scaled/accumulated position stored at offset 76. Loop iterates through nodes at 16-byte intervals.
     * **2. C pseudocode:**
     * ```c
     * // Inside loop iterating over child nodes (s1 increments by 16 each iteration)
     * // s0 = child node pointer, s2 = parent/context pointer
     * // f22 = divisor constant, f2 = accumulator
     * float width_scaled = (float)((double)child_width / f22_divisor);
     * node->offset_80 = width_scaled;  // swc1 $f10, 80(s0)
     * float parent_val = *(float*)(s2 + 88);  // lwc1 $f6, 88(s2)
     * float pos = (double)width_scaled * (double)parent_val;
     * node->offset_76 = pos;  // swc1 $f10, 76(s0)
     * // accumulator f0 = f0 + f2 (carried to next iteration)
     * s1 += 16;
     * if (s1 != end_addr) goto loop_start;  // bne s1,v0,41337c
     * ```
     * The double-precision conversions (cvt.d.s/cvt.s.d) are for precision during intermediate calculations - common MIPS floating-point pattern. Offsets 76 and 80 in the node structure likely represent X position and width for layout purposes.
     */
halt_baddata();
}
