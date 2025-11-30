/**
 * create_root_directory
 *
 * Extracted from fsn.c lines 41006-41052
 * Category: UI
 */

void create_root_directory(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  statvfs asStack_124 [2];
  stat local_88;
  
  uVar1 = set_status_message("no database available...building...please wait",0);
  process_pending_events();
  iVar2 = lstat(param_1,&local_88);
  if (iVar2 < 0) {
    fprintf((FILE *)0xfb52904,"cannot stat %s, giving up\n",param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  if ((local_88.st_nlink & 0xf000) != 0x4000) {
    fprintf((FILE *)0xfb52904,"%s must be a directory\n",param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  current_device_id = local_88.st_dev._0_4_;
  iVar2 = statvfs(param_1,asStack_124);
  if (iVar2 < 0) {
    fprintf((FILE *)0xfb52904,"cannot statvfs %s, giving up\n",param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  strcpy(fstyp,(char *)&asStack_124[0].__f_unused);
  localFlag = asStack_124[0].__f_spare[1] & 0x80000000;
  topdir = (undefined4 *)allocate_directory_entry();
  uVar3 = hash_filename(param_1);
  *topdir = uVar3;
  sVar4 = strlen(param_1);
  topdir[1] = sVar4;
  topdir[3] = 0;
  topdir[5] = 0;
  topdir[10] = 0;
  *(byte *)(topdir + 0x1d) = *(byte *)(topdir + 0x1d) | 2;
  cleanup_directory(topdir);
  set_status_message("file system database built",2000);
  deleteMessage(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
