/**
 * postMenu
 *
 * Extracted from fsn.c lines 45663-45676
 * Category: UI
 */

void postMenu(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 0x34) == 3) {
    uVar1 = XtWindow(popup_menu_widget);
    setup_window_state(uVar1);
    XmMenuPosition(popup_menu_widget,param_3);
    XtManageChild(popup_menu_widget);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
