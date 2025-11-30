/**
 * install_help_callback
 *
 * Extracted from fsn.c lines 52474-52484
 * Category: Other
 */

void install_help_callback(undefined4 param_1,undefined4 param_2)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))
            (param_1,*(int *)(unaff_gp + -0x7f60) + 0x1b37,*(int *)(unaff_gp + -0x7fe0) + -0x4c0c,
             param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
