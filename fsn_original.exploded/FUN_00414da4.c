/**
 * FUN_00414da4
 *
 * Extracted from fsn.c lines 54071-54224
 * Ghidra address: 0x00414da4
 * Category: Filesystem
 */

void FUN_00414da4(void)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  char *__s;
  FILE *__s_00;
  undefined4 local_1c;
  undefined4 local_18;
  ushort local_14 [2];
  undefined4 local_10;
  char *local_4;
  
  if (((topdir != 0) && (*(int *)(topdir + 0x74) << 3 < 0)) && (fsn_resources == '\0')) {
    FUN_00427fe0();
    local_10 = set_status_message("updating on disk database",0);
    FUN_00411998();
    sVar2 = strlen(home_directory);
    local_4 = (char *)malloc(sVar2 + 0xc);
    strcpy(local_4,home_directory);
    strcat(local_4,"/.FSNXXXXXX");
    iVar3 = mkstemp(local_4);
    if (iVar3 < 0) {
      FUN_00410f74("could not open tmp file, not updating");
      free(local_4);
      deleteMessage(local_10);
    }
    else {
      if (DAT_10017497 == '\0') {
        bVar1 = false;
        __s_00 = fdopen(iVar3,"a");
      }
      else {
        close(iVar3);
        sVar2 = strlen(local_4);
        __s = (char *)malloc(sVar2 + 10);
        sprintf(__s,"compress>%s",local_4);
        __s_00 = popen(__s,"w");
        free(__s);
        if (__s_00 == (FILE *)0x0) {
          __s_00 = fopen(local_4,"w");
          if (__s_00 == (FILE *)0x0) {
            FUN_00410f74("could not open tmp file, not updating");
            free(local_4);
            deleteMessage(local_10);
            halt_baddata();
          }
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      fwrite("FuSioN",6,1,__s_00);
      if (_DAT_0fb51f00 == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(2,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x02';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(2,__s_00);
      }
      if (_DAT_0fb51f00 == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(1,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x01';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(1,__s_00);
      }
      FUN_00414870(__s_00,topdir,0);
      if (_DAT_0fb51f00 == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(4,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x04';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(4,__s_00);
      }
      FUN_00414cf0(__s_00);
      FUN_0042f8bc(__s_00);
      if (_DAT_0fb51f00 == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(6,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x06';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(6,__s_00);
      }
      local_14[0] = (ushort)(overviewActive != '\0');
      if (legendShowing != '\0') {
        local_14[0] = overviewActive != '\0' | 2;
      }
      if (controlsShowing != '\0') {
        local_14[0] = local_14[0] | 4;
      }
      fwrite(local_14,2,1,__s_00);
      if (_DAT_0fb51f00 == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(8,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\b';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(8,__s_00);
      }
      local_1c = displayHeight;
      local_18 = displayDirectoryHeight;
      fwrite(&local_1c,8,1,__s_00);
      if (bVar1) {
        pclose(__s_00);
      }
      else {
        fclose(__s_00);
      }
      rename(local_4,db_filepath);
      free(local_4);
      deleteMessage(local_10);
      FUN_00427f5c();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
