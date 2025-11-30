/**
 * cmy_to_rgb
 *
 * Extracted from fsn.c lines 76951-76964
 * Category: Other
 */

void cmy_to_rgb(double param_1,double param_2)

{
  uint in_register_00001000;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  
  *in_stack_00000018 =
       (float)((double)((ulonglong)in_register_00001000 << 0x20) - (double)(float)param_1);
  *in_stack_0000001c =
       (float)((double)((ulonglong)in_register_00001000 << 0x20) - (double)(float)param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
