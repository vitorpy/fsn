/**
 * select_file
 *
 * Extracted from fsn.c lines 59213-59238
 * Category: Filesystem
 */

void select_file(undefined4 *param_1)

{
  int iVar1;
  undefined4 uStack_30;
  uint uStack_2c;
  
  iVar1 = curcontext->current_file /* was: *(int *)(curcontext + 0x48) */;
  if (iVar1 != 0) {
    iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ = iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ & 0xef;
  }
  XtSetSensitive(menu_file_cascade,1);
  XtSetSensitive(popup_menu_widget,1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  curcontext->current_file /* was: *(undefined4 **)(curcontext + 0x48) */ = param_1;
  strcpy(curcontext + 0x44c,curcontext + 0x4c);
  strcat(curcontext + 0x44c,(char *)*param_1);
  FUN_0041c720();
  uStack_30 = 0xe3f48f1;
  uStack_2c = (uint)(param_1[10] << 9) >> 0x1f;
  XtSetValues(menu_delete_file_1,&uStack_30,1);
  XtSetValues(menu_delete_file_2,&uStack_30,1);
  FUN_0041c9e8();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041da38):
     * Function: select_file
     *
     * Looking at the assembly:
     * 1. **What it does:** Extracts bit 22 from node->flags (shifted left 9, then right 31 to isolate one bit), stores it along with a string pointer on stack, then calls XtVaSetValues twice on two widgets (likely setting XmNset on toggle buttons), followed by a final function call (likely redraw/refresh).
     * 2. **C pseudocode:**
     * ```c
     * char *label = status_string + 9609;  // gp[-32608] + 0x2589
     * int is_selected = (node->flags >> 22) & 1;  // extract bit 22
     * XtVaSetValues(widgets[0x6b84/4], XmNset, is_selected, NULL);  // gp[-31936] = XtVaSetValues
     * XtVaSetValues(widgets[0x6b88/4], XmNset, is_selected, NULL);
     * redraw_scene();  // gp[-31184]
     * ```
     * The bit extraction `(flags << 9) >> 31` isolates bit 22 (selection state flag). The two XtVaSetValues calls update UI toggle widgets to reflect the selection state.
     */
halt_baddata();
}
