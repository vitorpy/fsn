/**
 * getword__FPcPl
 *
 * Extracted from fsn.c lines 78612-78620
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
