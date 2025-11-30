/**
 * FUN_00428cc0
 *
 * Extracted from fsn.c lines 65337-65425
 * Ghidra address: 0x00428cc0
 * Category: Other
 */

void FUN_00428cc0(uint param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined4 local_48 [3];
  code *local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_c;
  undefined2 local_8;
  ushort local_6;
  undefined2 local_4;
  undefined1 local_2;
  
  local_3c = (code *)XmGetColorCalculation();
  if ((param_2[2] != 0) && (param_1 == param_2[3])) {
    halt_baddata();
  }
  local_6 = (ushort)param_1 & 0xff00;
  local_8 = (undefined2)((param_1 & 0xff) << 8);
  local_4 = (undefined2)((param_1 >> 0x10) << 8);
  local_2 = 7;
  iVar1 = param_2[2];
  if (iVar1 == 0) {
    iVar1 = XAllocColor(display,param_4,&local_c);
    if (iVar1 == 0) {
      fprintf((FILE *)0xfb52904,"cannot allocate colors for label\n");
      *param_2 = *(undefined4 *)(*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
      param_2[1] = *(undefined4 *)
                    (*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
    }
    else {
      *param_2 = local_c;
      (*local_3c)(&local_c,local_48,auStack_54,auStack_60,auStack_6c);
      iVar1 = XAllocColor(display,param_4,local_48);
      if (iVar1 == 0) {
        param_2[1] = *(undefined4 *)
                      (*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
      }
      else {
        param_2[1] = local_48[0];
      }
      param_2[2] = 1;
      param_2[3] = param_1;
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = XAllocColorCells(display,param_4,0,auStack_70,1,&local_74,1);
      if (iVar1 == 0) {
        fprintf((FILE *)0xfb52904,"cannot allocate colors for label\n");
        goto code_r0x00428fd8;
      }
      param_2[2] = 2;
      *param_2 = local_74;
    }
    else if (iVar1 != 2) goto code_r0x00428fd8;
    local_c = *param_2;
    XStoreColor(display,param_4,&local_c);
    *param_2 = local_c;
    param_2[3] = param_1;
    (*local_3c)(&local_c,local_48,auStack_54,auStack_60,auStack_6c);
    iVar1 = XAllocColor(display,param_4,local_48);
    if (iVar1 == 0) {
      param_2[1] = *(undefined4 *)
                    (*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
    }
    else {
      param_2[1] = local_48[0];
    }
  }
code_r0x00428fd8:
  if (param_3 != 0) {
    local_34 = 0xf6615f6;
    local_30 = param_2[1];
    local_2c = 0xf661554;
    local_28 = *param_2;
    XtSetValues(param_3,&local_34,2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
