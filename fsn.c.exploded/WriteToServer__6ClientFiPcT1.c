/**
 * WriteToServer__6ClientFiPcT1
 *
 * Extracted from fsn.c lines 62563-62578
 * Category: Filesystem
 */

void WriteToServer__6ClientFiPcT1(undefined4 param_1,int param_2,void *param_3,size_t param_4)

{
  ssize_t sVar1;
  size_t sStackX_c;
  undefined1 auStack_4 [4];
  
  sStackX_c = param_4;
  putword__FPcPl(auStack_4,&sStackX_c);
  sVar1 = write(param_2,auStack_4,4);
  if (sVar1 == 4) {
    write(param_2,param_3,sStackX_c);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
