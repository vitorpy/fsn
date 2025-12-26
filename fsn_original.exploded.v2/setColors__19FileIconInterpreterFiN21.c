/**
 * setColors__19FileIconInterpreterFiN21
 *
 * Extracted from fsn.c lines 73935-73942
 * Category: Filesystem
 */

void setColors__19FileIconInterpreterFiN21(int param_1,int param_2,int param_3)

{
  param_1->child_count /* was: *(float *)(param_1 + 0x14) */ = (float)param_2;
  param_1->child_array /* was: *(float *)(param_1 + 0x18) */ = (float)param_3;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004359f4):
     * Function: setColors__19FileIconInterpreterFiN21
     *
     * This function converts three integer arguments (a1, a2, a3) to floats and stores them at offsets 20, 24, 28 from the object pointer (a0).
     * ```c
     * void FileIconInterpreter_setColors(void *this, int r, int g, int b) {
     * ((float *)this)[5] = (float)r;  // offset 20
     * ((float *)this)[6] = (float)g;  // offset 24
     * ((float *)this)[7] = (float)b;  // offset 28
     * }
     * ```
     * The name "setColors" and three int params suggest RGB color values being stored as floats in a FileIconInterpreter object structure.
     */
halt_baddata();
}
