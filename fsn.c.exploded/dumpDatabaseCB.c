/**
 * dumpDatabaseCB
 *
 * Extracted from fsn.c lines 40847-40853
 * Category: Other
 */

void dumpDatabaseCB(void)

{
  refresh_after_change();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
