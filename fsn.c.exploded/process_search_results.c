/**
 * process_search_results
 *
 * Extracted from fsn.c lines 38410-38421
 * Category: Other
 */

void process_search_results(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x180));
  (**(code **)(unaff_gp + -0x7cf8))();
  (**(code **)(unaff_gp + -0x7b54))();
  (**(code **)(unaff_gp + -0x7cd0))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
