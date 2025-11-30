/**
 * FUN_0042c970
 *
 * Extracted from fsn.c lines 67804-67825
 * Ghidra address: 0x0042c970
 * Category: Other
 */

void FUN_0042c970(uint param_1)

{
  if ((param_1 & 1) != 0) {
    update_display();
  }
  if ((param_1 & 4) != 0) {
    FUN_00428b6c();
  }
  if ((param_1 & 0x10) != 0) {
    set_main_gl_window();
    *(short *)(curcontext + 0x10) = (short)DAT_100174e0;
    FUN_0040bfa0();
  }
  if ((param_1 & 2) != 0) {
    redraw_gl_scene();
    FUN_0042a8e4();
    FUN_004207b4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
