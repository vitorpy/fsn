/**
 * dirfamDone
 *
 * Extracted from fsn.c lines 64692-64700
 * Category: Filesystem
 */

void dirfamDone(void)

{
  if (fsn_resources == '\0') {
    FUN_00439c0c(&DAT_10016c70);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
