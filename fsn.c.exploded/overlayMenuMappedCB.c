/**
 * overlayMenuMappedCB
 *
 * Extracted from fsn.c lines 47249-47258
 * Category: UI
 */

void overlayMenuMappedCB(void)

{
  undefined4 uVar1;
  
  uVar1 = XtWindow();
  setup_window_state(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
