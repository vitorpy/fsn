/**
 * dirfamMonitor
 *
 * Extracted from fsn.c lines 64793-64801
 * Category: Filesystem
 */

void dirfamMonitor(void)

{
  if ((fsn_resources == '\0') && (DAT_100078b0 == 0)) {
    DAT_100078b0 = XtAppAddInput(app_context,DAT_10016c70,1,FUN_00428044,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
