/**
 * messaging.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "messaging.h"
#include "messages.h"
#include "fsn_types.h"
#include "fsn_state.h"

void message(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  XmString uVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;

  puVar1 = (undefined4 *)XtMalloc(0xc);
  uVar2 = XmStringCreateSimple((char *)param_1);
  *puVar1 = (undefined4)uVar2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = (undefined4)current_directory_node;
  uStack_54 = 0xe3f40b5;
  uStack_50 = *puVar1;
  current_directory_node = puVar1;
  XtSetValues(message_widget,(ArgList)&uStack_54,1);
  if (param_2 != 0) {
    XtAppAddTimeOut(app_context,param_2,(XtTimerCallbackProc)deleteMessage,(XtPointer)puVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00410d98):
     * Function: message
     *
     * Looking at the assembly:
     * 1. **What it does:** Finalizes a message structure (zeroes byte at offset 8, stores length at offset 4, links to list), then calls XtVaSetValues to update a widget with the message. If a callback parameter exists, calls XtAddCallback on the message widget.
     * 2. **C pseudocode:**
     * // c
     * s0->text[len] = '\0';           // sb zero,8(s0) - null terminate
     * s0->length = len;               // sw t6,4(s0)
     * *list_tail = s0;                // sw s0,0(v1) - link to message list
     * // Build XtVaSetValues args on stack
     * args[0] = XmNlabelString;       // 0x1d4d = 7501
     * args[1] = s0->xmstring;         // from s0+0
     * XtVaSetValues(curcontext->messageWidget, &args, 1);
     * if (callback != NULL) {         // beqz a1,410e60
     * XtAddCallback(topLevelShell, XmNdestroyCallback, callback, s0);
     * }
     * return s0;
     * // end pseudocode
     * The magic number 7501 (0x1d4d) is XmNlabelString resource. GP offsets: -32660 is curcontext, -31936 is XtVaSetValues, -30208 is topLevelShell, -32404 is XtAddCallback, -31388 is XmNdestroyCallback.
     */
  return;
}

void buildingDatabaseMessage(void)
{
  undefined4 uVar1;

  uVar1 = XmTextGetLastPosition((Widget)active_file_list);
  XmTextInsert((Widget)active_file_list,uVar1,PTR_s_Please_be_patient_while_the_file_10007b64);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b024):
     * Function: buildingDatabaseMessage
     *
     * Looking at the GP offsets and call pattern:
     * **What it does:**
     * 1. Loads curcontext, gets widget at offset 0x6e10 (28176), calls XtName() on it
     * 2. Passes that name + another string (from GP offset 0x8068, offset 0x7b64) to set_status_message()
     * **C pseudocode:**
     * 
     * void buildingDatabaseMessage(void) {
     * char *widget_name = XtName(((Widget *)curcontext)[0x6e10/4]);
     * set_status_message(((Widget *)curcontext)[0x6e10/4], widget_name, buildingDatabaseStr);
     * }
     * 
     * Wait, let me check the offsets more carefully. 0x6e10 = 28176 bytes, which for the curcontext array would be index 28176/4 = 7044 if treating as int array, but this is likely a direct widget pointer at that offset in the context structure.
     * **Refined C:**
     * 
     * void buildingDatabaseMessage(void) {
     * Widget statusWidget = *(Widget *)((char *)curcontext + 0x6e10);
     * char *name = XtName(statusWidget);
     * set_status_message(statusWidget, name, buildingDatabaseStr);
     * }
     * 
     * GP offsets: -32660 (0x806c) = curcontext, -32364 (0x8194) = XtName, -32664 (0x8068) = pointer to string table, -32368 (0x8190) = set_status_message
     */
  return;
}

void format_log_message(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *local_408;
  char *local_404;
  char acStack_400 [1024];

  local_404 = "UNKNOWN PROGRAM";
  local_408 = "UNKNOWN CLASS";
  XtGetApplicationNameAndClass((Display *)param_1,&local_404,&local_408);
  sprintf(acStack_400,param_2,param_3,param_4,param_5,param_6);
  fprintf((FILE *)0xfb52904,(char *)_imsgs[176/4],local_404,local_408,acStack_400);
  fflush((FILE *)0xfb52904);
                    // WARNING: Bad instruction - Truncating control flow here
  return;
}
