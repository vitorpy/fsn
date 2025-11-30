/**
 * FUN_0042b6f8
 *
 * Extracted from fsn.c lines 67430-67462
 * Ghidra address: 0x0042b6f8
 * Category: Other
 */

void FUN_0042b6f8(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_3c [4];
  ushort local_38;
  ushort local_36;
  ushort local_34;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_4;
  
  if (*param_2 != 0) {
    XtWarning("String to CpColor conversion needs no arguments");
  }
  local_28 = &local_4;
  local_2c = 0xf6615ba;
  XtGetValues(toplevel,&local_2c,1);
  uVar1 = XtDisplay(toplevel);
  iVar2 = XParseColor(uVar1,local_4,*(undefined4 *)(param_3 + 4),auStack_3c);
  if (iVar2 == 0) {
    XtStringConversionWarning(*(undefined4 *)(param_3 + 4),"CpColor");
  }
  else {
    DAT_10016e24 = (uint)(local_38 >> 8) + (uint)(local_36 >> 8) * 0x100 +
                   (uint)(local_34 >> 8) * 0x10000;
    *param_4 = 4;
    param_4[1] = &DAT_10016e24;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
