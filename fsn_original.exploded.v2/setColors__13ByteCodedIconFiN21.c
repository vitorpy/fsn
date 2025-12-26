/**
 * setColors__13ByteCodedIconFiN21
 *
 * Extracted from fsn.c lines 73385-73392
 * Category: Other
 */

void setColors__13ByteCodedIconFiN21(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  param_1->file_count /* was: *(undefined4 *)(param_1 + 0xc) */ = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00435218):
     * Function: setColors__13ByteCodedIconFiN21
     *
     * **What it does:**
     * Stores three color values (a1, a2, a3) into consecutive fields of a ByteCodedIcon struct at offsets 8, 12, and 16 from the base pointer (a0).
     * **C equivalent:**
     * ```c
     * void setColors__13ByteCodedIconFiN21(ByteCodedIcon *icon, int color1, int color2, int color3) {
     * icon->color1 = color1;  // offset 8
     * icon->color2 = color2;  // offset 12
     * icon->color3 = color3;  // offset 16
     * }
     * ```
     * Note: The `sw a3,16(a0)` in the delay slot of `jr ra` executes before the return completes (MIPS branch delay slot behavior).
     */
halt_baddata();
}
