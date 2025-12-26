/**
 * createCopyright
 *
 * Extracted from fsn.c lines 67053-67074
 * Category: UI
 */

void createCopyright(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(param_2 + param_3 * 8);
  *puVar1 = 0xe3f3d1b;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)(param_2 + (param_3 + 1) * 8);
  *puVar1 = 0xe3f3d12;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)(param_2 + (param_3 + 2) * 8);
  puVar1[1] = s_FSN_the_3D_File_System_Navigator_100079c4;
  *puVar1 = 0xf66187b;
  DAT_10016e10 = XmCreateText(param_1,"copyright",param_2,param_3 + 3);
  XtManageChild(DAT_10016e10);
  uVar2 = XtWindow(DAT_10016e10);
  XRaiseWindow(display,uVar2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042aec8):
     * Function: createCopyright
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Stores widget result to global (offset 0x6e10 from base), calls XtManageChild on it, then calls XDefineCursor with the widget's window and a cursor.
     * **2. C pseudocode:**
     * ```c
     * // After jalr returns widget in v0:
     * Widget w = v0;                          // 42af5c: move a0,v0
     * DAT_10006e10 = w;                       // 42af68-6c: store to base+0x6e10
     * XtManageChild(w);                       // 42af70-7c: gp-31864 = XtManageChild
     * Window win = XtWindow(DAT_10006e10);    // 42af88-98: gp-31896 = XtWindow
     * XDefineCursor(display, win, cursor);    // 42afa4-b4: gp-32388 = XDefineCursor
     * return;
     * ```
     * GP offset resolution:
     * - gp-32660 (0x806c) = base pointer for globals
     * - gp-31864 (0x8388) = XtManageChild
     * - gp-31896 (0x8368) = XtWindow
     * - gp-30204 (0x8a04) = display pointer
     * - gp-32388 (0x817c) = XDefineCursor
     */
halt_baddata();
}
