/**
 * yiq_to_rgb
 *
 * Extracted from fsn.c lines 61316-61339
 * Category: Other
 */

void yiq_to_rgb(double param_1,double param_2)

{
  undefined4 uVar1;
  undefined8 in_f8;
  undefined8 in_f18;
  double dVar2;
  undefined4 in_stack_00000014;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  
  uVar1 = (undefined4)((ulonglong)in_f8 >> 0x20);
  dVar2 = (double)(float)param_1 +
          (double)CONCAT44((int)((ulonglong)in_f18 >> 0x20),0x8cc14403) * (double)(float)param_2 +
          (double)CONCAT44(uVar1,0x1c68ec53) *
          (double)(float)(double)CONCAT44(uVar1,in_stack_00000014);
  *in_stack_00000018 = (float)dVar2;
  *in_stack_0000001c =
       (float)((double)(float)param_1 + (double)CONCAT44(uVar1,0xba6266fd) * (double)(float)param_2
              + (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),0xd234eb9a) *
                (double)(float)(double)CONCAT44(uVar1,in_stack_00000014));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
