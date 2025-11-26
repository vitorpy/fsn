/**
 * convert.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "convert.h"
#include "fsn_types.h"
#include "fsn_state.h"

void __ct__11ConvertInfoFv(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)__nw__FUi(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
