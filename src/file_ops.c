/**
 * file_ops.c - File operations extracted from fsn.c
 *
 * Contains original decompiled file operation functions with halt_baddata fixed.
 * copy_file_item is a modern stub (original not decompiled).
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include "pathutil.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>

/*
 * Stub implementations for FUN_ functions referenced by original code.
 * These need proper extraction from the decompile later.
 */

/**
 * FUN_00413580 - Find file in directory by name
 *
 * ORIGINAL: fsn.c lines 53243-53259
 * Uses twalk() to search directory tree for a file.
 */
int FUN_00413580(int param_1, undefined4 param_2)
{
    /* TODO: Extract from fsn.c - find file by name in directory */
    (void)param_1; (void)param_2;
    return 0;
}

void FUN_00433e24(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    /* TODO: Extract from fsn.c - XtVaSetValues wrapper or similar */
    (void)param_1; (void)param_2; (void)param_3;
    (void)param_4; (void)param_5; (void)param_6;
}

int FUN_00413610(int param_1, char *param_2)
{
    /* TODO: Extract from fsn.c - file lookup by name */
    (void)param_1; (void)param_2;
    return 0;
}

void FUN_004144ec(int param_1)
{
    /* TODO: Extract from fsn.c - queue node redraw */
    (void)param_1;
}

void FUN_004184c8(undefined4 param_1)
{
    /* TODO: Extract from fsn.c - cleanup/notify callback */
    (void)param_1;
}

/**
 * fileExecuting - Mark file as executing
 *
 * ORIGINAL: fsn.c lines 55878-55891
 * Uses SGI's sproc() or similar to execute files.
 */
void fileExecuting(int param_1)
{
  int iVar1;

  iVar1 = FUN_00413580(0, 0);  /* Original called with implicit params from context */
  if ((iVar1 != 0) && (*(int *)((char *)iVar1 + 0x20) != 0)) {
    FUN_00433e24(*(undefined4 *)((char *)iVar1 + 0x20),1,0,0,0,0);
    *(byte *)((char *)iVar1 + 0x29) = (*(byte *)((char *)iVar1 + 0x29) & 0xf7) | 8;
    *(byte *)((char *)param_1 + 0x75) = *(byte *)((char *)param_1 + 0x75) | 2;
  }
  return;
}

/**
 * fileDeleted - Handle file deletion notification
 *
 * ORIGINAL: fsn.c lines 55760-55799
 * Checks if file still exists via lstat(), updates flags.
 *
 * NOTE: Original decompilation had issues with build_path_string usage.
 * Fixed to use local buffer. Original byte-offset accesses preserved.
 */
void fileDeleted(int param_1, char *param_2)
{
  int iVar1;
  byte bVar2;
  struct stat sStack_94;
  char pcStack_c[1024];

  if (-1 < *(int *)((char *)param_1 + 0x74) << 0xd) {
    build_path_string(pcStack_c, (undefined4 *)param_1);
    strcat(pcStack_c, param_2);
    iVar1 = lstat(pcStack_c, &sStack_94);
    if (iVar1 < 0) {
      bVar2 = *(byte *)((char *)param_1 + 0x75);
      *(byte *)((char *)param_1 + 0x75) = bVar2 & 0x7f;
      *(byte *)((char *)param_1 + 0x74) = *(byte *)((char *)param_1 + 0x74) & 0xfe;
      *(byte *)((char *)param_1 + 0x75) = bVar2 & 0x3f;
      iVar1 = FUN_00413580(param_1, (undefined4)(uintptr_t)param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_00413610(param_1, param_2);
        if (iVar1 != 0) {
          bVar2 = *(byte *)((char *)iVar1 + 0x74) & 0xfd;
          *(byte *)((char *)iVar1 + 0x74) = bVar2;
          *(byte *)((char *)iVar1 + 0x74) = bVar2 | 4;
          *(byte *)((char *)param_1 + 0x75) = (*(byte *)((char *)param_1 + 0x75) & 0x7f) | 0x80;
        }
      }
      else {
        *(byte *)((char *)iVar1 + 0x29) = *(byte *)((char *)iVar1 + 0x29) & 0x7f;
        *(byte *)((char *)iVar1 + 0x28) = (*(byte *)((char *)iVar1 + 0x28) & 0xfe) | 1;
        *(byte *)((char *)param_1 + 0x74) = *(byte *)((char *)param_1 + 0x74) | 1;
      }
      if (((*(byte *)((char *)param_1 + 0x74) & 1) != 0) || (*(char *)((char *)param_1 + 0x75) < '\0')) {
        FUN_004144ec(param_1);
      }
    }
  }
  return;
}

/**
 * fileStoppedExecuting - Mark file as no longer executing
 *
 * ORIGINAL: fsn.c lines 55897-55910
 * Clears executing flag and resets widget appearance.
 */
void fileStoppedExecuting(undefined4 param_1)
{
  int iVar1;

  iVar1 = FUN_00413580(0, 0);  /* Original called with implicit params from context */
  if ((iVar1 != 0) && (*(int *)((char *)iVar1 + 0x20) != 0)) {
    FUN_00433e24(*(undefined4 *)((char *)iVar1 + 0x20),0,0,0,0,0);
    *(byte *)((char *)iVar1 + 0x29) = *(byte *)((char *)iVar1 + 0x29) & 0xf7;
  }
  FUN_004184c8(param_1);
  return;
}

static int ensure_tmp_dir(char *out, size_t outsz, const char *basename) {
    const char *tmpdir = "/tmp/fsn_copy";
    if (mkdir(tmpdir, 0700) != 0 && errno != EEXIST) {
        return -1;
    }
    return snprintf(out, outsz, "%s/%s", tmpdir, basename) >= (int)outsz ? -1 : 0;
}

void copy_file_item(undefined4 param_1, undefined4 *param_2)
{
    char src_dir[512];
    char src_path[1024];
    char dst_path[1024];
    const char *name;

    if (param_2 == NULL || *param_2 == 0) {
        return;
    }

    name = (const char *)(uintptr_t)*param_2;

    memset(src_dir, 0, sizeof(src_dir));
    build_path_string(src_dir, (undefined4 *)(uintptr_t)param_1);
    snprintf(src_path, sizeof(src_path), "%s%s", src_dir, name);

    if (ensure_tmp_dir(dst_path, sizeof(dst_path), name) != 0) {
        fprintf(stderr, "copy_file_item: failed to prepare destination\n");
        return;
    }

    FILE *in = fopen(src_path, "rb");
    if (!in) {
        fprintf(stderr, "copy_file_item: cannot open %s: %s\n", src_path, strerror(errno));
        return;
    }
    FILE *out = fopen(dst_path, "wb");
    if (!out) {
        fprintf(stderr, "copy_file_item: cannot open %s: %s\n", dst_path, strerror(errno));
        fclose(in);
        return;
    }

    char buf[4096];
    size_t n;
    while ((n = fread(buf, 1, sizeof(buf), in)) > 0) {
        if (fwrite(buf, 1, n, out) != n) {
            fprintf(stderr, "copy_file_item: write failed: %s\n", strerror(errno));
            break;
        }
    }

    fclose(in);
    fclose(out);
}
