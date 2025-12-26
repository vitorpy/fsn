/**
 * FUN_00435938
 *
 * Extracted from fsn.c lines 73896-73913
 * Ghidra address: 0x00435938
 * Category: Other
 */

void FUN_00435938(int param_1)

{
  int unaff_gp;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
    /* TODO: GP:-0x7da4 */ (**(code **)(unaff_gp + -0x7da4) /* -> EXTERNAL_0x0facb588 */)(*(undefined4 *)(param_1 + 0x238));
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00435938):
     * Function: FUN_00435938
     *
     * ## Analysis of FUN_00435938 (UnSetFile__19FileIconInterpreterFv)
     * **What it does:**
     * If field at offset 572 (0x23c) is non-null, calls a function via GP indirect (offset -32164/0x825c) with the value at offset 568 as argument. Then clears 8 fields in the object at offsets 544, 552, 556, 560, 564, 572, 576, and 544 (resetting file icon state).
     * **C pseudocode:**
     * ```c
     * void FileIconInterpreter_UnSetFile(FileIconInterpreter *this) {
     * if (this->field_23c != NULL) {
     * // GP[-32164] is likely a destructor or release function
     * (*gp_func_825c)(this->field_238);
     * }
     * this->field_220 = 0;  // offset 544
     * this->field_228 = 0;  // offset 552
     * this->field_22c = 0;  // offset 556
     * this->field_230 = 0;  // offset 560
     * this->field_234 = 0;  // offset 564
     * this->field_23c = 0;  // offset 572
     * this->field_240 = 0;  // offset 576
     * }
     * ```
     * **Notes:**
     * - This is a C++ method (mangled name: `UnSetFile__19FileIconInterpreterFv` = `FileIconInterpreter::UnSetFile(void)`)
     * - The GP indirect call at 0x825c needs resolution via your `resolve_got.py` script
     * - The object appears to be a FileIconInterpreter class with file-related state fields around offsets 0x220-0x240
     */
halt_baddata();
}
