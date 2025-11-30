/**
 * FUN_0041fdf0
 *
 * Extracted from fsn.c lines 60413-60568
 * Ghidra address: 0x0041fdf0
 * Category: Other
 */

void FUN_0041fdf0(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int unaff_gp;
  double dVar6;
  uint uVar7;
  undefined8 in_f18;
  uint in_fcsr;
  int local_b8;
  undefined4 local_b4 [3];
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 *local_9c;
  int local_98;
  int *local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  uVar7 = (uint)((ulonglong)in_f18 >> 0x20);
  if (*(char *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ebc) == '\0') {
    (**(code **)(unaff_gp + -0x7c3c) /* -> EXTERNAL_0x0f6971e0 */)
              (**(undefined4 **)(unaff_gp + -0x7600) /* -> app_context */,*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6e94,4);
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ebc) = 1;
  }
  local_9c = local_b4;
  local_a0 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x9a;
  iVar2 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)();
  local_94 = &local_b8;
  if (iVar2 == 0) {
    local_98 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x469c;
  }
  else {
    local_98 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x46ac;
  }
  (**(code **)(unaff_gp + -0x7c9c) /* -> EXTERNAL_0x0f672b80 */)(*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 8),&local_a0,2)
  ;
  local_a0 = *(int *)(unaff_gp + -0x7f80) /* -> EXTERNAL_0x0f661f7c */ + 0x118;
  local_9c = (undefined4 *)0x1;
  uVar3 = (**(code **)(unaff_gp + -0x7df4) /* -> EXTERNAL_0x0f691b04 */)
                    (*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x468c,**(undefined4 **)(unaff_gp + -0x7f74) /* -> EXTERNAL_0x0f6d16fc */,
                     **(undefined4 **)(unaff_gp + -0x75f0) /* -> toplevel */,&local_a0,1);
  iVar2 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6eb4) = uVar3;
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar3,iVar2 + 0xa9,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0x1180,0);
  local_a8 = (**(code **)(unaff_gp + -0x7c84) /* -> EXTERNAL_0x0e292660 */)
                       (*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6eb4),
                        *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4680,&local_a0,0);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(local_a8);
  (**(code **)(unaff_gp + -0x785c) /* -> FUN_0042b6c0 */)(local_a8,*(undefined4 *)(unaff_gp + -0x76c0) /* -> overviewHelp */);
  iVar2 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)();
  if (iVar2 != 0) {
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6e64) = 0x3000;
  }
  local_9c = (undefined4 *)0x1;
  local_a0 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x27b5;
  local_98 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1d63;
  local_90 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x2375;
  local_88 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x1399;
  local_80 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4670;
  local_7c = *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6e64;
  local_94 = (int *)0x1;
  local_8c = 1;
  local_84 = 1;
  iVar2 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)();
  if (iVar2 == 0) {
    local_78 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4658;
  }
  else {
    local_78 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4664;
  }
  local_74 = 1;
  local_70 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x368;
  dVar6 = ((double)**(float **)(unaff_gp + -0x75d0) /* -> maxx */ - (double)**(float **)(unaff_gp + -0x75d4) /* -> minx */) *
          (double)((ulonglong)uVar7 << 0x20);
  local_68 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0xea;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar6 = ROUND(dVar6);
  }
  else {
    dVar6 = FLOOR(dVar6);
  }
  local_6c = (int)dVar6;
  fVar1 = **(float **)(unaff_gp + -0x75c8) /* -> maxy */ - **(float **)(unaff_gp + -0x75cc) /* -> miny */;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar1);
  }
  else {
    fVar1 = FLOOR(fVar1);
  }
  local_64 = (int)fVar1;
  local_a4 = 8;
  iVar2 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)();
  if (iVar2 == 0) {
    piVar4 = &local_a0 + local_a4 * 2;
    *piVar4 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x463c;
  }
  else {
    piVar4 = &local_a0 + local_a4 * 2;
    *piVar4 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x464c;
  }
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  pcVar5 = *(code **)(unaff_gp + -0x7e04) /* -> EXTERNAL_0x0e197f48 */;
  piVar4[1] = local_b8;
  uVar3 = (*pcVar5)(local_a8,iVar2 + -0x462c,&local_a0,local_a4 + 1);
  iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c0c) = uVar3;
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)(uVar3,iVar2 + -0x4620,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0xbfc,0);
  iVar2 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)();
  if (iVar2 == 0) {
    iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x45fc;
  }
  else {
    iVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4610;
  }
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c0c),iVar2,
             *(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0xc50,0);
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c0c),
             *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x45e8,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0xca4,0);
  (**(code **)(unaff_gp + -0x7c54) /* -> EXTERNAL_0x0f6729a4 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c0c),
             *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x45d8,*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0xe74,0);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c0c));
  iVar2 = *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6e60);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(unaff_gp + -0x7c10) /* -> EXTERNAL_0x0f688dec */)(*(undefined4 *)(unaff_gp + -0x76ac) /* -> overviewGlw_translations */);
    iVar2 = *(int *)(unaff_gp + -0x7f98) /* -> small */;
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6e60) = uVar3;
    iVar2 = *(int *)(iVar2 + 0x6e60);
  }
  (**(code **)(unaff_gp + -0x7c58) /* -> EXTERNAL_0x0f67f400 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c0c),iVar2);
  local_a0 = *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x9a;
  local_9c = (undefined4 *)local_b4[0];
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c0c),&local_a0,1);
  (**(code **)(unaff_gp + -0x7c78) /* -> EXTERNAL_0x0f685528 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6eb4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
