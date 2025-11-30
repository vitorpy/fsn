/**
 * hsb_to_rgb
 *
 * Extracted from fsn.c lines 61300-61310
 * Category: Other
 */

void hsb_to_rgb(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined4 in_register_00001040;
  
  hsv_to_rgb((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44(in_register_00001040,param_2));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
