/**
 * init_app_state
 *
 * Extracted from fsn.c lines 36896-36910
 * Category: Init
 */

void init_app_state(void)

{
  size_t sVar1;
  char *__s;
  char *__s_00;
  
  __s_00 = *(char **)(display + 0x80);
  sVar1 = strlen(__s_00);
  __s = (char *)malloc(sVar1 + 9);
  sprintf(__s,"DISPLAY=%s",__s_00);
  putenv(__s);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
