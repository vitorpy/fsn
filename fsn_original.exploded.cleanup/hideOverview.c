/**
 * hideOverview
 *
 * Extracted from fsn.c lines 61049-61058
 * Category: Other
 */

void hideOverview(void)

{
  if (DAT_10006eb4 != 0) {
    overviewActive = 0;
    XtUnmanageChild();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
