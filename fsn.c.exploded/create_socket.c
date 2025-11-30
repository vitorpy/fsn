/**
 * create_socket
 *
 * Extracted from fsn.c lines 62456-62467
 * Category: UI
 */

void create_socket(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
