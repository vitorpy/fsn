/**
 * set_status_message
 *
 * Extracted from fsn.c lines 52021-52052
 * Category: Filesystem
 */

void set_status_message(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int unaff_gp;
  int local_54;
  undefined4 local_50;
  
  puVar1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b40) /* -> EXTERNAL_0x0f66b118 */)(0xc);
  uVar2 = (**(code **)(unaff_gp + -0x7e90) /* -> EXTERNAL_0x0e35c908 */)(param_1);
  *puVar1 = uVar2;
  local_54 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */;
  piVar3 = (int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x20);
  iVar4 = *piVar3;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = iVar4;
  *piVar3 = (int)puVar1;
  local_54 = local_54 + 0x1d4d;
  local_50 = *puVar1;
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6648),&local_54,1);
  if (param_2 != 0) {
    (**(code **)(unaff_gp + -0x7e94) /* -> EXTERNAL_0x0f677aac */)
              (**(undefined4 **)(unaff_gp + -0x7600) /* -> app_context */,param_2,*(undefined4 *)(unaff_gp + -0x7a9c) /* -> deleteMessage */,
               puVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
