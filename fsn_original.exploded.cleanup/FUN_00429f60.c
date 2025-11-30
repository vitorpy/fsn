/**
 * FUN_00429f60
 *
 * Extracted from fsn.c lines 66214-66221
 * Ghidra address: 0x00429f60
 * Category: Other
 */

void FUN_00429f60(undefined4 param_1,undefined4 param_2)

{
  set_gl_context(param_2,0);
  XtUnmanageChild(*(undefined4 *)(curcontextwindows + 0x10));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
