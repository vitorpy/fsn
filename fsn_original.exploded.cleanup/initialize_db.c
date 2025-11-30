/**
 * initialize_db
 *
 * Extracted from fsn.c lines 55103-55228
 * Category: Init
 */

void initialize_db(char *param_1)

{
  bool bVar1;
  bool bVar2;
  size_t sVar3;
  char *pcVar4;
  size_t sVar5;
  uint __c;
  int iVar6;
  char *__s;
  statvfs asStack_128 [2];
  stat sStack_8c;
  undefined4 uStack_4;
  
  bVar2 = false;
  time(&DAT_100166ac);
  if (db_filepath == (char *)0x0) {
    if (home_directory == (char *)0x0) {
      if (DAT_10017498 == '\0') {
        home_directory = getenv("HOME");
        if (home_directory == (char *)0x0) {
          home_directory = ".";
        }
      }
      else {
        home_directory = ".";
      }
    }
    sVar5 = strlen(home_directory);
    sVar3 = strlen(param_1);
    db_filepath = (char *)malloc(sVar3 + sVar5 + 7);
    strcpy(db_filepath,home_directory);
    strcat(db_filepath,"/.FSN_");
    sVar5 = strlen(db_filepath);
    __s = db_filepath + sVar5;
    strcat(db_filepath,param_1);
    pcVar4 = strchr(__s,0x2f);
    while (pcVar4 != (char *)0x0) {
      *pcVar4 = '_';
      pcVar4 = strchr(__s,0x2f);
    }
  }
  else {
    if (*db_filepath == '/') {
      home_directory = strdup(db_filepath);
    }
    else {
      pcVar4 = getcwd((char *)0x0,0x400);
      sVar5 = strlen(pcVar4);
      sVar3 = strlen(db_filepath);
      home_directory = (char *)malloc(sVar3 + sVar5 + 2);
      strcpy(home_directory,pcVar4);
      strcat(home_directory,"/");
      strcat(home_directory,db_filepath);
      db_filepath = strdup(home_directory);
      free(pcVar4);
    }
    pcVar4 = strrchr(home_directory,0x2f);
    *pcVar4 = '\0';
  }
  sVar5 = strlen(db_filepath);
  pcVar4 = (char *)malloc(sVar5 + 0x12);
  sprintf(pcVar4,"zcat 2>/dev/null<%s",db_filepath);
  current_file = popen(pcVar4,"r");
  bVar1 = false;
  if (current_file != (FILE *)0x0) {
    if (_DAT_0fb51f00 == 0) {
      current_file->_flags = current_file->_flags + -1;
      if (current_file->_flags < 0) {
        __c = __filbuf();
      }
      else {
        __c = (uint)(byte)*current_file->_IO_read_ptr;
        current_file->_IO_read_ptr = current_file->_IO_read_ptr + 1;
      }
    }
    else {
      __c = __semgetc();
    }
    if (__c == 0xffffffff) {
      pclose(current_file);
      bVar1 = false;
    }
    else {
      ungetc(__c,current_file);
      bVar2 = true;
      bVar1 = true;
    }
  }
  if ((bVar1) || (current_file = fopen(db_filepath,"r"), current_file != (FILE *)0x0)) {
    FUN_0042afd4();
    uStack_4 = set_status_message("reading file system database",0);
    FUN_004172d4();
    *(byte *)(topdir + 0x1d) = *(byte *)(topdir + 0x1d) | 2;
    if (bVar2) {
      pclose(current_file);
    }
    else {
      fclose(current_file);
    }
    deleteMessage(uStack_4);
    iVar6 = statvfs((char *)*topdir,asStack_128);
    if (iVar6 < 0) {
      fprintf((FILE *)0xfb52904,"Could not statvfs %s, exiting\n",*topdir);
                    // WARNING: Subroutine does not return
      exit(1);
    }
    strcpy(fstyp,(char *)&asStack_128[0].__f_unused);
    localFlag = asStack_128[0].__f_spare[1] & 0x80000000;
    iVar6 = lstat((char *)*topdir,&sStack_8c);
    if (iVar6 < 0) {
      fprintf((FILE *)0xfb52904,"Could not stat %s, exiting\n",*topdir);
                    // WARNING: Subroutine does not return
      exit(1);
    }
    DAT_100166b8 = sStack_8c.st_dev._0_4_;
  }
  else {
    FUN_0042b030();
    topdir = (undefined4 *)FUN_004158d4(param_1);
    free(pcVar4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
