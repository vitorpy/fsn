/**
 * FUN_0041d418
 *
 * Extracted from fsn.c lines 58949-58974
 * Ghidra address: 0x0041d418
 * Category: Other
 */

void FUN_0041d418(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */;
  if (iVar3 != 0) {
    iVar2 = 0;
    if (altcontext[0xc51] != '\0') {
      iVar2 = *(int *)(altcontext + 0x44);
    }
    if (((iVar2 != iVar3) && (-1 < iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 0xb)) &&
       (-1 < iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 0xe)) {
      if (*(int *)(iVar3 + 100) != 0) {
        XtRemoveTimeOut();
        iVar3 = curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */;
      }
      uVar1 = XtAppAddTimeOut(app_context,DAT_1001749c * 1000,check_unmonitor_dp,iVar3);
      *(undefined4 *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 100) = uVar1;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041d418):
     * Function: FUN_0041d418
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Loads a value from a global pointer chain, computes an array index using the formula `((x * 31) * 4 + x) * 8` (equivalent to `x * 248`), calls a function via GP indirect (likely allocation/lookup), and stores the result at offset 100 of a context structure.
     * **C pseudocode:**
     * ```c
     * // t2 = *some_global_ptr
     * // a3 = t2->field_0x44 (unused in this snippet)
     * int index = *(int*)(global_8a24 + 12);  // curcontext[3] or similar
     * int offset = index * 248;               // (index*31*4 + index)*8 = index*248
     * void *result = some_func(global_8a00, offset, global_8634);
     * curcontext->field_0x44->field_0x64 = result;  // store at offset 100
     * ```
     * The `*248` stride suggests indexing into an array of 248-byte structures (possibly file/directory entries). The GP offsets -30172, -30208, -31180 resolve to globals like curcontext, topdir, or similar navigation state.
     */
halt_baddata();
}
