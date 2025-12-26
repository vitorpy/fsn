/**
 * FUN_004172d4
 *
 * Extracted from fsn.c lines 55078-55096
 * Ghidra address: 0x004172d4
 * Category: Other
 */

void FUN_004172d4(void)

{
  int iVar1;
  
  FUN_00415b48();
  iVar1 = (*(code *)*vinfop)();
  if (iVar1 == -1) {
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x004172d4):
     * Function: FUN_004172d4
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls `pushmatrix()` (GP-32744 + 23368 = IGL function), then loads `curcontext` from GP-30124, dereferences twice to get a function pointer from a vtable/callback, calls it, and if result == -1, branches to exit at 0x4174a8.
     * 2. **C pseudocode:**
     * ```c
     * pushmatrix();
     * context_ptr = curcontext;
     * callback_table = *context_ptr;      // First dereference: get pointer at curcontext[0]
     * func_ptr = *callback_table;         // Second dereference: get first function in table
     * result = func_ptr();                // Call it
     * if (result == -1) {
     * goto cleanup_and_return;        // Branch to 0x4174a8
     * }
     * // Continue with s4, s3, s2 loaded from GP offsets (more data pointers)
     * ```
     * The double-dereference pattern `**curcontext` suggests curcontext points to a struct whose first field is a vtable or callback array, and this calls the first callback (index 0). The -1 return check is typical for "end of data" or "error" sentinel.
     */
halt_baddata();
  }
  if (iVar1 - 1U < 8) {
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x004172d4):
     * Function: FUN_004172d4
     *
     * Looking at this assembly:
     * 1. **What it does:** This is a switch/jump table handler with 4 cases. Each case loads a function pointer from a vtable at different offsets (+20, +24, +28) and calls it. The vtable is accessed via `*s0` (a pointer to a struct with function pointers).
     * 2. **C pseudocode:**
     * ```c
     * struct vtable *vt = *s0;
     * switch (case_index) {
     * case 0: vt->func_at_14(); break;  // offset +20 = 0x14
     * case 1: vt->func_at_18(); break;  // offset +24 = 0x18
     * case 2: vt->func_at_1c(arg);break;// offset +28 = 0x1c, takes s2[0] as arg
     * }
     * t4 = *s0;  // reload after each call, continues at 417484
     * ```
     * This is a database record type dispatcher - each record type has its own handler function stored in a vtable. The `halt_baddata` likely occurred because Ghidra couldn't resolve the indirect `jalr t9` calls through the function pointer table.
     */
halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"garbage in database, quitting\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
