/**
 * FUN_0042fb84
 *
 * Extracted from fsn.c lines 69794-69833
 * Ghidra address: 0x0042fb84
 * Category: Other
 */

void FUN_0042fb84(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int unaff_gp;
  undefined4 local_20 [3];
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x69d0) == 0) {
    uVar1 = (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)();
    puVar3 = *(undefined4 **)(unaff_gp + -0x75fc) /* -> display */;
    local_4 = (**(code **)(unaff_gp + -0x7bb0) /* -> EXTERNAL_0x0f547d40 */)
                        (*puVar3,uVar1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x6ad0,0x20,0x20);
    uVar1 = (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)(param_1);
    local_8 = (**(code **)(unaff_gp + -0x7bb0) /* -> EXTERNAL_0x0f547d40 */)
                        (*puVar3,uVar1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x6a50,0x20,0x20);
    iVar2 = (**(code **)(unaff_gp + -0x7bb4) /* -> EXTERNAL_0x0f6968fc */)(param_1);
    local_20[0] = *(undefined4 *)(iVar2 + 0x38);
    iVar2 = (**(code **)(unaff_gp + -0x7bb4) /* -> EXTERNAL_0x0f6968fc */)(param_1);
    local_14[0] = *(undefined4 *)(iVar2 + 0x34);
    iVar2 = (**(code **)(unaff_gp + -0x7bb4) /* -> EXTERNAL_0x0f6968fc */)(param_1);
    (**(code **)(unaff_gp + -0x7b74) /* -> EXTERNAL_0x0f54f258 */)(*puVar3,*(undefined4 *)(iVar2 + 0x30),local_20,2);
    uVar1 = (**(code **)(unaff_gp + -0x7b84) /* -> EXTERNAL_0x0f5603e4 */)(*puVar3,local_4,local_8,local_20,local_14,0xf,0xf);
    pcVar4 = *(code **)(unaff_gp + -0x7b8c) /* -> EXTERNAL_0x0f54a21c */;
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x69d0) = uVar1;
    (*pcVar4)(*puVar3,local_4);
    (**(code **)(unaff_gp + -0x7b8c) /* -> EXTERNAL_0x0f54a21c */)(*puVar3,local_8);
  }
  puVar3 = *(undefined4 **)(unaff_gp + -0x75fc) /* -> display */;
  uVar1 = (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)(param_1);
  (**(code **)(unaff_gp + -0x7b90) /* -> EXTERNAL_0x0f561aec */)
            (*puVar3,uVar1,*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x69d0));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
