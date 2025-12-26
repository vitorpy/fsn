/**
 * FUN_00439c48
 *
 * Extracted from fsn.c lines 77440-77502
 * Ghidra address: 0x00439c48
 * Category: Other
 */

void FUN_00439c48(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int unaff_gp;
  undefined1 uStack_c88;
  undefined1 auStack_c87 [3007];
  undefined4 local_c8 [17];
  char local_84 [128];
  undefined4 local_4;
  
  local_4 = *param_3;
  (*(code *)(*(int *)(unaff_gp + -0x7fdc) /* -> EXTERNAL_0x00440000 */ + -0x5108))(local_4,param_4);
  iVar1 = /* TODO: GP:-0x7c2c */ (**(code **)(unaff_gp + -0x7c2c) /* -> EXTERNAL_0x0fad47a8 */)(0x10,local_c8);
  local_84[0] = '\0';
  pcVar4 = local_84;
  if (1 < iVar1) {
    iVar7 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
    iVar6 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
    puVar5 = local_c8 + 1;
    do {
      if (puVar5 == local_c8 + 1) {
        /* TODO: GP:-0x7c1c */ (**(code **)(unaff_gp + -0x7c1c) /* -> EXTERNAL_0x0fac0f24 */)(pcVar4,iVar6 + -25000,iVar1 + -1);
        iVar2 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(pcVar4);
        pcVar4 = pcVar4 + iVar2;
      }
      /* TODO: GP:-0x7c1c */ (**(code **)(unaff_gp + -0x7c1c) /* -> EXTERNAL_0x0fac0f24 */)(pcVar4,iVar7 + -0x61a4,*puVar5);
      iVar2 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(pcVar4);
      puVar5 = puVar5 + 1;
      pcVar4 = pcVar4 + iVar2;
    } while (puVar5 < local_c8 + iVar1);
  }
  if (local_84[0] == '\0') {
    uVar3 = /* TODO: GP:-0x7cec */ (**(code **)(unaff_gp + -0x7cec) /* -> EXTERNAL_0x0fad3e88 */)();
    /* TODO: GP:-0x7c1c */ (**(code **)(unaff_gp + -0x7c1c) /* -> EXTERNAL_0x0fac0f24 */)
              (&uStack_c88,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x618c,param_5,local_4,uVar3,local_c8[0],
               param_2);
    iVar1 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(&uStack_c88);
    iVar1 = iVar1 + 1;
  }
  else {
    uVar3 = /* TODO: GP:-0x7cec */ (**(code **)(unaff_gp + -0x7cec) /* -> EXTERNAL_0x0fad3e88 */)();
    /* TODO: GP:-0x7c1c */ (**(code **)(unaff_gp + -0x7c1c) /* -> EXTERNAL_0x0fac0f24 */)
              (&uStack_c88,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x61a0,param_5,local_4,uVar3,local_c8[0],
               param_2);
    iVar1 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(&uStack_c88);
    /* TODO: GP:-0x7c1c */ (**(code **)(unaff_gp + -0x7c1c) /* -> EXTERNAL_0x0fac0f24 */)
              (auStack_c87 + iVar1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x6190,local_84);
    iVar1 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(auStack_c87 + iVar1);
    iVar6 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(&uStack_c88);
    iVar1 = iVar6 + iVar1 + 2;
  }
  (**(code **)(unaff_gp + -0x7700) /* -> FUN_0043b318 */)(param_1[1],*param_1,&uStack_c88,iVar1) /* =FUN_0043b318 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00439c48):
     * Function: FUN_00439c48
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Calls strlen(s0) via gp[-31776], adds 1 to result for null terminator, then calls a 3-arg function via gp[-30464] with args from stack structure at sp+3304. Returns 0.
     * **C pseudocode:**
     * ```c
     * // ... prior code stored t1, t2 to stack, called some function
     * len = strlen(s0);
     * arg7 = len + 1;
     * ptr = *(void**)(sp + 3304);  // structure pointer from stack
     * result = some_func(ptr->field_4, ptr->field_0, s0, ..., arg7);  // gp[-30464], likely memcpy or strncpy
     * return 0;
     * ```
     * **GP offset resolution:**
     * - gp[-31776] = -0x7c20 = strlen
     * - gp[-30464] = -0x7700 = likely XmStringCreateLocalized or similar Motif string function (takes widget handle, string, buffer, and length+1)
     * The pattern `strlen(s) + 1` strongly suggests this is copying a null-terminated string with its terminator, possibly into an XmString or allocated buffer.
     */
halt_baddata();
}
