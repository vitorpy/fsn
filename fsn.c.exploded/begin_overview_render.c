/**
 * begin_overview_render
 *
 * Extracted from fsn.c lines 45849-45859
 * Category: Graphics
 */

void begin_overview_render(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c04));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
