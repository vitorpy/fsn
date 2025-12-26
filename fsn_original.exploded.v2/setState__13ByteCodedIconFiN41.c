/**
 * setState__13ByteCodedIconFiN41
 *
 * Extracted from fsn.c lines 73368-73379
 * Category: Filesystem
 */

void setState__13ByteCodedIconFiN41
               (undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
               undefined1 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004351f4):
     * Function: setState__13ByteCodedIconFiN41
     *
     * ## Analysis
     * **1. What the assembly does:**
     * Stores 5 byte values into consecutive memory locations at the address in a0. Parameters a1, a2, a3 come from registers; the 4th and 5th parameters come from stack offsets 16(sp) and 20(sp) - standard MIPS O32 calling convention for args 5 and 6.
     * **2. C pseudocode:**
     * ```c
     * void setState__13ByteCodedIconFiN41(char *icon, int s0, int s1, int s2, int s3, int s4) {
     * icon[0] = (char)s0;
     * icon[1] = (char)s1;
     * icon[2] = (char)s2;
     * icon[3] = (char)s3;
     * icon[4] = (char)s4;
     * }
     * ```
     * Note: The mangled name `setState__13ByteCodedIconFiN41` decodes to `ByteCodedIcon::setState(int, int, int, int, int)` - a C++ method setting 5 state bytes in a ByteCodedIcon object.
     */
halt_baddata();
}
