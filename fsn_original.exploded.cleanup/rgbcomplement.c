/**
 * rgbcomplement
 *
 * Extracted from fsn.c lines 77248-77261
 * Category: Other
 */

void rgbcomplement(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined8 in_f8;
  undefined4 local_14;
  undefined4 local_10;
  
  rgb_to_hsv((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44((int)((ulonglong)in_f8 >> 0x20),param_2));
  hsv_to_rgb((double)local_10,(double)local_14);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
