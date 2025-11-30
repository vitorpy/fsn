/**
 * databaseDumpTimeout
 *
 * Extracted from fsn.c lines 40859-40866
 * Category: Other
 */

void databaseDumpTimeout(void)

{
  refresh_after_change();
  init_database_display();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
