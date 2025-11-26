/**
 * finalize.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "finalize.h"
#include "fsn_types.h"
#include "fsn_state.h"

void finalize_update(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7e6c))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10));
  (**(code **)(unaff_gp + -0x7e70))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10),uVar1,
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x7b64));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void install_help_callback(undefined4 param_1,undefined4 param_2)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))
            (param_1,*(int *)(unaff_gp + -0x7f60) + 0x1b37,*(int *)(unaff_gp + -0x7fe0) + -0x4c0c,
             param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
