/**
 * FUN_00411230
 *
 * Extracted from fsn.c lines 52253-52302
 * Ghidra address: 0x00411230
 * Category: Other
 */

void FUN_00411230(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  ushort *local_28;
  undefined4 local_24;
  uint local_20;
  ushort local_2;
  
  if (DAT_10000170 == '\0') {
    gl_swap_buffers(1);
    FUN_0040a7ec();
    DAT_10000170 = '\x01';
    gl_swap_buffers(1);
  }
  local_28 = &local_2;
  local_2c = 0xf66160a;
  XtGetValues(DAT_1001664c,&local_2c,1);
  local_28 = (ushort *)(uint)(local_2 >> 1);
  local_2c = 0xe3f4572;
  local_24 = 0xe3f4566;
  local_20 = (uint)local_28;
  XtSetValues(*(undefined4 *)(altcontextwindows + 0xc),&local_2c,2);
  XtManageChild(*(undefined4 *)(altcontextwindows + 0xc));
  local_2c = 0xe3f4572;
  local_24 = 0xe3f4566;
  local_28 = (ushort *)0x1;
  local_20 = 1000;
  XtSetValues(*(undefined4 *)(altcontextwindows + 0xc),&local_2c,2);
  altcontext[0xc51] = 1;
  uVar1 = XtDisplay(*(undefined4 *)(altcontextwindows + 0x28));
  uVar2 = XtWindow(*(undefined4 *)(altcontextwindows + 0x28));
  XMapWindow(uVar1,uVar2);
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x24));
  uVar1 = XtWindow(*(undefined4 *)(curcontextwindows + 0x24));
  XRaiseWindow(display,uVar1);
  uVar1 = XtDisplay(*(undefined4 *)(curcontextwindows + 0x28));
  uVar2 = XtWindow(*(undefined4 *)(curcontextwindows + 0x28));
  XUnmapWindow(uVar1,uVar2);
  XtManageChild(*(undefined4 *)(altcontextwindows + 0x24));
  uVar1 = XtWindow(*(undefined4 *)(altcontextwindows + 0x24));
  XRaiseWindow(display,uVar1);
  gl_swap_buffers(1);
  FUN_0041c720();
  gl_swap_buffers(1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411230):
     * Function: FUN_00411230
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls XtVaSetValues on a widget with some value from v0, then alternates between calling swapbuffers(1) and an unknown function twice - classic double-buffer display update sequence.
     * **2. C pseudocode:**
     * ```c
     * XtVaSetValues(*(Widget*)DAT_at_gp_minus_30204, v0_result, NULL);  // gp-30204, via gp-32388
     * swapbuffers(1);      // gp-30868 (0x876c)
     * some_display_func(); // gp-31188 (0x862c) - likely
     * swapbuffers(1);      // called again
     * return;              // epilogue: restore ra, gp, sp+=96
     * ```
     * The pattern of swapbuffers(1) called twice with another GL function between suggests this is forcing a display refresh - possibly `gflush()` or `finish()` at gp-31188 to ensure rendering completes before the second swap.
     */
halt_baddata();
}
