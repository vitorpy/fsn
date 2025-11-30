/**
 * gl_picking_setup_wrapper
 *
 * Extracted from fsn.c lines 37429-37439
 * Category: Input
 */

void gl_picking_setup_wrapper(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ca8))
            ((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0x10),0x3f800000,0x3d4ccccd,0x43fa0000
            );
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
