/**
 * FUN_00416ac4
 *
 * Extracted from fsn.c lines 54835-54888
 * Ghidra address: 0x00416ac4
 * Category: Other
 */

void FUN_00416ac4(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char local_20;
  char local_1f [11];
  undefined4 local_14;
  undefined1 local_10 [2];
  undefined2 uStack_e;
  undefined1 local_c [2];
  undefined2 uStack_a;
  undefined1 local_8 [3];
  undefined1 uStack_5;
  
  iVar1 = fscanf(current_file,"d %d %s %o %d %d %s\n",local_8,param_1,&local_14,local_c,local_10,
                 &local_20);
  if (iVar1 == 5) {
    local_20 = '\0';
  }
  else if (iVar1 != 6) {
    fprintf((FILE *)0xfb52904,"fscanf error, returned %d.  Name may be %s\n",iVar1,param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  DAT_100166c0 = local_14;
  sVar2 = strlen(param_1);
  DAT_100166c4 = (short)sVar2;
  DAT_100166c6 = uStack_e;
  DAT_100166c8 = uStack_a;
  pcVar3 = &local_20;
  DAT_100166ca = uStack_5;
  DAT_100166cb = 0;
  do {
    if (local_20 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (local_20 == 'm') {
      DAT_100166cb = DAT_100166cb | 2;
LAB_00416c40:
      local_20 = pcVar3[1];
    }
    else {
      if (local_20 == 'p') {
        DAT_100166cb = DAT_100166cb | 1;
        goto LAB_00416c40;
      }
      local_20 = pcVar3[1];
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}
