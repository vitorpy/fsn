/**
 * selection2.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "selection2.h"
#include "fsn_types.h"
#include "fsn_state.h"

void get_selection_params(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  uint in_register_00001020;
  int local_40c;
  short local_3f0 [500];
  undefined4 local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar5 = -1;
  local_40c = -1;
  (**(code **)(unaff_gp + -0x7b48))();
  (**(code **)(unaff_gp + -0x7de0))();
  (**(code **)(unaff_gp + -0x7dd0))(10,10);
  (**(code **)(unaff_gp + -0x7dd4))(local_3f0,500);
  (**(code **)(unaff_gp + -0x7adc))();
  (**(code **)(unaff_gp + -0x7b6c))
            ((float)((double)((ulonglong)in_register_00001020 << 0x20) /
                    (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x34)));
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe),0x78);
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xc),0x7a);
  (**(code **)(unaff_gp + -0x7b60))
            (-*(float *)**(int **)(unaff_gp + -0x7684),-((float *)**(int **)(unaff_gp + -0x7684))[1]
            );
  (**(code **)(unaff_gp + -0x79fc))(*(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x3c),1);
  iVar1 = (**(code **)(unaff_gp + -0x7dd8))(local_3f0);
  (**(code **)(unaff_gp + -0x7b28))();
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (int)local_3f0[iVar3];
      if ((iVar2 == 1) && (iVar5 < 0)) {
        iVar5 = (int)local_3f0[iVar3 + 1];
      }
      iVar4 = iVar4 + 1;
      if (iVar2 == 2) {
        local_40c = (int)local_3f0[iVar3 + 2];
        iVar5 = (int)local_3f0[iVar3 + 1];
        break;
      }
      iVar3 = iVar3 + 1 + iVar2;
    } while (iVar4 != iVar1);
  }
  if ((-1 < iVar5) && (local_4 = (**(code **)(unaff_gp + -0x7a7c))(iVar5), -1 < local_40c)) {
    if (local_4 == *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
      local_8 = *(undefined4 *)(*(int *)(local_4 + 0x10) + local_40c * 4);
    }
    else {
      (**(code **)(unaff_gp + -0x7c08))
                (*(int *)(unaff_gp + -0x7f68) + 0x20,*(int *)(unaff_gp + -0x7fa4) + -0x5164);
      local_4 = 0;
    }
  }
  *param_1 = local_4;
  *param_2 = local_8;
  *param_3 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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

void createSelectedInfo(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  move_file_xmstring = XmStringCreate("Move file",&default_charset);
  move_out_label = XmStringCreate("Move file out",&default_charset);
  move_in_label = XmStringCreate("Move file in",&default_charset);
  copy_file_xmstring = XmStringCreate("Copy file",&default_charset);
  copy_out_label = XmStringCreate("Copy file out",&default_charset);
  copy_in_label = XmStringCreate("Copy file in",&default_charset);
  link_file_xmstring = XmStringCreate("Link file",&default_charset);
  link_out_label = XmStringCreate("Link file out",&default_charset);
  link_in_label = XmStringCreate("Link file in",&default_charset);
  uVar1 = XmCreateForm(param_1,"selectedInfo",param_2,param_3);
  XtManageChild(uVar1);
  *param_2 = 0xe3f4b1d;
  param_2[1] = 1;
  param_2[2] = 0xe3f40cb;
  param_2[3] = 1;
  param_2[4] = 0xe3f46dd;
  param_2[5] = 1;
  uVar2 = XmCreateTextField(uVar1,"fileName",param_2,3);
  *(undefined4 *)(curcontextwindows + 0x1c) = uVar2;
  XtAddCallback(*(undefined4 *)(curcontextwindows + 0x1c),0xe3f4ca5,gl_toggle_callback,
                *(undefined4 *)(curcontextwindows + 0xc));
  XtAddCallback(*(undefined4 *)(curcontextwindows + 0x1c),0xe3f35b3,gl_button_callback,
                *(undefined4 *)(curcontextwindows + 0xc));
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x1c),0x10,0,gl_motion_handler,
                    *(undefined4 *)(curcontextwindows + 0xc));
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x1c),0x20,0,gl_event_handler,0);
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x1c),4,0,myContext,
                    *(undefined4 *)(curcontextwindows + 0xc));
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x1c));
  *param_2 = 0xe3f4b1d;
  param_2[1] = 3;
  param_2[2] = 0xe3f4ba9;
  uVar2 = *(undefined4 *)(curcontextwindows + 0x1c);
  param_2[4] = 0xe3f40cb;
  param_2[5] = 1;
  param_2[6] = 0xe3f46dd;
  param_2[7] = 1;
  param_2[8] = 0xe3f40b5;
  param_2[3] = uVar2;
  param_2[9] = blankXmString;
  uVar1 = XmCreateLabel(uVar1,"fileInfo",param_2,5);
  *(undefined4 *)(curcontextwindows + 0x20) = uVar1;
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x20));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void unselect_directory(void)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(curcontext + 0x44) != 0) {
    curcontext[0xc50] = 0;
    finalize_draw_frame();
    XtSetSensitive(menu_directory_cascade,0);
    clear_current_selection();
    *(byte *)(*(int *)(curcontext + 0x44) + 0x74) =
         *(byte *)(*(int *)(curcontext + 0x44) + 0x74) & 0xdf;
    *(undefined4 *)(curcontext + 0x44) = 0;
    curcontext[0x4c] = 0;
    draw_mark_overlay();
    uStack_24 = blankXmString;
    uStack_28 = 0xe3f40b5;
    XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&uStack_28,1);
    update_widget_state();
    refresh_display();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void select_directory(int param_1)

{
  undefined4 uStack_28;
  uint uStack_24;
  
  if (param_1 == *(int *)(curcontext + 0x44)) {
    clear_current_selection();
    if (mark_menu_widget != '\0') {
      draw_mark_overlay();
    }
  }
  else {
    if (*(int *)(curcontext + 0x44) != 0) {
      finalize_draw_frame();
      *(byte *)(*(int *)(curcontext + 0x44) + 0x74) =
           *(byte *)(*(int *)(curcontext + 0x44) + 0x74) & 0xdf;
      clear_current_selection();
      curcontext[0xc50] = 0;
    }
    XtSetSensitive(menu_directory_cascade,1);
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x20;
    *(int *)(curcontext + 0x44) = param_1;
    build_path_string((int)curcontext + 0x4c,param_1);
    draw_mark_overlay();
    refresh_display();
    uStack_28 = 0xe3f48f1;
    uStack_24 = (uint)(*(int *)(param_1 + 0x74) << 0xb) >> 0x1f;
    XtSetValues(menu_monitor_directory,&uStack_28,1);
    uStack_28 = 0xe3f48f1;
    uStack_24 = (uint)(*(int *)(param_1 + 0x74) << 0xd) >> 0x1f;
    XtSetValues(current_picked_item,&uStack_28,1);
    XtSetSensitive(menu_monitor_directory,-1 < *(int *)(param_1 + 0x74) << 0xd);
    update_widget_state();
    if (*(int *)(param_1 + 100) != 0) {
      XtRemoveTimeOut();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (-1 < *(int *)(param_1 + 0x74) << 10) {
      add_directory_monitor(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void unselect_file(void)

{
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(curcontext + 0x48) != 0) {
    XtSetSensitive(menu_file_cascade,0);
    XtSetSensitive(popup_menu_widget,0);
    *(byte *)(*(int *)(curcontext + 0x48) + 0x28) =
         *(byte *)(*(int *)(curcontext + 0x48) + 0x28) & 0xef;
    *(undefined4 *)(curcontext + 0x48) = 0;
    draw_mark_overlay();
    uStack_28 = 0;
    uStack_2c = 0xe3f48f1;
    XtSetValues(menu_delete_file_1,&uStack_2c,1);
    XtSetValues(menu_delete_file_2,&uStack_2c,1);
    update_widget_state();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void clear_current_selection(void)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_2c [11];
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x48) != 0) {
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b9c),0);
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),0);
    piVar2 = *(int **)(unaff_gp + -0x7684);
    iVar1 = *(int *)(*piVar2 + 0x48);
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xef;
    *(undefined4 *)(*piVar2 + 0x48) = 0;
    (**(code **)(unaff_gp + -0x79d4))();
    local_2c[1] = 0;
    local_2c[0] = *(int *)(unaff_gp + -0x7f60) + 0x2589;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84),local_2c,1);
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88),local_2c,1);
    (**(code **)(unaff_gp + -0x79d0))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void select_file(undefined4 *param_1)

{
  int iVar1;
  undefined4 uStack_30;
  uint uStack_2c;
  
  iVar1 = *(int *)(curcontext + 0x48);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xef;
  }
  XtSetSensitive(menu_file_cascade,1);
  XtSetSensitive(popup_menu_widget,1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined4 **)(curcontext + 0x48) = param_1;
  strcpy(curcontext + 0x44c,curcontext + 0x4c);
  strcat(curcontext + 0x44c,(char *)*param_1);
  draw_mark_overlay();
  uStack_30 = 0xe3f48f1;
  uStack_2c = (uint)(param_1[10] << 9) >> 0x1f;
  XtSetValues(menu_delete_file_1,&uStack_30,1);
  XtSetValues(menu_delete_file_2,&uStack_30,1);
  update_widget_state();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void checkValidSelections(void)

{
  if ((*(int *)(curcontext + 0x48) != 0) && (-1 < *(int *)(*(int *)(curcontext + 0x48) + 0x28) << 5)
     ) {
    clear_current_selection();
  }
  if ((*(int *)(curcontext + 0x44) != 0) && (-1 < *(int *)(*(int *)(curcontext + 0x44) + 0x74) << 3)
     ) {
    clear_marked_state();
  }
  if ((*(int *)(curcontext + 0x3c) != 0) && (-1 < *(int *)(*(int *)(curcontext + 0x3c) + 0x74) << 3)
     ) {
    reset_eye();
  }
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    if ((*(int *)(curcontext + 0x48) != 0) &&
       (-1 < *(int *)(*(int *)(curcontext + 0x48) + 0x28) << 5)) {
      clear_current_selection();
    }
    if ((*(int *)(curcontext + 0x44) != 0) &&
       (-1 < *(int *)(*(int *)(curcontext + 0x44) + 0x74) << 3)) {
      clear_marked_state();
    }
    if ((*(int *)(curcontext + 0x3c) != 0) &&
       (-1 < *(int *)(*(int *)(curcontext + 0x3c) + 0x74) << 3)) {
      reset_eye();
    }
    gl_swap_buffers(1);
  }
  update_widget_state();
  prepare_draw_frame();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_selection_string(void)

{
  int unaff_gp;
  
  if (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x7988) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void write_selection_file(undefined2 *param_1,FILE *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined1 auStack_430 [1024];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined2 local_a;
  ushort local_8;
  ushort local_6;
  ushort local_4;
  undefined1 local_2;
  
  sVar1 = fread(&local_30,0x30,1,param_2);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading position from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  *(undefined4 *)(param_1 + 4) = local_30;
  *(undefined4 *)(param_1 + 6) = local_2c;
  *(undefined4 *)(param_1 + 8) = local_28;
  *(undefined4 *)(param_1 + 0xc) = local_24;
  *(undefined4 *)(param_1 + 0xe) = local_20;
  *(undefined4 *)(param_1 + 0x10) = local_1c;
  *(undefined4 *)(param_1 + 0x14) = local_18;
  *(undefined4 *)(param_1 + 0x16) = local_14;
  *(undefined4 *)(param_1 + 0x18) = local_10;
  *param_1 = local_c;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[1] = local_a;
  *(undefined1 *)(param_1 + 0x1a) = local_2;
  if (local_8 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)local_8,param_2);
    if (sVar1 != local_8) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position warpdp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    uVar2 = get_path_entry(auStack_430);
    *(undefined4 *)(param_1 + 2) = uVar2;
    auStack_430[local_8] = 0;
  }
  if (local_6 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)local_6,param_2);
    if (sVar1 != local_6) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position selecteddp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    auStack_430[local_6] = 0;
    uVar2 = get_path_entry();
    *(undefined4 *)(param_1 + 10) = uVar2;
  }
  if (local_4 == 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)local_4,param_2);
    if (sVar1 != local_4) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position selectedfp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    auStack_430[local_4] = 0;
    if (*(int *)(param_1 + 10) == 0) {
      *(undefined4 *)(param_1 + 0x12) = 0;
    }
    else {
      uVar2 = validate_directory_access(*(int *)(param_1 + 10),auStack_430);
      *(undefined4 *)(param_1 + 0x12) = uVar2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
