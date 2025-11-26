/**
 * events.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "events.h"
#include "fsn_types.h"
#include "fsn_state.h"

void setup_event_handlers(void)

{
  *(undefined4 *)curcontext = view_init_x;
  *(undefined4 *)(curcontext + 4) = view_init_y;
  *(undefined4 *)(curcontext + 8) = view_init_z;
  *(undefined2 *)(curcontext + 0xc) = 0;
  *(short *)(curcontext + 0xe) = (short)view_init_rotation_x;
  *(short *)(curcontext + 0x10) = (short)view_init_rotation_y;
  init_view_transform();
  init_camera_state();
  curcontext[0xc51] = 0;
  curcontext[0xc53] = 0;
  init_context_windows();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void handleEvents(void)

{
  int iVar1;
  undefined1 auStack_60 [96];
  
  iVar1 = XtAppPending(app_context);
  if (iVar1 == 0) {
    iVar1 = check_gl_ready();
    if (iVar1 == 0) goto LAB_00411a50;
  }
  do {
    do {
      XtAppNextEvent(app_context,auStack_60);
      XtDispatchEvent(auStack_60);
      iVar1 = XtAppPending(app_context);
    } while (iVar1 != 0);
    iVar1 = check_gl_ready();
  } while (iVar1 != 0);
LAB_00411a50:
  reset_view_state();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void process_pending_events(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_gp;
  undefined1 auStack_60 [96];
  
  puVar2 = *(undefined4 **)(unaff_gp + -0x7600);
  iVar1 = (**(code **)(unaff_gp + -0x7cdc))(*puVar2);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(unaff_gp + -0x7ab8))();
    if (iVar1 == 0) goto LAB_00411a50;
  }
  do {
    do {
      (**(code **)(unaff_gp + -0x7cf4))(*puVar2,auStack_60);
      (**(code **)(unaff_gp + -0x7d10))(auStack_60);
      iVar1 = (**(code **)(unaff_gp + -0x7cdc))(*puVar2);
    } while (iVar1 != 0);
    iVar1 = (**(code **)(unaff_gp + -0x7ab8))();
  } while (iVar1 != 0);
LAB_00411a50:
  (**(code **)(unaff_gp + -0x7ac8))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
