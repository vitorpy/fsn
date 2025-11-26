/**
 * checks.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "checks.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"

void check_visibility(void)

{
  pushmatrix();
  gl_picking_setup_wrapper();
  init_display_lists();
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void check_gl_ready(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void check_unmonitor_dp(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 100) = 0;
  if ((((iVar1 << 3 < 0) && (iVar1 << 10 < 0)) && (-1 < iVar1 << 0xb)) &&
     (param_1 != *(int *)(curcontext + 0x44))) {
    iVar2 = 0;
    if (((char *)altcontext)[0xc51] != '\0') {
      iVar2 = *(int *)((char *)altcontext + 0x44);
    }
    if ((iVar2 != param_1) && (-1 < iVar1 << 0xe)) {
      flush_rendering(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
