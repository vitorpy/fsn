/**
 * color.c - Color space conversion functions
 *
 * Extracted from fsn.c (lines 61254-61558)
 * These appear to be IRIS GL color system functions.
 * Many are stubs - likely linked from an SGI library.
 */

#include "color.h"
#include "fsn_types.h"
#include <stdio.h>

/* External references from fsn.c globals */
extern void *PTR_SUB_10009e30;
extern void *PTR_SUB_10009e34;

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



// WARNING: Control flow encountered bad instruction data




// WARNING: Control flow encountered bad instruction data

void hls_to_rgb(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void hsv_to_rgb(double param_1, double param_2)

{
  (void)param_1; (void)param_2;
  /* TODO: Implement HSV to RGB conversion */
}



// WARNING: Control flow encountered bad instruction data

void hsb_to_rgb(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined4 in_register_00001040;

  hsv_to_rgb((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44(in_register_00001040,param_2));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

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



// WARNING: Control flow encountered bad instruction data

void rgb_to_rgb(double param_1,double param_2)

{
  float *in_stack_00000018;
  float *in_stack_0000001c;

  *in_stack_00000018 = (float)param_1;
  *in_stack_0000001c = (float)param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void rgb_to_cmy(double param_1,double param_2)

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



// WARNING: Control flow encountered bad instruction data

void rgb_to_irgb(double param_1,double param_2)

{
  uint in_register_00001000;
  uint in_register_00001010;
  double dVar1;
  byte in_fcsr;
  int *in_stack_00000018;
  int *in_stack_0000001c;

  dVar1 = (double)(float)param_1 * (double)((ulonglong)in_register_00001000 << 0x20) +
          (double)((ulonglong)in_register_00001010 << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar1 = ROUND(dVar1);
  }
  else {
    dVar1 = FLOOR(dVar1);
  }
  *in_stack_00000018 = (int)dVar1;
  dVar1 = (double)(float)param_2 * (double)((ulonglong)in_register_00001000 << 0x20) +
          (double)((ulonglong)in_register_00001010 << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar1 = ROUND(dVar1);
  }
  else {
    dVar1 = FLOOR(dVar1);
  }
  *in_stack_0000001c = (int)dVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void rgb_to_hls(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void rgb_to_hsv(double param_1, double param_2)

{
  (void)param_1; (void)param_2;
  /* TODO: Implement RGB to HSV conversion */
}



// WARNING: Control flow encountered bad instruction data

void rgb_to_hsb(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined4 in_register_00001040;

  rgb_to_hsv((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44(in_register_00001040,param_2));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

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



// WARNING: Control flow encountered bad instruction data

void setcolorsys(int param_1)

{
  if (param_1 - 1U < 5) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"bad color system no %d\n",param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void getcolorsys(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void torgb(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined4 in_register_00001040;

  (*(code *)PTR_SUB_10009e30)
            ((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44(in_register_00001040,param_2));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void fromrgb(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined4 in_register_00001040;

  (*(code *)PTR_SUB_10009e34)
            ((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44(in_register_00001040,param_2));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

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
