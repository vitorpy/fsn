/**
 * CreateSelectionEntries
 *
 * Extracted from fsn.c lines 44026-44041
 * Category: UI
 */

void CreateSelectionEntries(undefined4 param_1)

{
  undefined1 auStack_50 [80];
  
  menu_process_deletes = XmCreatePushButton(param_1,"menuProcessDeletes",auStack_50,0);
  XtAddCallback(menu_process_deletes,0xe3f35b3,menu_process_deletes_callback,0);
  XtSetSensitive(menu_process_deletes,0);
  XtManageChild(menu_process_deletes);
  menu_undo_deletes = XmCreatePushButton(param_1,"menuUndoDeletes",auStack_50,0);
  XtAddCallback(menu_undo_deletes,0xe3f35b3,menu_undo_deletes_callback,0);
  XtSetSensitive(menu_undo_deletes,0);
  XtManageChild(menu_undo_deletes);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
