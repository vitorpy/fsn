/**
 * quit_application
 *
 * Extracted from fsn.c lines 51138-51144
 * Category: Other
 */

void quit_application(void)

{
  cleanup_before_exit();
                    // WARNING: Subroutine does not return
  exit(0);
}
