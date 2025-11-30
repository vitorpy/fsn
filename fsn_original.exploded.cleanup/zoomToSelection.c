/**
 * zoomToSelection
 *
 * Extracted from fsn.c lines 60121-60132
 * Category: Input
 */

void zoomToSelection(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    FUN_00427870(*(undefined4 *)(curcontext + 0x44),*(undefined4 *)(curcontext + 0x48));
  }
  else {
    FUN_0041aeec(*(undefined4 *)(curcontext + 0x44),*(undefined4 *)(curcontext + 0x48));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
