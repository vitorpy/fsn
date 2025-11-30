/**
 * rescanDatabase
 *
 * Extracted from fsn.c lines 40965-41000
 * Category: Filesystem
 */

void rescanDatabase(void)

{
  int iVar1;
  char acStack_510 [1000];
  undefined4 local_128;
  statvfs asStack_124 [2];
  stat local_88;
  
  local_128 = set_status_message("rescanning file system",0);
  process_pending_events();
  iVar1 = statvfs((char *)*topdir,asStack_124);
  if (iVar1 < 0) {
    sprintf(acStack_510,"cannot statvfs %s, leaving display unchanged",*topdir);
    set_status_message(acStack_510,1000);
    deleteMessage(local_128);
  }
  else {
    strcpy(fstyp,(char *)&asStack_124[0].__f_unused);
    localFlag = asStack_124[0].__f_spare[1] & 0x80000000;
    iVar1 = lstat((char *)*topdir,&local_88);
    if (iVar1 < 0) {
      sprintf(acStack_510,"cannot stat %s, leaving display unchanged",*topdir);
      set_status_message(acStack_510,1000);
      deleteMessage(local_128);
    }
    else {
      current_device_id = local_88.st_dev._0_4_;
      cleanup_directory(topdir);
      deleteMessage(local_128);
      set_status_message("file system update complete",2000);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
