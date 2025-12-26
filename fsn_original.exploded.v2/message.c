/**
 * message
 *
 * Extracted from fsn.c lines 51993-52015
 * Category: UI
 */

void message(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  puVar1 = (undefined4 *)XtMalloc(0xc);
  uVar2 = XmStringCreateSimple(param_1);
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = DAT_10000020;
  uStack_54 = 0xe3f40b5;
  uStack_50 = *puVar1;
  DAT_10000020 = puVar1;
  XtSetValues(message_widget,&uStack_54,1);
  if (param_2 != 0) {
    XtAppAddTimeOut(app_context,param_2,deleteMessage,puVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00410d98):
     * Function: message
     *
     * Looking at the assembly:
     * 1. **What it does:** Finalizes a message structure (zeroes byte at offset 8, stores length at offset 4, links to list), then calls XtVaSetValues to update a widget with the message. If a callback parameter exists, calls XtAddCallback on the message widget.
     * 2. **C pseudocode:**
     * ```c
     * s0->text[len] = '\0';           // sb zero,8(s0) - null terminate
     * s0->length = len;               // sw t6,4(s0)
     * *list_tail = s0;                // sw s0,0(v1) - link to message list
     * // Build XtVaSetValues args on stack
     * args[0] = XmNlabelString;       // 0x1d4d = 7501
     * args[1] = s0->xmstring;         // from s0+0
     * XtVaSetValues(curcontext->messageWidget, &args, 1);
     * if (callback != NULL) {         // beqz a1,410e60
     * XtAddCallback(topLevelShell, XmNdestroyCallback, callback, s0);
     * }
     * return s0;
     * ```
     * The magic number 7501 (0x1d4d) is XmNlabelString resource. GP offsets: -32660 is curcontext, -31936 is XtVaSetValues, -30208 is topLevelShell, -32404 is XtAddCallback, -31388 is XmNdestroyCallback.
     */
halt_baddata();
}
