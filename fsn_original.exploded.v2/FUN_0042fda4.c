/**
 * FUN_0042fda4
 *
 * Extracted from fsn.c lines 69922-69964
 * Ghidra address: 0x0042fda4
 * Category: Other
 */

void FUN_0042fda4(undefined4 param_1)

{
  __pid_t _Var1;
  int iVar2;
  itimerval iStack_2c;
  itimerval local_1c;
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
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042fda4):
     * Function: FUN_0042fda4
     *
     * Looking at the GP offsets and control flow:
     * **1. What it does:**
     * Polls a global state variable (at GP-32624) waiting for it to change from value 4, while repeatedly calling a function (at GP-31688) with s0 as argument. Exits when either the function returns s4, returns s1 AND state!=4, or state changes from 4.
     * **2. C pseudocode:**
     * ```c
     * // GP-32624 likely points to a process/child state variable
     * // GP-31688 likely waitpid() or similar process check function
     * int *state_ptr = *(int **)GP_OFFSET(-32624);  // e.g., &child_status
     * int (*wait_func)(int) = GP_OFFSET(-31688);    // e.g., waitpid wrapper
     * if (*state_ptr == 4) {
     * do {
     * int result = wait_func(pid);  // s0 = pid from earlier
     * if (result == expected_done)  // s4
     * break;
     * if (result == EINTR && *state_ptr != 4)  // s1 = -1 or EINTR
     * break;
     * } while (result == EINTR);
     * }
     * return expected_done;  // s4
     * ```
     * This is the tail of `usystem()` - a signal-safe system() implementation that waits for child process completion while handling interrupts (EINTR) and checking if a global "running" state has changed (likely set by SIGCHLD handler).
     */
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
  local_1c.it_interval.tv_sec = 0;
  local_1c.it_interval.tv_usec = 0;
  local_1c.it_value.tv_sec = 0;
  local_1c.it_value.tv_usec = 0;
  setitimer(ITIMER_REAL,&local_1c,&iStack_2c);
  alarm(0);
  execl(s__bin_sh_10009640,&DAT_10009648,&DAT_1000964c,param_1,0);
                    // WARNING: Subroutine does not return
  _exit(0x7f);
}
