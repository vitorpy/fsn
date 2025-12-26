/**
 * setState__19FileIconInterpreterFiN41
 *
 * Extracted from fsn.c lines 73919-73929
 * Category: Filesystem
 */

void setState__19FileIconInterpreterFiN41
               (float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  *param_1 = (float)param_2;
  param_1[1] = (float)param_3;
  param_1[2] = (float)param_4;
  param_1[3] = (float)param_5;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043599c):
     * Function: setState__19FileIconInterpreterFiN41
     *
     * ## Analysis
     * **What it does:**
     * Converts 5 integer arguments to floats and stores them at consecutive offsets in a structure pointed to by a0. Arguments a1-a3 come from registers, the 4th and 5th arguments come from stack (sp+16, sp+20).
     * **C pseudocode:**
     * ```c
     * void setState__19FileIconInterpreterFiN41(float *dest, int v1, int v2, int v3, int v4, int v5) {
     * dest[0] = (float)v1;
     * dest[1] = (float)v2;
     * dest[2] = (float)v3;
     * dest[3] = (float)v4;
     * dest[4] = (float)v5;
     * }
     * ```
     * The mangled C++ name `setState__19FileIconInterpreterFiN41` decodes to: `FileIconInterpreter::setState(int, int, int, int, int)` - a method on a 19-character class name taking 5 ints (FiN41 = int repeated 4+1 times).
     */
halt_baddata();
}
