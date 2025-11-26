/**
 * messages.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "messages.h"
#include "fsn_types.h"
#include "fsn_state.h"

void deleteMessage(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = current_directory_node;
  if (param_1 == current_directory_node) {
    do {
      current_directory_node = (undefined4 *)puVar1[1];
      XmStringFree(*puVar1);
      XtFree(puVar1);
      if (current_directory_node == (undefined4 *)0x0) break;
      puVar1 = current_directory_node;
    } while (*(char *)(current_directory_node + 2) != '\0');
    if (current_directory_node == (undefined4 *)0x0) {
      local_8 = blankXmString;
    }
    else {
      local_8 = *current_directory_node;
    }
    local_c = 0xe3f40b5;
    XtSetValues(message_widget,&local_c,1);
  }
  else {
    *(undefined1 *)(param_1 + 2) = 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void message(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  puVar1 = (undefined4 *)XtMalloc(0xc);
  uVar2 = XmStringCreateSimple(param_1);
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = current_directory_node;
  uStack_54 = 0xe3f40b5;
  uStack_50 = *puVar1;
  current_directory_node = puVar1;
  XtSetValues(message_widget,&uStack_54,1);
  if (param_2 != 0) {
    XtAppAddTimeOut(app_context,param_2,deleteMessage,puVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

/* set_status_message: moved to status.c to avoid duplicate definition */

void filemessage(char *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  char acStack_434 [1076];
  
  if (*param_2 == '/') {
    cVar2 = param_2[1];
    while (cVar2 == '/') {
      pcVar1 = param_2 + 2;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  strcpy(acStack_434,param_1);
  strcat(acStack_434," ");
  strcat(acStack_434,param_2);
  set_status_message(acStack_434,param_3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void show_error_message(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_gp;
  int local_54;
  undefined4 local_50;
  undefined4 local_4;
  
  local_50 = (**(code **)(unaff_gp + -0x7c24))(param_1,*(undefined4 *)(unaff_gp + -0x7f60));
  local_54 = *(int *)(unaff_gp + -0x7f60) + 0x1f78;
  local_4 = local_50;
  uVar1 = (**(code **)(unaff_gp + -0x7ec0))
                    (**(undefined4 **)(unaff_gp + -0x75f0),*(int *)(unaff_gp + -0x7fa4) + -0x5934,
                     &local_54,1);
  uVar2 = (**(code **)(unaff_gp + -0x7eb0))(uVar1,2);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7eb0))(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f5c) + 0xa9,*(int *)(unaff_gp + -0x7fe8) + 0xf30,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x7e88))(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

/* display_status_message: moved to status.c to avoid duplicate definition */

void readingDatabaseMessage(void)

{
  undefined4 uVar1;
  
  uVar1 = XmTextGetLastPosition(active_file_list);
  XmTextInsert(active_file_list,uVar1,PTR_s_Please_be_patient_while_the_file_10007b60);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void buildingDatabaseMessage(void)

{
  undefined4 uVar1;
  
  uVar1 = XmTextGetLastPosition(active_file_list);
  XmTextInsert(active_file_list,uVar1,PTR_s_Please_be_patient_while_the_file_10007b64);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void format_log_message(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *local_408;
  char *local_404;
  char acStack_400 [1024];
  
  local_404 = "UNKNOWN PROGRAM";
  local_408 = "UNKNOWN CLASS";
  XtGetApplicationNameAndClass(param_1,&local_404,&local_408);
  sprintf(acStack_400,param_2,param_3,param_4,param_5,param_6);
  fprintf((FILE *)0xfb52904,(char *)_imsgs._176_4_,local_404,local_408,acStack_400);
  fflush((FILE *)0xfb52904);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void show_controls(void)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  controlsShowing = 1;
  ui_layout_setup_wrapper();
  XtManageChild(copy_button_widget);
  local_48 = 0xe3f40f2;
  local_44 = copy_button_widget;
  local_50 = 0xe3f40cb;
  local_4c = 3;
  XtSetValues(panel_vsep_widget,&local_50,2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
