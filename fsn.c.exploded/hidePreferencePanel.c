/**
 * hidePreferencePanel
 *
 * Extracted from fsn.c lines 52861-52869
 * Category: UI
 */

void hidePreferencePanel(void)

{
  if (preference_panel_shell != 0) {
    XtUnmanageChild();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
