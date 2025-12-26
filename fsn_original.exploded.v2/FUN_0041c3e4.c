/**
 * FUN_0041c3e4
 *
 * Extracted from fsn.c lines 58287-58358
 * Ghidra address: 0x0041c3e4
 * Category: Memory
 */

void FUN_0041c3e4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_100;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_cc;
  char acStack_c8 [200];
  
  if (curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ == 0) {
    iVar4 = curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */;
    if (iVar4 == 0) {
      local_f0 = blankXmString;
      local_f4 = 0xe3f40b5;
      XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&local_f4,1);
    }
    else {
      if (iVar4->render_flags /* was: *(int *)(iVar4 + 0x74) */ << 0xd < 0) {
        sprintf(acStack_c8,"pruned");
      }
      else {
        uVar1 = FUN_0041c1c4(*(undefined4 *)(iVar4 + 8));
        iVar4 = curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */;
        if (iVar4->render_flags /* was: *(int *)(iVar4 + 0x74) */ << 0xb < 0) {
          pcVar3 = ", monitored";
        }
        else {
          pcVar3 = "";
        }
        sprintf(acStack_c8,"%s %d directories, %d files %s",uVar1,iVar4->child_count /* was: *(undefined4 *)(iVar4 + 0x14) */,
                iVar4->file_count /* was: *(undefined4 *)(iVar4 + 0xc) */,pcVar3);
      }
      local_f0 = XmStringCreate(acStack_c8,&default_charset);
      local_f4 = 0xe3f40b5;
      local_cc = local_f0;
      XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&local_f4,1);
      XmStringFree(local_cc);
    }
  }
  else {
    uVar1 = FUN_0041c1c4(*(undefined4 *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 8));
    uVar2 = FUN_00411e38(*(undefined4 *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x10));
    iVar4 = curcontext->current_file /* was: *(int *)(curcontext + 0x48) */;
    if ((*(uint *)(iVar4 + 8) & 0xf000) == 0xa000) {
      local_100 = "link to ";
    }
    else {
      local_100 = "";
    }
    if (iVar4->_field_20 /* was: *(int *)(iVar4 + 0x20) */ == 0) {
      pcVar3 = "unknown type";
      uVar5 = iVar4->file_count /* was: *(undefined4 *)(iVar4 + 0xc) */;
    }
    else {
      pcVar3 = (char *)FUN_00433c08(iVar4->_field_20 /* was: *(int *)(iVar4 + 0x20) */,3);
      uVar5 = *(undefined4 *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0xc);
    }
    sprintf(acStack_c8,"%s   %d bytes, %d days old, %s%s",uVar1,uVar5,uVar2,local_100,pcVar3);
    local_f0 = XmStringCreate(acStack_c8,&default_charset);
    local_f4 = 0xe3f40b5;
    local_cc = local_f0;
    XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&local_f4,1);
    XmStringFree(local_cc);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041c3e4):
     * Function: FUN_0041c3e4
     *
     * Looking at the MIPS assembly:
     * **1. What it does:**
     * This is an XtVaSetValues call on a widget, setting XmNlabelString to a compound string, followed by XmStringFree. The second block (at 41c6cc) is an alternate path that sets a value using curcontext and curcontextwindows.
     * **2. C pseudocode:**
     * ```c
     * // Path 1 (from 41c69c): After creating compound string in local var
     * XtVaSetValues(widget, XmNlabelString, local_xmstring, NULL);  // jalr at 41c6a0
     * XmStringFree(local_xmstring);  // jalr at 41c6b8, gp-32392 = XmStringFree
     * goto epilogue;
     * // Path 2 (from 41c6cc): Alternate label update
     * // t3 = curcontext (gp-30200)
     * // t4 = curcontextwindows (gp-30332)
     * // t2 = string constant at gp-32608 + 7501 (likely a format string or label)
     * Widget target = curcontextwindows[0x20/4];  // offset 32 = widget index 8
     * XtVaSetValues(target, XmNlabelString, some_string, NULL);
     * epilogue:
     * // restore ra, adjust sp+320, return
     * ```
     * **GP offset resolution:**
     * - gp-32392 (0x8178) = XmStringFree
     * - gp-30200 (0x8a08) = curcontext
     * - gp-30332 (0x8984) = curcontextwindows
     * - gp-31936 (0x8340) = XtVaSetValues
     * - gp-32608 (0x80a0) = rodata string base, +7501 = specific label string
     */
halt_baddata();
}
