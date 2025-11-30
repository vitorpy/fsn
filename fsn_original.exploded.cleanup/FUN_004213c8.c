/**
 * FUN_004213c8
 *
 * Extracted from fsn.c lines 61157-61191
 * Ghidra address: 0x004213c8
 * Category: Other
 */

void FUN_004213c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  short local_3e8 [500];
  
  (**(code **)(unaff_gp + -0x7dd0) /* -> EXTERNAL_0x0f1214b8 */)(2,2);
  (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  (**(code **)(unaff_gp + -0x7de0) /* -> EXTERNAL_0x0f12812c */)();
  (**(code **)(unaff_gp + -0x7dd4) /* -> EXTERNAL_0x0f121cb8 */)(local_3e8,500);
  (**(code **)(unaff_gp + -0x7b78) /* -> EXTERNAL_0x0f123238 */)
            (**(undefined4 **)(unaff_gp + -0x75d4) /* -> minx */,**(undefined4 **)(unaff_gp + -0x75d0) /* -> maxx */);
  (**(code **)(unaff_gp + -0x7990) /* -> FUN_00420408 */)(**(undefined4 **)(unaff_gp + -0x76d4) /* -> topdir */,1);
  iVar1 = (**(code **)(unaff_gp + -0x7dd8) /* -> EXTERNAL_0x0f1232b8 */)(local_3e8);
  (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = (int)local_3e8[iVar2];
      if (iVar4 == 1) {
        (**(code **)(unaff_gp + -0x7a7c) /* -> FUN_00411e68 */)((int)local_3e8[iVar2 + 1]);
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1 + iVar4;
    } while (iVar3 != iVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
