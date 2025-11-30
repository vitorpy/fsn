/**
 * FAMClose
 *
 * Extracted from fsn.c lines 61651-61657
 * Category: Other
 */

void FAMClose(int param_1)

{
  __dl__FPv(*(undefined4 *)(param_1 + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
