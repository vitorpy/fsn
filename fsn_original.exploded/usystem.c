/**
 * usystem
 *
 * Extracted from fsn.c lines 69872-69914
 * Category: Other
 */

void usystem(undefined4 param_1)

{
  __pid_t _Var1;
  int iVar2;
  itimerval iStack_2c;
  itimerval iStack_1c;
  undefined1 auStack_4 [4];
  
  _Var1 = fork();
  if (_Var1 != 0) {
    if (-1 < _Var1) {
      iVar2 = wait(auStack_4);
      while ((iVar2 != _Var1 && ((iVar2 != -1 || (_DAT_0fb52720 == 4))))) {
        iVar2 = wait(auStack_4);
      }
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  setpgrp();
  iVar2 = 3;
  do {
    close(iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 100);
  close(0);
  iVar2 = open("/dev/null",2);
  dup2(iVar2,0);
  if (2 < iVar2) {
    close(iVar2);
  }
  ioctl(0,0x5471,0);
  iStack_1c.it_interval.tv_sec = 0;
  iStack_1c.it_interval.tv_usec = 0;
  iStack_1c.it_value.tv_sec = 0;
  iStack_1c.it_value.tv_usec = 0;
  setitimer(ITIMER_REAL,&iStack_1c,&iStack_2c);
  alarm(0);
  execl(s__bin_sh_10009640,&DAT_10009648,&DAT_1000964c,param_1,0);
                    // WARNING: Subroutine does not return
  _exit(0x7f);
}
