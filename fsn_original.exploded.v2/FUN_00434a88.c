/**
 * FUN_00434a88
 *
 * Extracted from fsn.c lines 72959-72990
 * Ghidra address: 0x00434a88
 * Category: Other
 */

void FUN_00434a88(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  iVar3 = TheFileIconInterpreter /* was: *(int *)(unaff_gp + -0x7614) */ /* -> TheFileIconInterpreter */;
  iVar2 = *param_1;
  (**(code **)(unaff_gp + -0x7764) /* -> FUN_004357ec */)(iVar3) /* =FUN_004357ec */;
  if ((*(int *)(iVar3 + 0x240) == 0) && (*(int *)(iVar3 + 0x23c) == 0)) {
    (**(code **)(unaff_gp + -0x7760) /* -> FUN_00435938 */)(iVar3) /* =FUN_00435938 */;
    (**(code **)(unaff_gp + -0x77b0) /* -> FUN_004349f8 */)(param_1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x65e0) /* =FUN_004349f8 */;
  }
  else {
    for (; iVar2 != 0; iVar2 = iVar2->display_mode /* was: *(int *)(iVar2 + 0x68) */) {
      if ((((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar3 + 0x240) == iVar2->pos_x /* was: *(int *)(iVar2 + 0x34) */)) &&
          (*(int *)(iVar3 + 0x230) != 0)) &&
         (iVar1 = (**(code **)(unaff_gp + -0x7754) /* -> FUN_00435a28 */)
                            (iVar3,*(int *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                             iVar2->file_array /* was: *(undefined4 *)(iVar2 + 0x10) */) /* =FUN_00435a28 */, iVar1 != 0)) {
        (**(code **)(unaff_gp + -0x7760) /* -> FUN_00435938 */)(iVar3) /* =FUN_00435938 */;
        (**(code **)(unaff_gp + -0x779c) /* -> FUN_00435034 */)(0,iVar2) /* =FUN_00435034 */;
            /*
     * BADDATA ANALYSIS (from binary @ 0x00434a88):
     * Function: FUN_00434a88
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads a global object pointer (s1), calls a function on it, checks two fields at offsets 572 and 576. If both are zero, calls another function, then calls a third function with the original argument and a string from .rodata.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_00434a88(void *arg) {
     * void *obj = DAT_gp_minus_30228;  // s1 = global object pointer
     * void *item = *(void **)arg;      // s0 = *arg (unused in this fragment)
     * func_gp_minus_30564(obj);        // first call via t9
     * if (obj->field_576 == 0 && obj->field_572 == 0) {
     * func_gp_minus_30560(obj);    // second call
     * func_gp_minus_30640(arg, "some_string");  // third call with rodata string at gp-32660 + (-26080)
     * }
     * // continues...
     * }
     * ```
     * The symbol `FindIconByName__14ByteCodeLoaderFPc` in the branch target suggests this is C++ ByteCodeLoader::FindIconByName(char*) - the fields at 572/576 are likely icon cache state flags.
     */
halt_baddata();
      }
    }
    (**(code **)(unaff_gp + -0x7760) /* -> FUN_00435938 */)(iVar3) /* =FUN_00435938 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434a88):
     * Function: FUN_00434a88
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Checks if s1[560] (offset 0x230) is non-null, then calls three functions via GP-indirect calls: first with (s1, s0[8], s0[16]), if that returns non-zero calls another with (s1), then calls a third with (0, s0). Finally loads s0 = s0[104] (offset 0x68) for linked list traversal.
     * **C pseudocode:**
     * ```c
     * if (t9 == t0) {  // previous comparison
     * if (s1->field_230 != NULL) {
     * // GP[-30548] = likely a matching/filter function
     * if (func_88ac(s1, s0->field_8, s0->field_10) != 0) {
     * // GP[-30560] = likely cleanup or state update
     * func_88a0(s1);
     * // GP[-30620] = likely icon registration/return
     * func_8864(NULL, s0);
     * return;  // branch to epilogue
     * }
     * }
     * }
     * s0 = s0->next;  // offset 0x68 = linked list next pointer
     * // loop back to 434b14
     * ```
     * The function name "FindIconByName" and the structure suggest s0 is an icon list node being traversed, s1 is a ByteCodeLoader object, and this block handles the case where a matching icon is found (registers it and returns).
     */
halt_baddata();
}
