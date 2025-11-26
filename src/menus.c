/**
 * menus.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "menus.h"
#include "fsn_types.h"
#include "fsn_state.h"

void init_color_menus(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0xe3f48f1;
  local_8 = 1;
  if (displayHeight == 0) {
    XtSetValues(file_height_none_toggle,&local_c,1);
    XtSetSensitive(dir_height_menu_button,0);
  }
  else if (displayHeight == 1) {
    XtSetValues(file_height_linear_toggle,&local_c,1);
  }
  else if (displayHeight == 2) {
    XtSetValues(file_height_exag_toggle,&local_c,1);
  }
  if (displayDirectoryHeight == 0) {
    XtSetValues(dir_flat_toggle,&local_c,1);
  }
  else if (displayDirectoryHeight == 1) {
    XtSetValues(dir_files_only_toggle,&local_c,1);
  }
  else if (displayDirectoryHeight == 2) {
    XtSetValues(dir_children_toggle,&local_c,1);
  }
  if (altcontext[0xc51] != '\0') {
    XtSetValues(autoscan_split_toggle,&local_c,1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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
  setup_menu_resources(display,0,&uStack_68,&uStack_6c);
  uStack_4 = XmCreatePulldownMenu(param_1,"dirPane",&uStack_68,uStack_6c);
  XtAddCallback(uStack_4,0xe3f41fe,overlayMenuMappedCB,0);
  XtAddCallback(uStack_4,0xe3f4c38,overlayMenuUnmappedCB,0);
  install_help_callback(uStack_4,&directoryHelp);
  uStack_6c = 0;
  menu_monitor_directory = XmCreateToggleButton(uStack_4,"menuMonitorDirectory",&uStack_68,0);
  XtAddCallback(menu_monitor_directory,0xe3f4ca5,menu_monitor_dir_callback,0);
  XtManageChild(menu_monitor_directory);
  uStack_6c = 0;
  uStack_10 = XmCreatePushButton(uStack_4,"menuMonitorTree",&uStack_68,0);
  XtAddCallback(uStack_10,0xe3f35b3,toggle_state_callback,1);
  XtManageChild(uStack_10);
  uStack_6c = 0;
  uStack_10 = XmCreatePushButton(uStack_4,"menuStopMonitorTree",&uStack_68,0);
  XtAddCallback(uStack_10,0xe3f35b3,toggle_state_callback,0);
  XtManageChild(uStack_10);
  uStack_6c = 0;
  uStack_10 = XmCreatePushButton(uStack_4,"menuRescanSubtree",&uStack_68,0);
  XtAddCallback(uStack_10,0xe3f35b3,info_button_callback,0);
  XtManageChild(uStack_10);
  uStack_6c = 0;
  current_picked_item = XmCreateToggleButton(uStack_4,"menuPruneDirectory",&uStack_68,0);
  XtAddCallback(current_picked_item,0xe3f4ca5,menu_prune_dir_callback,0);
  XtManageChild(current_picked_item);
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
  setup_menu_resources(display,0,&uStack_68,&uStack_6c);
  XtSetSensitive(menu_directory_cascade,0);
  popup_menu_widget = XmCreatePopupMenu(param_2,"popupMenu",&uStack_68,uStack_6c);
  XtAddCallback(popup_menu_widget,0xe3f4c38,overlayMenuUnmappedCB,0);
  install_help_callback(popup_menu_widget,&fileHelp);
  uStack_6c = 0;
  setup_menu_resources(display,0,&uStack_68,&uStack_6c);
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
  XtAddCallback(menu_open_file_1,0xe3f35b3,menu_open_file_callback,0);
  XtManageChild(menu_open_file_1);
  (&menu_items_array)[array_index] = menu_open_file_1;
  array_index = array_index + 1;
  menu_open_file_2 = XmCreatePushButton(uStack_8,"menuOpenFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_open_file_2,0xe3f35b3,menu_open_file_callback,0);
  XtManageChild(menu_open_file_2);
  puVar2 = &menu_items_array + array_index;
  array_index = array_index + 1;
  *puVar2 = menu_open_file_2;
  uStack_6c = 0;
  menu_print_file_1 = XmCreatePushButton(popup_menu_widget,"menuPrintFile",&uStack_68,0);
  XtAddCallback(menu_print_file_1,0xe3f35b3,menu_print_file_callback,0);
  XtManageChild(menu_print_file_1);
  (&menu_items_array)[array_index] = menu_print_file_1;
  array_index = array_index + 1;
  menu_print_file_2 = XmCreatePushButton(uStack_8,"menuPrintFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_print_file_2,0xe3f35b3,menu_print_file_callback,0);
  XtManageChild(menu_print_file_2);
  puVar2 = &menu_items_array + array_index;
  array_index = array_index + 1;
  *puVar2 = menu_print_file_2;
  uStack_6c = 0;
  menu_delete_file_1 = XmCreateToggleButton(popup_menu_widget,"menuDeleteFile",&uStack_68,0);
  XtAddCallback(menu_delete_file_1,0xe3f4ca5,menu_delete_file_callback,0);
  XtManageChild(menu_delete_file_1);
  (&menu_items_array)[array_index] = menu_delete_file_1;
  array_index = array_index + 1;
  menu_delete_file_2 = XmCreateToggleButton(uStack_8,"menuDeleteFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_delete_file_2,0xe3f4ca5,menu_delete_file_callback,0);
  XtManageChild(menu_delete_file_2);
  (&menu_items_array)[array_index] = menu_delete_file_2;
  array_index = array_index + 1;
  uStack_64 = move_file_xmstring;
  uStack_68 = 0xe3f40b5;
  uStack_60 = 0xf6617e7;
  uStack_6c = 2;
  uStack_5c = 0;
  menu_move_file_1 = XmCreatePushButton(popup_menu_widget,"menuMoveFile",&uStack_68,2);
  XtAddCallback(menu_move_file_1,0xe3f35b3,file_operation_callback,1);
  XtManageChild(menu_move_file_1);
  menu_move_file_2 = XmCreatePushButton(uStack_8,"menuMoveFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_move_file_2,0xe3f35b3,file_operation_callback,1);
  XtManageChild(menu_move_file_2);
  uStack_64 = copy_file_xmstring;
  uStack_68 = 0xe3f40b5;
  uStack_60 = 0xf6617e7;
  uStack_6c = 2;
  uStack_5c = 0;
  menu_copy_file_1 = XmCreatePushButton(popup_menu_widget,"menuCopyFile",&uStack_68,2);
  XtAddCallback(menu_copy_file_1,0xe3f35b3,file_operation_callback,2);
  XtManageChild(menu_copy_file_1);
  menu_copy_file_2 = XmCreatePushButton(uStack_8,"menuCopyFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_copy_file_2,0xe3f35b3,file_operation_callback,2);
  XtManageChild(menu_copy_file_2);
  uStack_64 = link_file_xmstring;
  uStack_68 = 0xe3f40b5;
  uStack_60 = 0xf6617e7;
  uStack_6c = 2;
  uStack_5c = 0;
  menu_link_file_1 = XmCreatePushButton(popup_menu_widget,"menuLinkFile",&uStack_68,2);
  XtAddCallback(menu_link_file_1,0xe3f35b3,file_operation_callback,3);
  XtManageChild(menu_link_file_1);
  menu_link_file_2 = XmCreatePushButton(uStack_8,"menuLinkFile",&uStack_68,uStack_6c);
  XtAddCallback(menu_link_file_2,0xe3f35b3,file_operation_callback,3);
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
  halt_baddata();
}

void init_context_menus(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  code *pcVar9;
  int unaff_gp;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_68,&local_6c);
  local_4 = (**(code **)(unaff_gp + -0x7bcc))
                      (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4fa8,&local_68,local_6c);
  uVar4 = *(undefined4 *)(unaff_gp + -0x7950);
  (**(code **)(unaff_gp + -0x7c54))(local_4,*(int *)(unaff_gp + -0x7f60) + 0x1e96,uVar4,0);
  uVar5 = *(undefined4 *)(unaff_gp + -0x7954);
  (**(code **)(unaff_gp + -0x7c54))(local_4,*(int *)(unaff_gp + -0x7f60) + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c))(local_4,*(undefined4 *)(unaff_gp + -0x7650));
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7bc4))
                    (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4fa0,&local_68,0);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x293d,*(int *)(unaff_gp + -0x7fe4) + -0x215c,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54));
  local_6c = 0;
  local_10 = (**(code **)(unaff_gp + -0x7b20))
                       (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f88,&local_68,0);
  iVar3 = *(int *)(unaff_gp + -0x7fe4) + -0x200c;
  (**(code **)(unaff_gp + -0x7c54))(local_10,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,1);
  (**(code **)(unaff_gp + -0x7c78))(local_10);
  local_6c = 0;
  local_10 = (**(code **)(unaff_gp + -0x7b20))
                       (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f78,&local_68,0);
  (**(code **)(unaff_gp + -0x7c54))(local_10,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,0);
  (**(code **)(unaff_gp + -0x7c78))(local_10);
  local_6c = 0;
  local_10 = (**(code **)(unaff_gp + -0x7b20))
                       (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f64,&local_68,0);
  (**(code **)(unaff_gp + -0x7c54))
            (local_10,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(int *)(unaff_gp + -0x7fe4) + -0x1f58,0
            );
  (**(code **)(unaff_gp + -0x7c78))(local_10);
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7bc4))
                    (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f50,&local_68,0);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b58) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x293d,*(int *)(unaff_gp + -0x7fe4) + -0x10d0,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b58));
  local_6c = 2;
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x26c9;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_5c = 0;
  local_64 = local_4;
  uVar1 = (**(code **)(unaff_gp + -0x7bf8))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4f3c,&local_68,2);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98) = uVar1;
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x785c))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),
             *(undefined4 *)(unaff_gp + -0x7650));
  (**(code **)(unaff_gp + -0x7c74))(param_2,4,0,*(undefined4 *)(unaff_gp + -0x79b0),0);
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_68,&local_6c);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),0);
  uVar1 = (**(code **)(unaff_gp + -0x7ddc))
                    (param_2,*(int *)(unaff_gp + -0x7fa4) + -0x4f2c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
             *(undefined4 *)(unaff_gp + -0x764c));
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_68,&local_6c);
  local_8 = (**(code **)(unaff_gp + -0x7bcc))
                      (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4f20,&local_68,local_6c);
  (**(code **)(unaff_gp + -0x7c54))(local_8,*(int *)(unaff_gp + -0x7f60) + 0x1e96,uVar4,0);
  (**(code **)(unaff_gp + -0x7c54))(local_8,*(int *)(unaff_gp + -0x7f60) + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c))(local_8,*(undefined4 *)(unaff_gp + -0x764c));
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7c28))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4f14,&local_68,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b04))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4f08,&local_68,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4efc,&local_68,0);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b5c) = uVar1;
  iVar6 = iVar6 + -0x1758;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b5c));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b5c);
  *piVar2 = iVar3 + 1;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4eec,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b60) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b60));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b60);
  iVar6 = *(int *)(unaff_gp + -0x7f94);
  *piVar2 = iVar3 + 1;
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) + -0x4edc,
                     &local_68,0);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b64) = uVar1;
  iVar6 = iVar6 + -0x16e8;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b64));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b64);
  *piVar2 = iVar3 + 1;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4ecc,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b68) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b68));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b68);
  iVar6 = *(int *)(unaff_gp + -0x7f94);
  *piVar2 = iVar3 + 1;
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7bc4))
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) + -0x4ebc,
                     &local_68,0);
  iVar7 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84) = uVar1;
  iVar7 = iVar7 + -0x1678;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x293d,iVar7,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84));
  iVar3 = *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84);
  pcVar9 = *(code **)(unaff_gp + -0x7bc4);
  iVar6 = *(int *)(unaff_gp + -0x7fa4);
  *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20) = iVar3 + 1;
  uVar1 = (*pcVar9)(local_8,iVar6 + -0x4eac,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x293d,iVar7,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88));
  iVar3 = *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88);
  iVar7 = *(int *)(unaff_gp + -0x7f94);
  local_68 = *(int *)(unaff_gp + -0x7f60);
  local_60 = *(int *)(unaff_gp + -0x7f5c);
  iVar6 = *(int *)(unaff_gp + -0x7f94);
  *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20) = iVar3 + 1;
  local_64 = *(undefined4 *)(iVar7 + 0x6b30);
  local_68 = local_68 + 0x1d4d;
  local_60 = local_60 + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) + -0x4e9c,
                     &local_68,2);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c) = uVar1;
  iVar6 = iVar6 + -0xd4c;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar6,1);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4e8c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,1);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70));
  local_64 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b3c);
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4e7c,&local_68,2);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,2);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4e6c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,2);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78));
  local_64 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b48);
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4e5c,&local_68,2);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,3);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4e4c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,3);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80));
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x26c9;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  local_64 = local_8;
  uVar1 = (**(code **)(unaff_gp + -0x7bf8))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4e3c,&local_68,2);
  puVar8 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b9c);
  *puVar8 = uVar1;
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x785c))(*puVar8,*(undefined4 *)(unaff_gp + -0x764c));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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

void overlayMenuUnmappedCB(void)

{
  undefined4 uVar1;
  
  uVar1 = XtWindow();
  create_gl_window(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void overlayMenuMappedCB(void)

{
  undefined4 uVar1;
  
  uVar1 = XtWindow();
  setup_window_state(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void createHelpMenu(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_2c = 0;
  setup_menu_resources(display,0,&uStack_28,&uStack_2c);
  uVar1 = XmCreatePulldownMenu(param_1,"help_menu",&uStack_28,uStack_2c);
  XtAddCallback(uVar1,0xe3f41fe,overlayMenuMappedCB,0);
  XtAddCallback(uVar1,0xe3f4c38,overlayMenuUnmappedCB,0);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"window_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,help_callback,&topHelp);
  XtManageChild(uVar2);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"context_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,quit_menu_callback,0);
  XtManageChild(uVar2);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"mode_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,help_callback,&modeHelp);
  XtManageChild(uVar2);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"version_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,help_callback,&versionHelp);
  XtManageChild(uVar2);
  uStack_28 = 0xe3f4a31;
  uStack_2c = 1;
  uStack_24 = uVar1;
  uVar1 = XmCreateCascadeButton(param_1,"helpButton",&uStack_28,1);
  XtManageChild(uVar1);
  uStack_2c = 1;
  uStack_28 = 0xe3f429f;
  uStack_24 = uVar1;
  XtSetValues(param_1,&uStack_28,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void finalize_menu_setup(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_gp;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  
  local_2c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_28,&local_2c);
  uVar1 = (**(code **)(unaff_gp + -0x7bcc))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x1c80,&local_28,local_2c);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x1e96,*(undefined4 *)(unaff_gp + -0x7950),0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x28d0,*(undefined4 *)(unaff_gp + -0x7954),0);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20))(uVar1,*(int *)(unaff_gp + -0x7fa4) + 0x1c8c,&local_28,0)
  ;
  iVar3 = *(int *)(unaff_gp + -0x7fe0) + -0x4c0c;
  (**(code **)(unaff_gp + -0x7c54))
            (uVar2,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x7660));
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20))(uVar1,*(int *)(unaff_gp + -0x7fa4) + 0x1c98,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c54))
            (uVar2,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(int *)(unaff_gp + -0x7fe0) + -0x4a54,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20))(uVar1,*(int *)(unaff_gp + -0x7fa4) + 0x1ca8,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c54))
            (uVar2,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x7668));
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20))(uVar1,*(int *)(unaff_gp + -0x7fa4) + 0x1cb4,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c54))
            (uVar2,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x766c));
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x26c9;
  local_2c = 1;
  local_24 = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7bf8))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x1cc4,&local_28,1);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  local_2c = 1;
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1f37;
  local_24 = uVar1;
  (**(code **)(unaff_gp + -0x7cc0))(param_1,&local_28,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setup_menu_resources(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7804))
                    (param_1,param_2,*(int *)(unaff_gp + -0x7f94) + -0x69a0,4);
  iVar2 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) + 0x2370))
                    (param_1,param_2,uVar1,*(int *)(unaff_gp + -0x7f94) + -0x69a0,4);
  if (iVar2 < 0) {
    (**(code **)(unaff_gp + -0x77fc))(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7808))(param_1,param_2);
    *(int *)(param_3 + *param_4 * 8) = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
    iVar4 = *(int *)(unaff_gp + -0x7f5c);
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = uVar1;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0xa3;
    *(undefined4 *)(param_3 + *param_4 * 8 + 4) = 2;
    iVar3 = *param_4;
    iVar4 = *(int *)(unaff_gp + -0x7f80);
    *param_4 = iVar3 + 1;
    *(int *)(param_3 + (iVar3 + 1) * 8) = iVar4 + 0x68;
    *(int *)(param_3 + *param_4 * 8 + 4) = iVar2;
    *param_4 = *param_4 + 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
