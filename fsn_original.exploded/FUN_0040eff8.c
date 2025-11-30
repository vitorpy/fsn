/**
 * FUN_0040eff8
 *
 * Extracted from fsn.c lines 51169-51180
 * Ghidra address: 0x0040eff8
 * Category: Other
 */

void FUN_0040eff8(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 8) != 0) {
    displayDirectoryHeight = param_2;
    update_display();
    redraw_gl_scene();
    FUN_0042a8e4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
