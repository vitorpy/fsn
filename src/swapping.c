/**
 * swapping.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "swapping.h"
#include "fsn_types.h"
#include "fsn_state.h"

void swapcontext(undefined1 param_1)

{
  set_context_state(1 - curcontextid,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
