/**
 * findzoom
 *
 * Extracted from fsn.c lines 63969-63980
 * Category: Other
 */

void findzoom(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    FUN_004268e0();
  }
  else {
    FUN_0041a648();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
