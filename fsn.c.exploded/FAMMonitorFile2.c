/**
 * FAMMonitorFile2
 *
 * Extracted from fsn.c lines 61898-61904
 * Category: Filesystem
 */

void FAMMonitorFile2(void)

{
  fam_monitor_request();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
