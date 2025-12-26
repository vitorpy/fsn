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
  if (in_stack_00000020 == curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */) {
    DAT_100165f0 = (float)param_1;
    DAT_100165f4 = (float)param_2;
    DAT_100165f8 = (float)(double)CONCAT44(in_register_00001080,in_stack_00000014);
    DAT_10016608 = in_stack_0000001a;
    DAT_1001660a = in_stack_0000001e;
    DAT_1001660c = in_stack_0000001a != curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */;
    DAT_1001660d = in_stack_0000001e != curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */;
    if (in_stack_00000020 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00410258):
     * Function: zoomto
     *
     * Looking at this assembly:
     * 1. **What it does**: Saves callee-saved FP registers, copies double args ($f12→$f20, $f14→$f22), calls two functions via GP-indirect (likely `stopfly(0,0)` at gp-32744 and another at gp-31460), then loads `curcontext` and accesses offset 60 (0x3c).
     * 2. **C pseudocode**:
     * ```c
     * void zoomto(double target_x, double target_z, int param3) {
     * double saved_x = target_x;  // $f22/$f23
     * double saved_z = target_z;  // $f20/$f21
     * stopfly(0, 0);              // gp-32744 offset -3760 adjustment
     * some_func();                // gp-31460
     * int *ctx = curcontext;      // gp-30340 → curcontext
     * int val = ctx[15];          // offset 60 = index 15 (0x3c/4)
     * // ... continues with zoom animation setup
     * ```
     * The gp-32744 with addiu -3760 points to `stopfly`. The gp-31460 likely points to another animation/state function. The curcontext[15] (offset 0x3c) is the camera or view state field used for zoom targeting.
     */
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
    curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ = in_stack_00000020;
    if (in_stack_00000020 != 0) {
      FUN_0041d69c();
    }
    *(float *)curcontext = (float)param_1;
    *(float *)(curcontext + 4) = (float)param_2;
    *(float *)(curcontext + 8) = (float)(double)CONCAT44(in_register_00001040,in_stack_00000014);
    curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */ = in_stack_0000001a;
    FUN_0040bfec();
    curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */ = in_stack_0000001e;
    FUN_0040c0cc();
    redraw_gl_scene();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00410258):
     * Function: zoomto
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if a float at offset 4 from v0 equals f20 (likely 0.0). If equal, sets flag at gp-32660+0x660e to 0 and jumps away. If not equal, sets flag to 1, then checks if the float is less than f20. If less, stores f0/f2 to globals and continues processing.
     * 2. **C pseudocode:**
     * ```c
     * float val = obj->field_4;  // v0+4
     * if (val == target_val) {   // f20
     * zoom_direction = 0;    // DAT at gp-32660+0x660e
     * goto done;
     * }
     * zoom_direction = 1;
     * if (val < target_val) {
     * zoom_start_x = f0;     // gp-32660+0x65fc
     * zoom_start_y = f2;     // gp-32660+0x6600
     * // continues to load more values...
     * }
     * ```
     * The gp-32660 base with offsets 0x660d, 0x660e, 0x65fc, 0x6600 suggests a structure or adjacent globals controlling zoom animation state (direction flag, start coordinates).
     */
halt_baddata();
}
