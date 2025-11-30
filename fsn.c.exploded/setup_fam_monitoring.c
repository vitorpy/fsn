/**
 * setup_fam_monitoring
 *
 * Extracted from fsn.c lines 50089-50105
 * Category: Init
 */

void setup_fam_monitoring(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') &&
     (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) == 0)) {
    uVar1 = (**(code **)(unaff_gp + -0x7f30))
                      (**(undefined4 **)(unaff_gp + -0x7600),
                       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c70),1,
                       *(int *)(unaff_gp + -0x7fe0) + -0x7fbc,0);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) = uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
