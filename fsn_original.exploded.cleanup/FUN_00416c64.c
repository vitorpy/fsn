/**
 * FUN_00416c64
 *
 * Extracted from fsn.c lines 54894-54925
 * Ghidra address: 0x00416c64
 * Category: Other
 */

void FUN_00416c64(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [3];
  undefined1 uStack_5;
  
  iVar1 = fscanf(current_file,"f %d %s %o %d %d %s\n",local_8,param_1,&local_c,&local_10,&local_14,
                 param_2);
  if (iVar1 == 5) {
    *param_2 = '\0';
  }
  else if (iVar1 != 6) {
    fprintf((FILE *)0xfb52904,"fsscanf error, returned %d.  Name may be %s\n",iVar1,param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  DAT_100166d0 = local_10;
  DAT_100166d4 = local_14;
  DAT_100166d8 = local_c;
  sVar2 = strlen(param_1);
  DAT_100166dc = (undefined2)sVar2;
  sVar2 = strlen(param_2);
  DAT_100166de = (short)sVar2;
  DAT_100166e0 = uStack_5;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
