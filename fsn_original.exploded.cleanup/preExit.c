/**
 * preExit
 *
 * Extracted from fsn.c lines 56103-56113
 * Category: Other
 */

void preExit(void)

{
  if (fsn_resources == '\0') {
    FUN_0042fb84(toplevel);
    FUN_00427de0();
    FUN_00414da4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
