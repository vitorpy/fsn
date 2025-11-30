/**
 * rgb_to_hsb
 *
 * Extracted from fsn.c lines 61438-61448
 * Category: Other
 */

void rgb_to_hsb(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined4 in_register_00001040;
  
  rgb_to_hsv((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44(in_register_00001040,param_2));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
