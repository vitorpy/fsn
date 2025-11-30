/**
 * set_main_gl_window
 *
 * Extracted from fsn.c lines 37358-37368
 * Category: Other
 */

void set_main_gl_window(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)**(undefined4 **)(unaff_gp + -0x767c));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
