/**
 * FUN_00427300
 *
 * Extracted from fsn.c lines 64281-64323
 * Ghidra address: 0x00427300
 * Category: Other
 */

void FUN_00427300(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  undefined4 uVar3;
  
  if (param_1 == *(int *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c60)) {
    (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    iVar2 = *(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */;
    iVar1 = *(int *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c64);
    (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (*(float *)(iVar1 + 0x14) - (*(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x74)),
               *(undefined4 *)(iVar1 + 0x18),iVar2,param_2,0);
    uVar3 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x70);
    (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar3,uVar3);
    (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
    (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f28);
    (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f30);
    (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f38);
    (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
    (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  }
  else if (param_1 == *(int *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c64)) {
    (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    iVar2 = *(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */;
    iVar1 = *(int *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c60);
    (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (*(float *)(iVar1 + 0x14) + *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x74),
               *(undefined4 *)(iVar1 + 0x18),iVar2,param_2,0);
    uVar3 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x70);
    (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar3,uVar3);
    (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
    (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f10);
    (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f18);
    (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f20);
    (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
    (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
