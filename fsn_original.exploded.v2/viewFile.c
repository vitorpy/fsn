/**
 * viewFile
 *
 * Extracted from fsn.c lines 66227-66276
 * Category: Filesystem
 */

void viewFile(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  stat sStack_8c;
  void *pvStack_4;
  
  build_path_string((int)curcontext + 0x84c,param_1);
  strcat(curcontext + 0x84c,(char *)*param_2);
  iVar1 = stat(curcontext + 0x84c,&sStack_8c);
  if (iVar1 < 0) {
    show_error_dialog("cannot stat",(int)curcontext + 0x84c);
  }
  else {
    pvStack_4 = (void *)XtMalloc(sStack_8c.st_blksize + 1);
    iVar1 = open(curcontext + 0x84c,0);
    if (iVar1 < 0) {
      show_error_dialog("cannot open",(int)curcontext + 0x84c);
    }
    else {
      sVar2 = read(iVar1,pvStack_4,sStack_8c.st_blksize);
      if (sVar2 == sStack_8c.st_blksize) {
        *(undefined1 *)((int)pvStack_4 + sStack_8c.st_blksize) = 0;
        close(iVar1);
        XmTextSetString(*(undefined4 *)(curcontextwindows + 0x14),pvStack_4);
        XtFree(pvStack_4);
        iVar1 = access(curcontext + 0x84c,2);
        if (iVar1 < 0) {
          XtSetSensitive(*(undefined4 *)(curcontextwindows + 0x18),0);
          XmTextSetEditable(*(undefined4 *)(curcontextwindows + 0x14),0);
        }
        else {
          XtSetSensitive(*(undefined4 *)(curcontextwindows + 0x18),1);
          XmTextSetEditable(*(undefined4 *)(curcontextwindows + 0x14),1);
        }
        XtManageChild(*(undefined4 *)(curcontextwindows + 0x10));
        uVar3 = XtWindow(*(undefined4 *)(curcontextwindows + 0x10));
        XRaiseWindow(display,uVar3);
      }
      else {
        show_error_dialog("cannot read",(int)curcontext + 0x84c);
        close(iVar1);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429fc8):
     * Function: viewFile
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls XmTextGetString on curcontext->shellWidget (offset 16), then calls XmTextSetString on another widget with that string. Classic "copy text from one widget to another" pattern.
     * **2. C pseudocode:**
     * ```c
     * // GP-30332 = curcontext, GP-31864 = XmTextGetString, GP-31896 = XmTextGetString (again)
     * // GP-30204 = some widget ptr, GP-32388 = XmTextSetString
     * char *text = XmTextGetString(curcontext->shellWidget);  // offset 16 in context
     * char *text2 = XmTextGetString(curcontext->shellWidget); // redundant? or different field
     * XmTextSetString(someWidget, text2);
     * ```
     * Wait, let me re-read - the second call result (v0) becomes a1 (arg2), and a new widget is loaded for a0. So:
     * ```c
     * char *str = XmTextGetString(((Widget*)curcontext)[4]);  // curcontext + 0x10
     * XmTextSetString(targetWidget, str);
     * ```
     * The first XmTextGetString result at 42a278 appears unused (no move from v0 before next call), suggesting either:
     * - Dead code / Ghidra artifact
     * - Or the first call was something else (need to verify GP-31864 vs GP-31896)
     * Most likely intent: **Copy text content from context's text widget to another text widget.**
     */
halt_baddata();
}
