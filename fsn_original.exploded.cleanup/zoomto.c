/**
 * zoomto
 *
 * Extracted from fsn.c lines 51661-51713
 * Category: Other
 */

void zoomto(double param_1,double param_2)

{
  undefined4 in_register_00001040;
  undefined4 in_register_00001080;
  undefined4 in_stack_00000014;
  short in_stack_0000001a;
  short in_stack_0000001e;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  FUN_0040f150(0,0);
  set_main_gl_window();
  if (in_stack_00000020 == *(int *)(curcontext + 0x3c)) {
    DAT_100165f0 = (float)param_1;
    DAT_100165f4 = (float)param_2;
    DAT_100165f8 = (float)(double)CONCAT44(in_register_00001080,in_stack_00000014);
    DAT_10016608 = in_stack_0000001a;
    DAT_1001660a = in_stack_0000001e;
    DAT_1001660c = in_stack_0000001a != *(short *)(curcontext + 0xc);
    DAT_1001660d = in_stack_0000001e != *(short *)(curcontext + 0xe);
    if (in_stack_00000020 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    DAT_1001660e = 0;
    gettimeofday((timeval *)&DAT_10016610,(__timezone_ptr_t)0x0);
    DAT_1001661c = in_stack_00000024;
    DAT_10016620 = in_stack_00000028;
    DAT_10016618 = DAT_100174e8;
    FUN_0040f150(FUN_0040fbb0,&DAT_100165f0);
  }
  else {
    if (DAT_10017492 != '\0') {
      FUN_004101e4();
    }
    *(int *)(curcontext + 0x3c) = in_stack_00000020;
    if (in_stack_00000020 != 0) {
      FUN_0041d69c();
    }
    *(float *)curcontext = (float)param_1;
    *(float *)(curcontext + 4) = (float)param_2;
    *(float *)(curcontext + 8) = (float)(double)CONCAT44(in_register_00001040,in_stack_00000014);
    *(short *)(curcontext + 0xc) = in_stack_0000001a;
    FUN_0040bfec();
    *(short *)(curcontext + 0xe) = in_stack_0000001e;
    FUN_0040c0cc();
    redraw_gl_scene();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
