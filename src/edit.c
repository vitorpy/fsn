/**
 * edit.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "edit.h"
#include "fsn_types.h"
#include "fsn_state.h"

void editCB(void)

{
  char *pcVar1;
  size_t sVar2;
  char acStack_564 [1380];
  
  if (((*(int *)(curcontext + 0x48) != 0) && (*(int *)(curcontext + 0x44) != 0)) &&
     (pcVar1 = getenv("WINEDITOR"), pcVar1 != (char *)0x0)) {
    sprintf(acStack_564,"%s ",pcVar1);
    sVar2 = strlen(acStack_564);
    build_path_string(acStack_564 + sVar2,*(undefined4 *)(curcontext + 0x44));
    strcat(acStack_564,(char *)**(undefined4 **)(curcontext + 0x48));
    strcat(acStack_564,"&");
    system(acStack_564);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
