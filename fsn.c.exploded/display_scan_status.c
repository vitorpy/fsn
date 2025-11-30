/**
 * display_scan_status
 *
 * Extracted from fsn.c lines 38753-38775
 * Category: Graphics
 */

void display_scan_status(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int unaff_gp;
  undefined1 auStack_434 [1076];
  
  if (*param_2 == '/') {
    cVar2 = param_2[1];
    while (cVar2 == '/') {
      pcVar1 = param_2 + 2;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  (**(code **)(unaff_gp + -0x7ecc))(auStack_434,param_1);
  (**(code **)(unaff_gp + -0x7ce4))(auStack_434,*(int *)(unaff_gp + -0x7fa4) + -0x5938);
  (**(code **)(unaff_gp + -0x7ce4))(auStack_434,param_2);
  (**(code **)(unaff_gp + -0x7a98))(auStack_434,param_3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
