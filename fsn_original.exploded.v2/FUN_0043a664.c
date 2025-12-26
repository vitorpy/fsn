/**
 * FUN_0043a664
 *
 * Extracted from fsn.c lines 77775-77876
 * Ghidra address: 0x0043a664
 * Category: Other
 */

void FUN_0043a664(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_6c;
  undefined1 auStack_68 [102];
  char local_2 [2];
  
  sscanf(param_2,&DAT_10009f20,local_2);
  if (local_2[0] == 'c') {
    sscanf(param_2,s__c_d__s_10009f24,local_2,&local_6c,auStack_68);
    pcVar2 = strchr(param_2,0x20);
    pcVar3 = strchr(pcVar2 + 1,0x20);
    iVar5 = 0;
    pcVar2 = pcVar3 + 1;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        *(char *)(param_3 + iVar5 + 0xc) = *pcVar2;
        pcVar3 = pcVar2 + 1;
        iVar5 = iVar5 + 1;
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar3;
      }
      *(undefined1 *)(param_3 + iVar5 + 0xb) = 0;
    }
  }
  else {
    sscanf(param_2,&DAT_10009f2c,local_2,&local_6c);
    pcVar3 = strchr(param_2,0x20);
    iVar5 = 0;
    pcVar2 = pcVar3 + 1;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        *(char *)(param_3 + iVar5 + 0xc) = *pcVar2;
        pcVar3 = pcVar2 + 1;
        iVar5 = iVar5 + 1;
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar3;
      }
      *(undefined1 *)(param_3 + iVar5 + 0xb) = 0;
    }
  }
  *(undefined4 *)(param_3 + 4) = local_6c;
  uVar4 = FUN_0043ae14(local_6c);
  *(undefined4 *)(param_3 + 0x40c) = uVar4;
  if (local_2[0] == 'e') {
    iVar5 = FUN_0043ae90(local_6c);
    if (*(char *)(DAT_10017418 + iVar5) == '\0') {
      *(undefined4 *)(param_3 + 0x410) = 8;
    }
    else {
      *(undefined4 *)(param_3 + 0x410) = 5;
    }
  }
  else if (local_2[0] == 'F') {
    iVar5 = FUN_0043ae90(local_6c);
    if (*(char *)(DAT_10017418 + iVar5) == '\0') {
      *(undefined4 *)(param_3 + 0x410) = 8;
    }
    else {
      *(undefined4 *)(param_3 + 0x410) = 5;
    }
  }
  else if (local_2[0] == 'D') {
    iVar5 = FUN_0043ae90(local_6c);
    if (*(char *)(DAT_10017418 + iVar5) == '\0') {
      *(undefined4 *)(param_3 + 0x410) = 8;
    }
    else {
      *(undefined4 *)(param_3 + 0x410) = 1;
    }
  }
  else if ((local_2[0] == 'C') || (local_2[0] == 'c')) {
    *(undefined4 *)(param_3 + 0x410) = 1;
  }
  else if ((local_2[0] == 'A') || (local_2[0] == 'n')) {
    *(undefined4 *)(param_3 + 0x410) = 2;
  }
  else if ((local_2[0] == 'X') || (local_2[0] == 'x')) {
    *(undefined4 *)(param_3 + 0x410) = 3;
  }
  else if ((local_2[0] == 'Q') || (local_2[0] == 'q')) {
    *(undefined4 *)(param_3 + 0x410) = 4;
  }
  else if (local_2[0] == 'P') {
    *(undefined4 *)(param_3 + 0x410) = 9;
    iVar5 = FUN_0043ae90(local_6c);
    *(undefined1 *)(DAT_10017418 + iVar5) = 1;
  }
  else if (local_2[0] == 'G') {
    FUN_0043b104(local_6c);
    *(undefined4 *)(param_3 + 0x410) = 7;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043a664):
     * Function: FUN_0043a664
     *
     * Looking at this assembly:
     * 1. **What it does:** This is a switch-case epilogue with three paths: (a) store t9 and t1 to offset 1040 of s0, (b) call a function via GP-32732 offset -20848, then set a byte flag at base[29720+result], or (c) call function at GP offset -20220, then store 7 to offset 1040. All paths restore ra/s0 and return.
     * 2. **C pseudocode:**
     * ```c
     * // Path A (from 43a994):
     * s0->field_410 = t9;
     * s0->field_410 = t1;  // overwrites previous
     * goto epilogue;
     * // Path B (from 43a9a0):
     * s0->field_410 = t2;
     * result = some_func_ae90(arg_44);  // GP[-32732] + (-20848)
     * base = *(gp_806c);  // global pointer
     * flags = base->field_7418;  // offset 29720
     * flags[result] = 1;  // set byte flag
     * goto epilogue;
     * // Path C (from 43a9dc):
     * result = some_func_b104(arg_44);  // GP[-32732] + (-20220)
     * s0->field_410 = 7;
     * epilogue:
     * return;
     * ```
     * The GP offsets -20848 (0xae90) and -20220 (0xb104) are likely `strlen` or similar string functions, given the FAMCancelMonitor context (FAM = File Alteration Monitor). The byte flag being set suggests marking a monitor entry as cancelled/invalid.
     */
halt_baddata();
}
