/**
 * dump.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "dump.h"
#include "fsn_types.h"
#include "fsn_state.h"

void dumpDatabaseCB(void)

{
  refresh_after_change();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void databaseDumpTimeout(void)

{
  refresh_after_change();
  init_database_display();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void scheduleDatabaseDumpTimeout(void)

{
  XtAppAddTimeOut(app_context,900000,databaseDumpTimeout,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dumpMarks(FILE *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short asStack_8 [4];
  
  iVar3 = 0;
  if (0 < selection_count) {
    iVar2 = 0;
    do {
      if (__iob_func_result == 0) {
        iVar4 = param_1->_flags + -1;
        param_1->_flags = iVar4;
        if (iVar4 < 0) {
          __flsbuf(7,param_1);
        }
        else {
          *param_1->_IO_read_ptr = '\a';
          param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(7,param_1);
      }
      sVar1 = strlen(*(char **)(selection_buffer + iVar2 + 0x38));
      asStack_8[0] = (short)sVar1;
      fwrite(asStack_8,2,1,param_1);
      fwrite(*(void **)(selection_buffer + iVar2 + 0x38),1,(int)asStack_8[0],param_1);
      copy_selection_data(iVar3 * 0x40 + selection_buffer,param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < selection_count);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
