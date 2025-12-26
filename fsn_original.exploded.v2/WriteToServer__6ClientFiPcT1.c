/**
 * WriteToServer__6ClientFiPcT1
 *
 * Extracted from fsn.c lines 78301-78316
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
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043b30c):
     * Function: WriteToServer__6ClientFiPcT1
     *
     * Looking at this assembly:
     * 1. **What it does:** Stores a3 (third param) to stack, calls a function with stack buffer args, then calls write() with fd, buffer, 4 bytes. If write returns 4, calls write() again with fd, buf, len (original params). Returns bytes written or -1 on failure.
     * 2. **C pseudocode:**
     * ```c
     * int WriteToServer__6ClientFiPcT1(int fd, char *buf, int len) {
     * int header[4];  // at sp+36
     * int msglen = len;  // at sp+52 (a3)
     * // First call builds header (probably htonl or similar)
     * some_func(header, &msglen);
     * // Write 4-byte header
     * if (write(fd, header, 4) != 4)
     * return -1;
     * // Write actual data
     * return write(fd, buf, len);
     * }
     * ```
     * This is a simple network protocol: send 4-byte length header, then send the payload. The function at gp-32256 is `write()`. The first jalr (at t9 before 43b33c) likely converts the length to network byte order.
     */
halt_baddata();
}
