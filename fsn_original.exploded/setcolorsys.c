/**
 * setcolorsys
 *
 * Extracted from fsn.c lines 77187-77197
 * Category: Other
 */

void setcolorsys(int param_1)

{
  if (param_1 - 1U < 5) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"bad color system no %d\n",param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
