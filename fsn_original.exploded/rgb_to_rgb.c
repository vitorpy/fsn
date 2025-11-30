/**
 * rgb_to_rgb
 *
 * Extracted from fsn.c lines 77048-77058
 * Category: Other
 */

void rgb_to_rgb(double param_1,double param_2)

{
  float *in_stack_00000018;
  float *in_stack_0000001c;
  
  *in_stack_00000018 = (float)param_1;
  *in_stack_0000001c = (float)param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
