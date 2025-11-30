/**
 * select
 *
 * Extracted from fsn.c lines 41135-41254
 * Category: Input
 */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int __status;
  int unaff_gp;
  int iStackX_0;
  undefined1 auStackX_4 [4];
  undefined1 auStackX_8 [8];
  
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  (**(code **)(unaff_gp + -0x7ff0) /* -> EXTERNAL_0x0fb6b330 */)();
  __Argv = auStackX_4;
  _DAT_0fb52740 = auStackX_8 + iStackX_0 * 4;
  __Argc = iStackX_0;
  __istart();
  __readenv_sigfpe();
  __status = FUN_0040aec8(__Argc,__Argv,_DAT_0fb52740);
                    // WARNING: Subroutine does not return
  exit(__status);
}
