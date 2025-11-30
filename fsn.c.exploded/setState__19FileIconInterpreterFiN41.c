/**
 * setState__19FileIconInterpreterFiN41
 *
 * Extracted from fsn.c lines 58222-58232
 * Category: Filesystem
 */

void setState__19FileIconInterpreterFiN41
               (float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  *param_1 = (float)param_2;
  param_1[1] = (float)param_3;
  param_1[2] = (float)param_4;
  param_1[3] = (float)param_5;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
