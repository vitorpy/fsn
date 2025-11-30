/**
 * FUN_0040ef44
 *
 * Extracted from fsn.c lines 51150-51163
 * Ghidra address: 0x0040ef44
 * Category: Other
 */

void FUN_0040ef44(undefined4 param_1,int param_2,int param_3)

{
  if (*(int *)(param_3 + 8) != 0) {
    curcontext[0xc50] = 0;
    displayHeight = param_2;
    XtSetSensitive(DAT_1001666c,param_2 != 0);
    update_display();
    redraw_gl_scene();
    FUN_0042a8e4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
