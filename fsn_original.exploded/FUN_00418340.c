/**
 * FUN_00418340
 *
 * Extracted from fsn.c lines 55805-55845
 * Ghidra address: 0x00418340
 * Category: Other
 */

void FUN_00418340(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  int unaff_gp;
  undefined1 auStack_94 [136];
  undefined4 local_c;
  
  if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
    local_c = (**(code **)(unaff_gp + -0x7a84))(0,param_1);
    (**(code **)(unaff_gp + -0x7ce4))(local_c,param_2);
    iVar1 = (**(code **)(unaff_gp + -0x7ee0))(local_c,auStack_94);
    if (iVar1 < 0) {
      bVar2 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar2 & 0x7f;
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfe;
      *(byte *)(param_1 + 0x75) = bVar2 & 0x3f;
      iVar1 = (**(code **)(unaff_gp + -0x7a5c))(param_1,param_2);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(unaff_gp + -0x7a58))(param_1,param_2);
        if (iVar1 != 0) {
          bVar2 = *(byte *)(iVar1 + 0x74) & 0xfd;
          *(byte *)(iVar1 + 0x74) = bVar2;
          *(byte *)(iVar1 + 0x74) = bVar2 | 4;
          *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0x7f | 0x80;
        }
      }
      else {
        *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0x7f;
        *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xfe | 1;
        *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
      }
      if (((*(byte *)(param_1 + 0x74) & 1) != 0) || (*(char *)(param_1 + 0x75) < '\0')) {
        (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x44ec))(param_1);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
