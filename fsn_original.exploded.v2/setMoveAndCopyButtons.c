/**
 * setMoveAndCopyButtons
 *
 * Extracted from fsn.c lines 58473-58668
 * Category: UI
 */

void setMoveAndCopyButtons(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  XtSetSensitive(menu_directory_cascade,curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ != 0);
  XtSetSensitive(menu_file_cascade,curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ != 0);
  XtSetSensitive(popup_menu_widget,curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ != 0);
  FUN_0041c928(1);
  if ((altcontext[0xc51] != '\0') && (iVar1 = curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */, iVar1 != 0)) {
    iVar2 = 0;
    if (altcontext[0xc51] != '\0') {
      iVar2 = *(int *)(altcontext + 0x44);
    }
    if (iVar2 != iVar1) {
      if (curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ != 0) {
        uStack_28 = 0xe3f40b5;
        uStack_24 = DAT_10016b34;
        XtSetValues(menu_move_file_1,&uStack_28,1);
        XtSetValues(menu_move_file_2,&uStack_28,1);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_move_file_1,bVar3);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_move_file_2,bVar3);
        uStack_24 = DAT_10016b40;
        uStack_28 = 0xe3f40b5;
        XtSetValues(menu_copy_file_1,&uStack_28,1);
        XtSetValues(menu_copy_file_2,&uStack_28,1);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_copy_file_1,bVar3);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_copy_file_2,bVar3);
        uStack_24 = DAT_10016b4c;
        uStack_28 = 0xe3f40b5;
        XtSetValues(menu_link_file_1,&uStack_28,1);
        XtSetValues(menu_link_file_2,&uStack_28,1);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_link_file_1,bVar3);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_link_file_2,bVar3);
            /*
     * BADDATA ANALYSIS (from binary @ 0x0041c9dc):
     * Function: setMoveAndCopyButtons
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Reads `curcontext->field_0x44` and `curcontext->field_0x48` (likely selection counts), converts each to boolean (0 or 1) via `sltu`, then calls a sensitivity-setting function (at GP-31976, likely `XtSetSensitive`) on two button widgets from `curcontextwindows[0x6b98]` and `curcontextwindows[0x6b9c]`.
     * **C pseudocode:**
     * ```c
     * void setMoveAndCopyButtons(void) {
     * int count1 = curcontext[0x44/4];  // offset 68 = marked_count or similar
     * int count2 = curcontext[0x48/4];  // offset 72
     * XtSetSensitive(curcontextwindows[0x6b98/4], count1 > 0);  // Move button
     * XtSetSensitive(curcontextwindows[0x6b9c/4], count2 > 0);  // Copy button
     * }
     * ```
     * The `sltu $t, $zero, $a1` idiom converts non-zero to 1, zero stays 0 - a standard "boolean cast" pattern. The buttons are enabled only when there are items selected/marked.
     */
halt_baddata();
      }
      if (iVar1 == 0) {
            /*
     * BADDATA ANALYSIS (from binary @ 0x0041c9dc):
     * Function: setMoveAndCopyButtons
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Calls XtSetValues on widget at curcontext[0x6b80/4] with args from stack, then calls XtSetSensitive(curcontext[0x6b7c/4], 0) and XtSetSensitive(curcontext[0x6b80/4], 0), then branches to function exit.
     * **C pseudocode:**
     * ```c
     * XtSetValues(curcontext[0x1ae0], args, 1);  // 0x6b80/4 = 0x1ae0
     * XtSetSensitive(curcontext[0x1adf], False); // 0x6b7c/4 = 0x1adf
     * XtSetSensitive(curcontext[0x1ae0], False);
     * goto function_exit;
     * ```
     * Note: The offsets 0x6b7c and 0x6b80 are byte offsets into curcontext. These likely correspond to the "Move" and "Copy" button widgets being disabled (set insensitive).
     */
halt_baddata();
      }
      uStack_24 = DAT_10016b38;
      uStack_28 = 0xe3f40b5;
      XtSetValues(menu_move_file_1,&uStack_28,1);
      XtSetValues(menu_move_file_2,&uStack_28,1);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_move_file_1,iVar1 != 0);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_move_file_2,iVar1 != 0);
      uStack_28 = 0xe3f40b5;
      uStack_24 = DAT_10016b44;
      XtSetValues(menu_copy_file_1,&uStack_28,1);
      XtSetValues(menu_copy_file_2,&uStack_28,1);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_copy_file_1,iVar1 != 0);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_copy_file_2,iVar1 != 0);
      uStack_24 = DAT_10016b50;
      uStack_28 = 0xe3f40b5;
      XtSetValues(menu_link_file_1,&uStack_28,1);
      XtSetValues(menu_link_file_2,&uStack_28,1);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_link_file_1,iVar1 != 0);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_link_file_2,iVar1 != 0);
      XtSetSensitive(menu_file_cascade,1);
      XtSetSensitive(popup_menu_widget,1);
      FUN_0041c928(0);
          /*
     * BADDATA ANALYSIS (from binary @ 0x0041c9dc):
     * Function: setMoveAndCopyButtons
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads curcontext, checks if byte at offset 0xC51 (isMarked flag) is set. If set, loads value at offset 0x44 (selectedCount). Then checks if selectedCount > 0. If both conditions met, loads offset 0x48 (copyInProgress flag) and inverts it. Calls XtSetSensitive on a button widget with the result.
     * 2. **C pseudocode:**
     * ```c
     * context = *curcontext;
     * isMarked = context->data[0xC51];  // byte flag
     * a0 = 0;
     * if (isMarked != 0) {
     * a0 = context->selectedCount;  // offset 0x44
     * }
     * hasSelection = (a0 != 0);  // sltu zero,a0 sets 1 if a0>0
     * v0 = 0;
     * if (hasSelection) {
     * if (isMarked != 0) {
     * v0 = context->copyInProgress;  // offset 0x48
     * }
     * canMove = (v0 == 0);  // sltiu v0,1 gives 1 if v0<1
     * } else {
     * canMove = 0;  // sltiu 0,1 = 1, but branch skips...
     * }
     * // GP[-32660] = curcontextwindows, offset 0x6B78 = moveButton widget
     * XtSetSensitive(curcontextwindows->moveButton, canMove);
     * ```
     * **Key offsets discovered:**
     * - 0xC51: isMarked flag (byte)
     * - 0x44: selectedCount (int)
     * - 0x48: copyInProgress flag (int)
     * - curcontextwindows + 0x6B78: moveButton widget
     */
halt_baddata();
    }
  }
  uStack_24 = DAT_10016b30;
  uStack_28 = 0xe3f40b5;
  XtSetValues(menu_move_file_1,&uStack_28,1);
  XtSetValues(menu_move_file_2,&uStack_28,1);
  XtSetSensitive(menu_move_file_1,0);
  XtSetSensitive(menu_move_file_2,0);
  uStack_24 = DAT_10016b3c;
  uStack_28 = 0xe3f40b5;
  XtSetValues(menu_copy_file_1,&uStack_28,1);
  XtSetValues(menu_copy_file_2,&uStack_28,1);
  XtSetSensitive(menu_copy_file_1,0);
  XtSetSensitive(menu_copy_file_2,0);
  uStack_24 = DAT_10016b48;
  uStack_28 = 0xe3f40b5;
  XtSetValues(menu_link_file_1,&uStack_28,1);
  XtSetValues(menu_link_file_2,&uStack_28,1);
  XtSetSensitive(menu_link_file_1,0);
  XtSetSensitive(menu_link_file_2,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041c9dc):
     * Function: setMoveAndCopyButtons
     *
     * Looking at this assembly:
     * 1. **What it does:** Sets button sensitivity based on whether there's a selection (offset 72 of some structure). Calls XtSetSensitive on 3 buttons (at curcontext offsets 0x6b70, 0x6b74, 0x6b78) - the "move" and "copy" buttons. The sensitivity is boolean (sltu converts non-zero to 1).
     * 2. **C pseudocode:**
     * ```c
     * // a2 = selection count (0 if none)
     * if (t8 != 0) {
     * a2 = v1->selection_count;  // offset 72 (0x48)
     * } else {
     * a2 = 0;
     * }
     * // Set sensitivity: a1 = (a2 != 0) ? 1 : 0
     * XtSetSensitive(curcontext->button_6b70, a2 != 0);
     * // Build arg list on stack for XtSetValues
     * args[0].name = XmNsensitive;  // string at gp[-32608] + 0x1d4d
     * args[0].value = curcontext->field_6b44;
     * XtSetValues(curcontext->button_6b74, args, 1);
     * XtSetValues(curcontext->button_6b78, args, 1);
     * ```
     * The key insight: `sltu a1,zero,a2` at 0x41d118 computes `a1 = (0 < a2)` which is 1 if a2 is non-zero, 0 otherwise - a standard MIPS idiom for converting any non-zero value to boolean 1.
     */
halt_baddata();
}
