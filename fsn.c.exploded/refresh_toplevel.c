/**
 * refresh_toplevel
 *
 * Extracted from fsn.c lines 54387-54397
 * Category: Other
 */

void refresh_toplevel(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7c98))();
  (**(code **)(unaff_gp + -0x7bb8))(**(undefined4 **)(unaff_gp + -0x75fc),uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
