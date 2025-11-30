/**
 * close_file_handle
 *
 * Extracted from fsn.c lines 62415-62435
 * Category: Filesystem
 */

void close_file_handle(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = string_buffer;
  if (0 < buffer_size) {
    do {
      iVar1 = iVar1 + 1;
      if (param_1 == *piVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
