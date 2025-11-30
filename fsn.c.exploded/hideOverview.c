/**
 * hideOverview
 *
 * Extracted from fsn.c lines 46563-46572
 * Category: Other
 */

void hideOverview(void)

{
  if (overview_popup_shell != 0) {
    overviewActive = 0;
    XtUnmanageChild();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
