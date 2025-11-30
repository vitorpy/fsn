/**
 * preExit
 *
 * Extracted from fsn.c lines 42124-42134
 * Category: Other
 */

void preExit(void)

{
  if (fsn_resources == '\0') {
    post_realize_setup(toplevel);
    init_rendering();
    refresh_after_change();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
