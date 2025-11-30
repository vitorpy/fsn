/**
 * load_context_data
 *
 * Extracted from fsn.c lines 57203-57222
 * Category: Other
 */

void load_context_data(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_gp;
  
  puVar2 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    iVar1 = (**(code **)(unaff_gp + -0x7f34))(param_2,*puVar2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
  (**(code **)(unaff_gp + -0x779c))(0,puVar2);
  halt_baddata();
}
