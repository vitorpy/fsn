/**
 * dirfamUnmonitor
 *
 * Extracted from fsn.c lines 50111-50120
 * Category: Filesystem
 */

void dirfamUnmonitor(void)

{
  if ((fsn_resources == '\0') && (database_loaded_flag != 0)) {
    XtRemoveInput();
    database_loaded_flag = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
