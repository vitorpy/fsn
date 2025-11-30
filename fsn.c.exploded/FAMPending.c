/**
 * FAMPending
 *
 * Extracted from fsn.c lines 62209-62221
 * Category: Other
 */

void FAMPending(uint *param_1)

{
  __fd_mask *p_Var1;
  fd_set fStack_80;
  
  bzero(&fStack_80,0x80);
  p_Var1 = fStack_80.fds_bits + (*param_1 >> 5);
  *p_Var1 = *p_Var1 | 1 << (*param_1 & 0x1f);
  select(0x400,&fStack_80,(fd_set *)0x0,(fd_set *)0x0,(timeval *)&database_dirty_flag);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
