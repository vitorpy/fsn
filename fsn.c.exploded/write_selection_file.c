/**
 * write_selection_file
 *
 * Extracted from fsn.c lines 53816-53906
 * Category: Filesystem
 */

void write_selection_file(undefined2 *param_1,FILE *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined1 auStack_430 [1024];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined2 local_a;
  ushort local_8;
  ushort local_6;
  ushort local_4;
  undefined1 local_2;
  
  sVar1 = fread(&local_30,0x30,1,param_2);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading position from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  *(undefined4 *)(param_1 + 4) = local_30;
  *(undefined4 *)(param_1 + 6) = local_2c;
  *(undefined4 *)(param_1 + 8) = local_28;
  *(undefined4 *)(param_1 + 0xc) = local_24;
  *(undefined4 *)(param_1 + 0xe) = local_20;
  *(undefined4 *)(param_1 + 0x10) = local_1c;
  *(undefined4 *)(param_1 + 0x14) = local_18;
  *(undefined4 *)(param_1 + 0x16) = local_14;
  *(undefined4 *)(param_1 + 0x18) = local_10;
  *param_1 = local_c;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[1] = local_a;
  *(undefined1 *)(param_1 + 0x1a) = local_2;
  if (local_8 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)local_8,param_2);
    if (sVar1 != local_8) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position warpdp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    uVar2 = get_path_entry(auStack_430);
    *(undefined4 *)(param_1 + 2) = uVar2;
    auStack_430[local_8] = 0;
  }
  if (local_6 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)local_6,param_2);
    if (sVar1 != local_6) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position selecteddp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    auStack_430[local_6] = 0;
    uVar2 = get_path_entry();
    *(undefined4 *)(param_1 + 10) = uVar2;
  }
  if (local_4 == 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)local_4,param_2);
    if (sVar1 != local_4) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position selectedfp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    auStack_430[local_4] = 0;
    if (*(int *)(param_1 + 10) == 0) {
      *(undefined4 *)(param_1 + 0x12) = 0;
    }
    else {
      uVar2 = validate_directory_access(*(int *)(param_1 + 10),auStack_430);
      *(undefined4 *)(param_1 + 0x12) = uVar2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
