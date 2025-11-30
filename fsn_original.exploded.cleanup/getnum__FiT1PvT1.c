/**
 * getnum__FiT1PvT1
 *
 * Extracted from fsn.c lines 73637-73644
 * Category: Other
 */

void getnum__FiT1PvT1(int param_1,__off_t param_2,void *param_3,size_t param_4)

{
  lseek(param_1,param_2,0);
  read(param_1,param_3,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
