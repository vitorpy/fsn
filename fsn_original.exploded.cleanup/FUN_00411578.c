/**
 * FUN_00411578
 *
 * Extracted from fsn.c lines 52308-52316
 * Ghidra address: 0x00411578
 * Category: Other
 */

void FUN_00411578(void)

{
  XtUnmanageChild(*(undefined4 *)(altcontextwindows + 0xc));
  XtUnmanageChild(*(undefined4 *)(curcontextwindows + 0x24));
  altcontext[0xc51] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
