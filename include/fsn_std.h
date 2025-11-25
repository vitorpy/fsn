/**
 * fsn_std.h
 *
 * Standard C library includes used throughout FSN.
 * Centralizes all standard headers for consistency.
 */

#ifndef FSN_STD_H
#define FSN_STD_H

/* Standard C library */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>    /* for bzero, bcopy */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdarg.h>
#include <errno.h>
#include <assert.h>
#include <limits.h>
#include <math.h>

/* POSIX/Unix headers */
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/statvfs.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

/* Network headers */
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>

#endif /* FSN_STD_H */
