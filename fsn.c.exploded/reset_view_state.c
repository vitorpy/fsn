/**
 * reset_view_state
 *
 * Extracted from fsn.c lines 37618-37628
 * Category: Filesystem
 */

void reset_view_state(void)

{
  int unaff_gp;
  
  if (*(char *)(*(int *)(unaff_gp + -0x7f94) + 0x6688) != '\0') {
    (**(code **)(unaff_gp + -0x7acc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
