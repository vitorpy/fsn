/**
 * scheduleDatabaseDumpTimeout
 *
 * Extracted from fsn.c lines 54255-54261
 * Category: Other
 */

void scheduleDatabaseDumpTimeout(void)

{
  XtAppAddTimeOut(app_context,900000,databaseDumpTimeout,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
