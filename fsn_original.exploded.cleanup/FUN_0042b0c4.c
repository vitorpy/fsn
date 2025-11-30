/**
 * FUN_0042b0c4
 *
 * Extracted from fsn.c lines 67255-67311
 * Ghidra address: 0x0042b0c4
 * Category: Other
 */

void FUN_0042b0c4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_gp;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  
  local_2c = 0;
  (**(code **)(unaff_gp + -0x77f4) /* -> FUN_00432094 */)(**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,0,&local_28,&local_2c);
  uVar1 = (**(code **)(unaff_gp + -0x7bcc) /* -> EXTERNAL_0x0e2e51b8 */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1c80,&local_28,local_2c);
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1e96,*(undefined4 *)(unaff_gp + -0x7950) /* -> overlayMenuMappedCB */,0);
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar1,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x28d0,*(undefined4 *)(unaff_gp + -0x7954) /* -> overlayMenuUnmappedCB */,0);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(uVar1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1c8c,&local_28,0)
  ;
  iVar3 = *(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x4c0c;
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar2,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x7660) /* -> topHelp */);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(uVar1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1c98,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar2,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + -0x4a54,0);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(uVar1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1ca8,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar2,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x7668) /* -> modeHelp */);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20) /* -> EXTERNAL_0x0e2c92cc */)(uVar1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1cb4,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (uVar2,*(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x766c) /* -> versionHelp */);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar2);
  local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x26c9;
  local_2c = 1;
  local_24 = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7bf8) /* -> EXTERNAL_0x0e25ea68 */)
                    (param_1,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + 0x1cc4,&local_28,1);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(uVar1);
  local_2c = 1;
  local_28 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1f37;
  local_24 = uVar1;
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)(param_1,&local_28,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
