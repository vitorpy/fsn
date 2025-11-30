/**
 * irgb_to_rgb
 *
 * Extracted from fsn.c lines 61239-61248
 * Category: Other
 */

void irgb_to_rgb(int param_1,int param_2,undefined4 param_3,float *param_4,float *param_5)

{
  uint in_register_00001000;
  
  *param_4 = (float)((double)param_1 / (double)((ulonglong)in_register_00001000 << 0x20));
  *param_5 = (float)((double)param_2 / (double)((ulonglong)in_register_00001000 << 0x20));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
