/**
 * FUN_0042a440
 *
 * Extracted from fsn.c lines 66383-66392
 * Ghidra address: 0x0042a440
 * Category: Other
 */

void FUN_0042a440(undefined4 param_1,undefined4 param_2,int param_3)

{
  set_gl_context(param_2,0);
  if (*(int *)(param_3 + 0x34) == 1) {
    XtUnmanageChild(*(undefined4 *)(curcontextwindows + 0x10));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
