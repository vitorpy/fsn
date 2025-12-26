/**
 * load_db
 *
 * Extracted from fsn.c lines 55054-55072
 * Category: Other
 */

void load_db(void)

{
  int iVar1;
  
  FUN_00415b48();
  iVar1 = (*(code *)*vinfop)();
  if (iVar1 == -1) {
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x004172c8):
     * Function: load_db
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function at GP-0x8018 offset (likely `topdir` or similar global pointer), then loads a vtable pointer from GP-0x8a54, calls the first vtable method (index 0), and returns -1 if that call returns -1.
     * 2. **C pseudocode:**
     * ```c
     * int load_db(void) {
     * some_init_func();  // GP-0x8018 + 0x5b48 offset
     * void **obj = *(void***)GP_8a54;  // s0 = global object ptr
     * int (*method)(void) = ((int(**)(void))(*obj))[0];  // vtable call
     * int result = method();
     * if (result == -1) {
     * return -1;  // early exit on failure
     * }
     * // continues at 0x417338...
     * s4 = GP_805c;  // load more globals
     * s3 = GP_8098;
     * ```
     * **Key observations:**
     * - GP-0x8018 + 0x5b48 = likely `FUN_00435b48` or an init routine
     * - GP-0x8a54 = global object pointer (possibly file/database handle)
     * - `t6 = *s0; t9 = *t6; jalr t9` = classic C++ vtable call pattern: `obj->vtable[0]()`
     * - Returns -1 on failure (s1 = -1, beq v0,s1 branches to epilogue)
     */
halt_baddata();
  }
  if (iVar1 - 1U < 8) {
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x004172c8):
     * Function: load_db
     *
     * Looking at this assembly:
     * 1. **What it does:** This is a vtable/dispatch table - loading a function pointer from different offsets (16, 20, 24, 28) of a struct pointed to by s0, then calling it via t9. Each block branches to the same exit point at 0x417484. This is a switch statement dispatching through method pointers.
     * 2. **C pseudocode:**
     * ```c
     * struct handler *h = *s0;  // s0 holds pointer to handler struct pointer
     * switch (cmd) {
     * case X:   h->func_16();  break;  // offset 16
     * case Y:   h->func_20();  break;  // offset 20
     * case Z:   h->func_24();  break;  // offset 24
     * case W:   h->func_28(arg);  break;  // offset 28, with a0 = *s2
     * }
     * // falls through to load t4 = *s0 at 0x417484
     * ```
     * The pattern `lw t9,N(reg); jalr t9` is indirect call through vtable at offset N. The `lw gp,40(sp)` after each call restores the global pointer (standard MIPS PIC ABI). Last case at 0x41742c also loads a0 from s2 before the call, passing an argument.
     */
halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"garbage in database, quitting\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
