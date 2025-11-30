/**
 * process_file_data
 *
 * Extracted from fsn.c lines 62357-62409
 * Category: Filesystem
 */

void process_file_data(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint in_register_00001040;
  double dVar4;
  byte in_fcsr;
  
  iVar2 = 0;
  if (0 < buffer_size) {
    iVar3 = 0;
    piVar1 = string_buffer;
    do {
      if (*piVar1 == -1) {
        *piVar1 = param_1;
        *(undefined4 *)((int)buffer_pointer_array + iVar3) = param_2;
        *(undefined1 *)((int)path_buffer + iVar2) = 0;
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      piVar1 = piVar1 + 1;
    } while (iVar2 < buffer_size);
  }
  buffer_size = buffer_size + _buffer_growth_factor;
  dVar4 = (double)_buffer_growth_factor * (double)((ulonglong)in_register_00001040 << 0x20);
  iVar3 = iVar2 * 4;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar4 = ROUND(dVar4);
  }
  else {
    dVar4 = FLOOR(dVar4);
  }
  _buffer_growth_factor = (int)dVar4;
  buffer_pointer_array = realloc(buffer_pointer_array,buffer_size * 4);
  string_buffer = (int *)realloc(string_buffer,buffer_size << 2);
  path_buffer = realloc(path_buffer,buffer_size << 2);
  string_buffer[iVar2] = param_1;
  *(undefined4 *)((int)buffer_pointer_array + iVar3) = param_2;
  *(undefined1 *)((int)path_buffer + iVar2) = 0;
  iVar2 = iVar2 + 1;
  if (iVar2 < buffer_size) {
    do {
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)((int)string_buffer + iVar3) = 0xffffffff;
    } while (iVar2 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
