/**
 * createCopyright
 *
 * Extracted from fsn.c lines 67053-67074
 * Category: UI
 */

void createCopyright(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(param_2 + param_3 * 8);
  *puVar1 = 0xe3f3d1b;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)(param_2 + (param_3 + 1) * 8);
  *puVar1 = 0xe3f3d12;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)(param_2 + (param_3 + 2) * 8);
  puVar1[1] = s_FSN_the_3D_File_System_Navigator_100079c4;
  *puVar1 = 0xf66187b;
  DAT_10016e10 = XmCreateText(param_1,"copyright",param_2,param_3 + 3);
  XtManageChild(DAT_10016e10);
  uVar2 = XtWindow(DAT_10016e10);
  XRaiseWindow(display,uVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
