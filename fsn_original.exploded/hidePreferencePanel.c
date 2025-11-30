/**
 * hidePreferencePanel
 *
 * Extracted from fsn.c lines 67898-67906
 * Category: UI
 */

void hidePreferencePanel(void)

{
  if (DAT_10008940 != 0) {
    XtUnmanageChild();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
