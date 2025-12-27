/**
 * sorting.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "sorting.h"
#include "fsn_types.h"
#include "fsn_state.h"

void sort_entries(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                 uint *param_6)

{
  uint uVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = param_2 + param_4 * (param_3 + -1);
  if (param_2 <= uVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
    return;
  }
  if (0 < local_14) {
    local_10 = local_10 + param_4;
  }
  if (uVar1 < local_10) {
    local_10 = 0;
  }
  *param_6 = local_10;
                    // WARNING: Bad instruction - Truncating control flow here
  return;
}
