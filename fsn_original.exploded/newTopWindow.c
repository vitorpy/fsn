/**
 * newTopWindow
 *
 * Extracted from fsn.c lines 61486-61494
 * Category: Other
 */

void newTopWindow(undefined4 param_1)

{
  (&DAT_10016c10)[numtop] = param_1;
  numtop = numtop + 1;
  FUN_00421c14();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
