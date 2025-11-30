/**
 * highlightDir
 *
 * Extracted from fsn.c lines 64210-64221
 * Category: Filesystem
 */

void highlightDir(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    FUN_00426ef4();
  }
  else {
    FUN_0041aa04();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
