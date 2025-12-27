/**
 * delete.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "delete.h"
#include "fsn_types.h"
#include "fsn_state.h"

void deleteMessage(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_c;
  XmString local_8;
  
  puVar1 = current_directory_node;
  if (param_1 == current_directory_node) {
    do {
      current_directory_node = (undefined4 *)puVar1[1];
      XmStringFree((XmString)*puVar1);
      XtFree((char*)puVar1);
      if (current_directory_node == (undefined4 *)0x0) break;
      puVar1 = current_directory_node;
    } while (*(char *)(current_directory_node + 2) != '\0');
    if (current_directory_node == (undefined4 *)0x0) {
      local_8 = (XmString)blankXmString;
    }
    else {
      local_8 = (XmString)*current_directory_node;
    }
    local_c = 0xe3f40b5;
    XtSetValues(message_widget,(Arg*)&local_c,1);
  }
  else {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  /*
   * BADDATA ANALYSIS (from binary @ 0x00410c9c):
   * Function: deleteMessage
   *
   * Looking at this assembly:
   * **What it does:**
   * Builds XtVaSetValues args on stack. If v0 (widget?) is non-null, uses its first field as value; otherwise uses a global default. Calls XtVaSetValues with XmNmessageString resource, then returns (or sets byte at offset 8 of a0 to 1 via alternate path).
   * **C pseudocode:**
   * // c
   * char *args[2];
   * if (widget != NULL) {
   * args[0] = XmNmessageString;  // gp[-32608] + 7501 = string resource name
   * args[1] = (char *)widget->first_field;
   * } else {
   * args[0] = XmNmessageString;
   * args[1] = (char *)*default_message_ptr;  // gp[-30200]
   * }
   * XtVaSetValues(curcontextwindows[0x6648/4], args, 1);
   * // alternate exit path: target->flag = 1;
   * GP offsets: -32608 (0x80a0) = string table base, -30200 (0x8a08) = default message global, -32660 (0x806c) = curcontextwindows, -31936 (0x8340) = XtVaSetValues
   */
  return;
}
