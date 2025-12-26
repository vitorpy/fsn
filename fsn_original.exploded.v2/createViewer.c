/**
 * createViewer
 *
 * Extracted from fsn.c lines 66077-66125
 * Category: UI
 */

void createViewer(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = XmCreateForm(param_1,"viewer",param_2,param_3);
  *(undefined4 *)(curcontextwindows + 0x10) = uVar1;
  install_help_callback(*(undefined4 *)(curcontextwindows + 0x10),&viewerHelp);
  *param_2 = 0xe3f3701;
  param_2[1] = 1;
  param_2[2] = 0xe3f40cb;
  param_2[3] = 1;
  param_2[4] = 0xe3f46dd;
  param_2[5] = 1;
  uVar1 = XmCreateRowColumn(*(undefined4 *)(curcontextwindows + 0x10),"viewerButtons",param_2,3);
  XtManageChild(uVar1);
  XtAddEventHandler(uVar1,4,0,FUN_0042a440,*(undefined4 *)(curcontextwindows + 8));
  uVar2 = XmCreatePushButton(uVar1,&DAT_1000e928,param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,FUN_00429f60,*(undefined4 *)(curcontextwindows + 8));
  uVar2 = XmCreatePushButton(uVar1,&DAT_1000e930,param_2,0);
  XtAddCallback(uVar2,0xe3f35b3,editCB,*(undefined4 *)(curcontextwindows + 8));
  XtManageChild(uVar2);
  uVar2 = XmCreatePushButton(uVar1,"saveFile",param_2,0);
  *(undefined4 *)(curcontextwindows + 0x18) = uVar2;
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x18));
  XtAddCallback(*(undefined4 *)(curcontextwindows + 0x18),0xe3f35b3,FUN_0042a2d8,
                *(undefined4 *)(curcontextwindows + 8));
  *param_2 = 0xe3f4b1d;
  param_2[1] = 1;
  param_2[2] = 0xe3f40cb;
  param_2[3] = 1;
  param_2[4] = 0xe3f46dd;
  param_2[5] = 1;
  param_2[6] = 0xe3f3701;
  param_2[7] = 3;
  param_2[8] = 0xe3f3753;
  param_2[9] = uVar1;
  param_2[10] = 0xe3f3d12;
  param_2[0xb] = 0;
  uVar1 = XmCreateScrolledText(*(undefined4 *)(curcontextwindows + 0x10),"viewerText",param_2,6);
  *(undefined4 *)(curcontextwindows + 0x14) = uVar1;
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x14),4,0,myContext,
                    *(undefined4 *)(curcontextwindows + 8));
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x14));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429c38):
     * Function: createViewer
     *
     * Looking at this assembly:
     * 1. **What it does:** Creates a widget (likely XmScrolledWindow), stores it at offset 20 of the context structure, then calls XtVaSetValues to configure it with 4 resources including the work window from offset 8, and finally calls XtManageChild on the new widget.
     * 2. **C pseudocode:**
     * ```c
     * // t9 loaded earlier points to XmCreateScrolledWindow (GP offset -31860 at 429f08)
     * // a0=parent, a1=name string, a2=s0 (arglist), a3=6 (arg count)
     * Widget scrolled = XmCreateScrolledWindow(parent, "viewer", args, 6);
     * context->scrolledWindow = scrolled;  // offset 20
     * // XtVaSetValues(scrolled, XmNworkWindow=4?, NULL, context->glWidget[8], stack_arg)
     * XtVaSetValues(scrolled, XmNworkWindow, NULL, context->workWindow, NULL);
     * // XtManageChild(scrolled)
     * XtManageChild(context->scrolledWindow);
     * ```
     * **GP offsets used:**
     * - GP-31860 (0x838c): XmCreateScrolledWindow
     * - GP-30844 (0x8784): XmNworkWindow resource constant
     * - GP-31864 (0x8388): XtManageChild
     */
halt_baddata();
}
