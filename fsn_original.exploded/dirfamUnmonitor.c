/**
 * dirfamUnmonitor
 *
 * Extracted from fsn.c lines 64829-64838
 * Category: Filesystem
 */

void dirfamUnmonitor(void)

{
  if ((fsn_resources == '\0') && (DAT_100078b0 != 0)) {
    XtRemoveInput();
    DAT_100078b0 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
