/**
 * init_database_display
 *
 * Extracted from fsn.c lines 40884-40893
 * Category: Graphics
 */

void init_database_display(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7e94))
            (**(undefined4 **)(unaff_gp + -0x7600),900000,*(undefined4 *)(unaff_gp + -0x7a4c),0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
