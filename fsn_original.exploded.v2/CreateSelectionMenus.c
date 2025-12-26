/**
 * CreateSelectionMenus
 *
 * Extracted from fsn.c lines 57596-57741
 * Category: UI
 */

void CreateSelectionMenus(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_6c = 0;
  FUN_00432094(display,0,&uStack_68,&uStack_6c);
  uStack_4 = XmCreatePulldownMenu(param_1,"dirPane",&uStack_68,uStack_6c);
  XtAddCallback(uStack_4,0xe3f41fe,overlayMenuMappedCB,0);
  XtAddCallback(uStack_4,0xe3f4c38,overlayMenuUnmappedCB,0);
  install_help_callback(uStack_4,&directoryHelp);
  uStack_6c = 0;
  menu_monitor_directory = XmCreateToggleButton(uStack_4,"menuMonitorDirectory",&uStack_68,0);
  XtAddCallback(menu_monitor_directory,0xe3f4ca5,FUN_0041dea4,0);
  XtManageChild(menu_monitor_directory);
  uStack_6c = 0;
  uStack_10 = XmCreatePushButton(uStack_4,"menuMonitorTree",&uStack_68,0);
  XtAddCallback(uStack_10,0xe3f35b3,FUN_0041dff4,1);
  XtManageChild(uStack_10);
  uStack_6c = 0;
  uStack_10 = XmCreatePushButton(uStack_4,"menuStopMonitorTree",&uStack_68,0);
  XtAddCallback(uStack_10,0xe3f35b3,FUN_0041dff4,0);
  XtManageChild(uStack_10);
  uStack_6c = 0;
  uStack_10 = XmCreatePushButton(uStack_4,"menuRescanSubtree",&uStack_68,0);
  XtAddCallback(uStack_10,0xe3f35b3,FUN_0041e0a8,0);
  XtManageChild(uStack_10);
  uStack_6c = 0;
  DAT_10016b58 = XmCreateToggleButton(uStack_4,"menuPruneDirectory",&uStack_68,0);
  XtAddCallback(DAT_10016b58,0xe3f4ca5,FUN_0041ef30,0);
  XtManageChild(DAT_10016b58);
  uStack_6c = 2;
  uStack_68 = 0xe3f4a31;
  uStack_60 = 0xf6617e7;
  uStack_5c = 0;
  uStack_64 = uStack_4;
  menu_directory_cascade = XmCreateCascadeButton(param_1,"menuDirectory",&uStack_68,2);
  XtManageChild(menu_directory_cascade);
  install_help_callback(menu_directory_cascade,&directoryHelp);
  XtAddEventHandler(param_2,4,0,postMenu,0);
  uStack_6c = 0;
  FUN_00432094(display,0,&uStack_68,&uStack_6c);
  XtSetSensitive(menu_directory_cascade,0);
  popup_menu_widget = XmCreatePopupMenu(param_2,"popupMenu",&uStack_68,uStack_6c);
  XtAddCallback(popup_menu_widget,0xe3f4c38,overlayMenuUnmappedCB,0);
  install_help_callback(popup_menu_widget,&fileHelp);
  uStack_6c = 0;
  FUN_00432094(display,0,&uStack_68,&uStack_6c);
  uStack_8 = XmCreatePulldownMenu(param_1,"filePane",&uStack_68,uStack_6c);
  XtAddCallback(uStack_8,0xe3f41fe,overlayMenuMappedCB,0);
  XtAddCallback(uStack_8,0xe3f4c38,overlayMenuUnmappedCB,0);
  install_help_callback(uStack_8,&fileHelp);
  uStack_6c = 0;
  uVar1 = XmCreateLabel(popup_menu_widget,"menuFile",&uStack_68,0);
  XtManageChild(uVar1);
  uStack_6c = 0;
  uVar1 = XmCreateSeparator(popup_menu_widget,"popupSep",&uStack_68,0);
  XtManageChild(uVar1);
  uStack_6c = 0;
  menu_open_file_1 = XmCreatePushButton(popup_menu_widget,"menuOpenFile",&uStack_68,0);
  XtAddCallback(menu_open_file_1,0xe3f35b3,FUN_0041e8a8,0);
  XtManageChild(menu_open_file_1);
  (&menu_items_array)[array_index] = menu_open_file_1;
  array_index = array_index + 1;
  menu_open_file_2 = XmCreatePushButton(uStack_8,"menuOpenFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_open_file_2,0xe3f35b3,FUN_0041e8a8,0);
  XtManageChild(menu_open_file_2);
  puVar2 = &menu_items_array + array_index;
  array_index = array_index + 1;
  *puVar2 = menu_open_file_2;
  uStack_6c = 0;
  menu_print_file_1 = XmCreatePushButton(popup_menu_widget,"menuPrintFile",&uStack_68,0);
  XtAddCallback(menu_print_file_1,0xe3f35b3,FUN_0041e918,0);
  XtManageChild(menu_print_file_1);
  (&menu_items_array)[array_index] = menu_print_file_1;
  array_index = array_index + 1;
  menu_print_file_2 = XmCreatePushButton(uStack_8,"menuPrintFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_print_file_2,0xe3f35b3,FUN_0041e918,0);
  XtManageChild(menu_print_file_2);
  puVar2 = &menu_items_array + array_index;
  array_index = array_index + 1;
  *puVar2 = menu_print_file_2;
  uStack_6c = 0;
  menu_delete_file_1 = XmCreateToggleButton(popup_menu_widget,"menuDeleteFile",&uStack_68,0);
  XtAddCallback(menu_delete_file_1,0xe3f4ca5,FUN_0041e988,0);
  XtManageChild(menu_delete_file_1);
  (&menu_items_array)[array_index] = menu_delete_file_1;
  array_index = array_index + 1;
  menu_delete_file_2 = XmCreateToggleButton(uStack_8,"menuDeleteFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_delete_file_2,0xe3f4ca5,FUN_0041e988,0);
  XtManageChild(menu_delete_file_2);
  (&menu_items_array)[array_index] = menu_delete_file_2;
  array_index = array_index + 1;
  uStack_64 = DAT_10016b30;
  uStack_68 = 0xe3f40b5;
  uStack_60 = 0xf6617e7;
  uStack_6c = 2;
  uStack_5c = 0;
  menu_move_file_1 = XmCreatePushButton(popup_menu_widget,"menuMoveFile",&uStack_68,2);
  XtAddCallback(menu_move_file_1,0xe3f35b3,FUN_0041f2b4,1);
  XtManageChild(menu_move_file_1);
  menu_move_file_2 = XmCreatePushButton(uStack_8,"menuMoveFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_move_file_2,0xe3f35b3,FUN_0041f2b4,1);
  XtManageChild(menu_move_file_2);
  uStack_64 = DAT_10016b3c;
  uStack_68 = 0xe3f40b5;
  uStack_60 = 0xf6617e7;
  uStack_6c = 2;
  uStack_5c = 0;
  menu_copy_file_1 = XmCreatePushButton(popup_menu_widget,"menuCopyFile",&uStack_68,2);
  XtAddCallback(menu_copy_file_1,0xe3f35b3,FUN_0041f2b4,2);
  XtManageChild(menu_copy_file_1);
  menu_copy_file_2 = XmCreatePushButton(uStack_8,"menuCopyFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_copy_file_2,0xe3f35b3,FUN_0041f2b4,2);
  XtManageChild(menu_copy_file_2);
  uStack_64 = DAT_10016b48;
  uStack_68 = 0xe3f40b5;
  uStack_60 = 0xf6617e7;
  uStack_6c = 2;
  uStack_5c = 0;
  menu_link_file_1 = XmCreatePushButton(popup_menu_widget,"menuLinkFile",&uStack_68,2);
  XtAddCallback(menu_link_file_1,0xe3f35b3,FUN_0041f2b4,3);
  XtManageChild(menu_link_file_1);
  menu_link_file_2 = XmCreatePushButton(uStack_8,"menuLinkFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_link_file_2,0xe3f35b3,FUN_0041f2b4,3);
  XtManageChild(menu_link_file_2);
  uStack_68 = 0xe3f4a31;
  uStack_60 = 0xf6617e7;
  uStack_6c = 2;
  uStack_5c = 0;
  uStack_64 = uStack_8;
  menu_file_cascade = XmCreateCascadeButton(param_1,"menuFile",&uStack_68,2);
  XtManageChild(menu_file_cascade);
  install_help_callback(menu_file_cascade,&fileHelp);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041b034):
     * Function: CreateSelectionMenus
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Creates an Xt widget via XtCreateWidget (jalr t9 at 41bca4), stores the returned widget in a global array at gp-32660+27548 (DAT_10006b9c), then calls XtManageChild on it, followed by XtAddCallback with a callback function from gp-30284.
     * **C pseudocode:**
     * ```c
     * Widget w = XtCreateWidget("selectionMenu", xmRowColumnWidgetClass, parent, args, 2);
     * DAT_10006b9c = w;  // Store in global: *(gp_base + 0x806c + 0x6b9c)
     * XtManageChild(w);
     * XtAddCallback(w, XmNentryCallback, selectionMenuCB, NULL);
     * ```
     * The args array setup (t2/t4/t5/t3 stored to sp+40,48,60,44,68,76) configures the RowColumn as a popup menu. The -20028 offset on a1 is loading a string constant ("selectionMenu" or similar resource name).
     */
halt_baddata();
}
