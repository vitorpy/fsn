/**
 * set_main_gl_window
 *
 * Extracted from fsn.c lines 50046-50056
 * Category: Other
 */

void set_main_gl_window(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c) /* -> EXTERNAL_0x0f14c31c */)
            (**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,
             *(undefined4 *)**(undefined4 **)(unaff_gp + -0x767c) /* -> curcontextwindows */);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
