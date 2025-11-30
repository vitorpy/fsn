/**
 * setColors__19FileIconInterpreterFiN21
 *
 * Extracted from fsn.c lines 58238-58245
 * Category: Filesystem
 */

void setColors__19FileIconInterpreterFiN21(int param_1,int param_2,int param_3)

{
  *(float *)(param_1 + 0x14) = (float)param_2;
  *(float *)(param_1 + 0x18) = (float)param_3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
