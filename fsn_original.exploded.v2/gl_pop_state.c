/**
 * gl_pop_state
 *
 * Extracted from fsn.c lines 66585-66593
 * Category: Filesystem
 */

void gl_pop_state(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7898) /* -> FUN_0042a4d4 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6e00),1) /* =FUN_0042a4d4 */;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
