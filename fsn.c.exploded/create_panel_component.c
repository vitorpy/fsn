/**
 * create_panel_component
 *
 * Extracted from fsn.c lines 37691-37732
 * Category: UI
 */

void create_panel_component(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = XmCreateRowColumn(param_1,"controls",param_2,param_3);
  XtManageChild(uVar1);
  install_help_callback(uVar1,&controlHelp);
  uVar2 = XmCreatePushButton(uVar1,"reset",param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,reset_eye,0);
  uVar2 = XmCreatePushButton(uVar1,&search_button_name,param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,search_button_callback,0);
  uVar2 = XmCreatePushButton(uVar1,&scale_button_name,param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,height_scale_callback,0);
  uVar2 = XmCreatePushButton(uVar1,"front",param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,layout_scale_callback,0);
  uVar2 = XmCreateSeparator(uVar1,"control_sep",param_2,0);
  XtManageChild(uVar2);
  uVar2 = XmCreateRowColumn(uVar1,"control_scales",param_2,0);
  XtManageChild(uVar2);
  vertical_scale_widget = XmCreateScale(uVar2,"v_scale",param_2,0);
  XtAddCallback(vertical_scale_widget,0xe3f4ca5,vertical_scale_callback,0);
  XtAddCallback(vertical_scale_widget,0xe3f3b93,vertical_scale_callback,0);
  XtManageChild(vertical_scale_widget);
  zoom_scale_widget = XmCreateScale(uVar2,"z_scale",param_2,0);
  XtAddCallback(zoom_scale_widget,0xe3f4ca5,zoom_scale_callback,0);
  XtAddCallback(zoom_scale_widget,0xe3f3b93,zoom_scale_callback,0);
  XtManageChild(zoom_scale_widget);
  uVar2 = XmCreateSeparator(uVar1,"control_sep",param_2,0);
  XtManageChild(uVar2);
  init_search_panel(uVar1);
  uVar2 = XmCreateSeparator(uVar1,"control_sep",param_2,0);
  XtManageChild(uVar2);
  init_mark_panel(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
