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
