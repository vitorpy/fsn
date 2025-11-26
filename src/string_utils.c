/**
 * string_utils.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "string_utils.h"
#include "fsn_types.h"
#include "fsn_state.h"

void get_icon_string(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void find_string_index(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = string_buffer;
  if (0 < buffer_size) {
    do {
      if (param_1 == *piVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
