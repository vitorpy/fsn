/**
 * CreateSelectionEntries
 *
 * Extracted from fsn.c lines 58005-58020
 * Category: UI
 */

void CreateSelectionEntries(undefined4 param_1)

{
  undefined1 auStack_50 [80];
  
  menu_process_deletes = XmCreatePushButton(param_1,"menuProcessDeletes",auStack_50,0);
  XtAddCallback(menu_process_deletes,0xe3f35b3,FUN_0041ec98,0);
  XtSetSensitive(menu_process_deletes,0);
  XtManageChild(menu_process_deletes);
  menu_undo_deletes = XmCreatePushButton(param_1,"menuUndoDeletes",auStack_50,0);
  XtAddCallback(menu_undo_deletes,0xe3f35b3,FUN_0041ee80,0);
  XtSetSensitive(menu_undo_deletes,0);
  XtManageChild(menu_undo_deletes);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041bd00):
     * Function: CreateSelectionEntries
     *
     * Looking at the GP offsets and calling pattern:
     * **1. What it does:**
     * Stores a widget in a global array (DAT_10006b90), then calls XtAddCallback to register a callback, followed by two widget configuration calls (likely XtSetSensitive and XtManageChild) on the stored widget.
     * **2. C pseudocode:**
     * ```c
     * // v0 contains widget returned from previous XmCreatePushButton call
     * DAT_10006b90 = v0;  // Store widget in global (selection entry array)
     * // GP-31828 = XtAddCallback
     * XtAddCallback(v0,                    // widget (a0)
     * XmNactivateCallback,   // callback name (a1 = GP-32608 + 4683)
     * some_callback,         // callback proc (a2 = GP-32740 + -4480)
     * NULL);                 // client_data (a3 = 0)
     * // GP-31976 = XtSetSensitive
     * XtSetSensitive(DAT_10006b90, False);  // a1 = 0
     * // GP-31864 = XtManageChild
     * XtManageChild(DAT_10006b90);
     * ```
     * The offset 27536 (0x6b90) from the data base (GP-32660, which is typically 0x10000000) gives address 0x10006b90 - this is likely an array element for selection menu entries. The pattern suggests this is the tail of a loop creating menu items.
     */
halt_baddata();
}
