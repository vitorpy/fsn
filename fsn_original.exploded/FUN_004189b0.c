/**
 * FUN_004189b0
 *
 * Extracted from fsn.c lines 56202-56262
 * Ghidra address: 0x004189b0
 * Category: Other
 */

void FUN_004189b0(byte *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  
  uVar3 = (uint)*param_1;
  if (uVar3 != 0) {
    iVar5 = *(int *)(unaff_gp + -0x76cc);
    do {
      iVar1 = *(int *)(iVar5 + uVar3 * 0xd8);
      if ((iVar1 != 0) && (iVar1 != 0)) {
        iVar4 = 0;
        do {
          if (iVar1 == 1) {
            iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
            (**(code **)(unaff_gp + -0x7b60))((float)*(int *)(iVar1 + 4),(float)*(int *)(iVar1 + 8))
            ;
            uVar3 = (uint)*param_1;
            iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
LAB_00418bcc:
            iVar1 = *(int *)(iVar1 + 0xc);
          }
          else {
            if (iVar1 == 2) {
              (**(code **)(unaff_gp + -0x7b7c))();
              (**(code **)(unaff_gp + -0x7c68))(iVar5 + (uint)*param_1 * 0xd8 + iVar4 + 4);
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            iVar2 = iVar5 + uVar3 * 0xd8 + iVar4;
            if (iVar1 == 3) {
              (**(code **)(unaff_gp + -0x7c68))(iVar2 + 4);
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            if (iVar1 == 4) {
              (**(code **)(unaff_gp + -0x7c68))(iVar2 + 4);
              (**(code **)(unaff_gp + -0x7b94))();
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            iVar1 = *(int *)(iVar2 + 0xc);
          }
          iVar4 = iVar4 + 0xc;
        } while (iVar1 != 0);
      }
      uVar3 = (uint)param_1[1];
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
