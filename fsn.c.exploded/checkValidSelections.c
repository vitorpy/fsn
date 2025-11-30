/**
 * checkValidSelections
 *
 * Extracted from fsn.c lines 45302-45337
 * Category: Input
 */

void checkValidSelections(void)

{
  if ((*(int *)(curcontext + 0x48) != 0) && (-1 < *(int *)(*(int *)(curcontext + 0x48) + 0x28) << 5)
     ) {
    clear_current_selection();
  }
  if ((*(int *)(curcontext + 0x44) != 0) && (-1 < *(int *)(*(int *)(curcontext + 0x44) + 0x74) << 3)
     ) {
    clear_marked_state();
  }
  if ((*(int *)(curcontext + 0x3c) != 0) && (-1 < *(int *)(*(int *)(curcontext + 0x3c) + 0x74) << 3)
     ) {
    reset_eye();
  }
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    if ((*(int *)(curcontext + 0x48) != 0) &&
       (-1 < *(int *)(*(int *)(curcontext + 0x48) + 0x28) << 5)) {
      clear_current_selection();
    }
    if ((*(int *)(curcontext + 0x44) != 0) &&
       (-1 < *(int *)(*(int *)(curcontext + 0x44) + 0x74) << 3)) {
      clear_marked_state();
    }
    if ((*(int *)(curcontext + 0x3c) != 0) &&
       (-1 < *(int *)(*(int *)(curcontext + 0x3c) + 0x74) << 3)) {
      reset_eye();
    }
    gl_swap_buffers(1);
  }
  update_widget_state();
  prepare_draw_frame();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
