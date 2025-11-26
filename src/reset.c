/**
 * reset.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "reset.h"
#include "fsn_types.h"
#include "fsn_state.h"

void glx_reset_context_wrapper(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void reset_eye(void)

{
  save_matrix_state();
  set_camera_lookat((double)view_init_x,(double)view_init_y);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
