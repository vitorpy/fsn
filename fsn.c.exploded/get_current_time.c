/**
 * get_current_time
 *
 * Extracted from fsn.c lines 46626-46660
 * Category: Other
 */

void get_current_time(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  short local_3e8 [500];
  
  (**(code **)(unaff_gp + -0x7dd0))(2,2);
  (**(code **)(unaff_gp + -0x7b48))();
  (**(code **)(unaff_gp + -0x7de0))();
  (**(code **)(unaff_gp + -0x7dd4))(local_3e8,500);
  (**(code **)(unaff_gp + -0x7b78))
            (**(undefined4 **)(unaff_gp + -0x75d4),**(undefined4 **)(unaff_gp + -0x75d0));
  (**(code **)(unaff_gp + -0x7990))(**(undefined4 **)(unaff_gp + -0x76d4),1);
  iVar1 = (**(code **)(unaff_gp + -0x7dd8))(local_3e8);
  (**(code **)(unaff_gp + -0x7b28))();
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = (int)local_3e8[iVar2];
      if (iVar4 == 1) {
        (**(code **)(unaff_gp + -0x7a7c))((int)local_3e8[iVar2 + 1]);
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1 + iVar4;
    } while (iVar3 != iVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
