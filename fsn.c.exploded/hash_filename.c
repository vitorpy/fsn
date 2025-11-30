/**
 * hash_filename
 *
 * Extracted from fsn.c lines 39200-39213
 * Category: Filesystem
 */

void hash_filename(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if ((string_copy_buffer == (void *)0x0) || (string_buffer_limit <= (int)string_copy_buffer + sVar1 + 1)) {
    string_copy_buffer = malloc(10000);
    string_buffer_limit = (int)string_copy_buffer + 10000;
  }
  bcopy(param_1,string_copy_buffer,sVar1 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
