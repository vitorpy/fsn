/**
 * file_ops.c - Minimal file operation stubs
 *
 * Implements copy_file_item as a simple filesystem copy into /tmp/fsn_copy/.
 */

#include "fsn_types.h"
#include "pathutil.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>

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
