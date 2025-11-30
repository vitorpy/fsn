/**
 * FUN_00410f30
 *
 * Extracted from fsn.c lines 52113-52119
 * Ghidra address: 0x00410f30
 * Category: UI
 */

void FUN_00410f30(void)

{
  XtDestroyWidget();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
