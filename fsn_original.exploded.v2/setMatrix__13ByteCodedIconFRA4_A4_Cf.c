/**
 * setMatrix__13ByteCodedIconFRA4_A4_Cf
 *
 * Extracted from fsn.c lines 73433-73439
 * Category: Other
 */

void setMatrix__13ByteCodedIconFRA4_A4_Cf(int param_1,void *param_2)

{
  bcopy(param_2,(void *)(param_1 + 0x20),0x40);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043535c):
     * Function: setMatrix__13ByteCodedIconFRA4_A4_Cf
     *
     * ## Analysis
     * **1. What it does:**
     * This is a C++ method `ByteCodedIcon::setMatrix(const float (&matrix)[4][4])`. It copies a 4x4 float matrix (64 bytes) from the input parameter to offset +32 in the object. The function swaps a0/a1 because the C++ `this` pointer comes first, then calls `memcpy(this+32, matrix, 64)`.
     * **2. C pseudocode:**
     * ```c
     * void ByteCodedIcon_setMatrix(ByteCodedIcon *this, float matrix[4][4]) {
     * memcpy(&this->matrix, matrix, 64);  // matrix is at offset 0x20 (32) in object
     * }
     * ```
     * The GP-relative load at `gp-32356` (0x819c) resolves to `memcpy`. The `addiu a1,a1,32` in the delay slot adds 32 to the source pointer, but looking more carefully: a0 (this) becomes the destination after the swap, and a1+32 suggests the source matrix is at offset 32 of whatever was passed - though this appears to be a calling convention quirk where the actual matrix data starts at +32 from the passed pointer.
     */
halt_baddata();
}
