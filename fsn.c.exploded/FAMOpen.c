/**
 * FAMOpen
 *
 * Extracted from fsn.c lines 61625-61631
 * Category: Other
 */

void FAMOpen(undefined4 param_1)

{
  close_connections(param_1,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
