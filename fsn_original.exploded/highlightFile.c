/**
 * highlightFile
 *
 * Extracted from fsn.c lines 64383-64394
 * Category: Filesystem
 */

void highlightFile(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    FUN_0042757c();
  }
  else {
    FUN_0041ac8c();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
