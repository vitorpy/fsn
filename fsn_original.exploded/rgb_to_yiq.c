/**
 * rgb_to_yiq
 *
 * Extracted from fsn.c lines 77157-77181
 * Category: Other
 */

void rgb_to_yiq(double param_1,double param_2)

{
  undefined8 in_f6;
  double dVar1;
  undefined8 in_f8;
  double dVar2;
  undefined4 in_register_00001090;
  undefined4 in_stack_00000014;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  
  dVar2 = (double)(float)(double)CONCAT44((int)((ulonglong)in_f8 >> 0x20),in_stack_00000014);
  dVar1 = (double)CONCAT44(in_register_00001090,0xc28f5c29) * dVar2;
  *in_stack_00000018 =
       (float)((double)(float)param_1 * (double)CONCAT44(in_register_00001090,0x33333333) +
               (double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),0xae147ae1) * (double)(float)param_2
              + dVar1);
  *in_stack_0000001c =
       (float)(((double)(float)param_1 * (double)CONCAT44(in_register_00001090,0x33333333) -
               (double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),0x1eb851ec) * (double)(float)param_2
               ) - (double)CONCAT44(in_register_00001090,0x47ae147b) * dVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
