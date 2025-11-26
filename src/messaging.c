/**
 * messaging.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "messaging.h"
#include "fsn_types.h"
#include "fsn_state.h"

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
