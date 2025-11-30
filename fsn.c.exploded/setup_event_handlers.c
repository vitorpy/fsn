/**
 * setup_event_handlers
 *
 * Extracted from fsn.c lines 36724-36740
 * Category: Init
 */

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
