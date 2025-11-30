/**
 * pickPointer
 *
 * Extracted from fsn.c lines 64005-64016
 * Category: Input
 */

void pickPointer(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    FUN_0042631c();
  }
  else {
    FUN_0041a358();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
