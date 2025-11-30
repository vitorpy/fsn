/**
 * FAMMonitorDirectory2
 *
 * Extracted from fsn.c lines 61859-61865
 * Category: Filesystem
 */

void FAMMonitorDirectory2(void)

{
  fam_monitor_request();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
