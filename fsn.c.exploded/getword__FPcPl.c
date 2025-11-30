/**
 * getword__FPcPl
 *
 * Extracted from fsn.c lines 62874-62882
 * Category: Other
 */

void getword__FPcPl(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
