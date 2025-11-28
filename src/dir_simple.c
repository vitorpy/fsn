/**
 * dir_simple.c - Simplified directory scanning implementation
 *
 * Phase 18: File System Arc - Directory Tree Population
 *
 * This provides working implementations of the directory functions
 * needed to populate topdir for visualization.
 *
 * Uses the proper 64-bit DirectoryNode struct from fsn_dir.h.
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_dir.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <math.h>

/* Memory pool for directory entries */
static DirectoryNode *entry_pool = NULL;
static int pool_size = 0;
static int pool_used = 0;
static short next_name_index = 1;

/* Forward declarations */
static void scan_directory_recursive(DirectoryNode *entry, const char *path, int depth);
static void layout_directory(DirectoryNode *entry, float x, float y, int depth);

/**
 * allocate_directory_entry - Allocate a new directory entry
 */
undefined4 *allocate_directory_entry(void)
{
    DirectoryNode *entry;

    /*
     * Grow pool if needed.
     * WARNING: realloc can move the pool, invalidating any existing pointers
     * into the pool. We use a large initial size to avoid this during recursion.
     */
    if (pool_used >= pool_size) {
        int new_size = pool_size ? pool_size * 2 : 8192;  /* Large initial to avoid moves */
        DirectoryNode *new_pool = realloc(entry_pool, new_size * sizeof(DirectoryNode));
        if (!new_pool) {
            fprintf(stderr, "allocate_directory_entry: out of memory\n");
            return NULL;
        }
        if (entry_pool != NULL && new_pool != entry_pool) {
            fprintf(stderr, "WARNING: pool moved during recursion - pointers invalidated!\n");
        }
        entry_pool = new_pool;
        pool_size = new_size;
    }

    entry = &entry_pool[pool_used++];
    memset(entry, 0, sizeof(DirectoryNode));

    /* Set name index for picking */
    entry->name_index = next_name_index++;

    /* Set visibility flag (bit 28 = visible) */
    entry->render_flags = DIR_FLAG_VISIBLE;

    return (undefined4 *)entry;
}

/**
 * hash_filename - Store filename in entry
 */
undefined4 hash_filename(const char *filename)
{
    return (undefined4)(intptr_t)strdup(filename);
}

/**
 * create_root_directory - Create and populate the root directory tree
 */
void create_root_directory(char *param_1)
{
    struct stat st;
    char *path = param_1;
    DirectoryNode *root;

    fprintf(stderr, "create_root_directory: scanning %s\n", path);

    /* Verify path exists and is a directory */
    if (lstat(path, &st) < 0) {
        fprintf(stderr, "create_root_directory: cannot stat %s\n", path);
        return;
    }

    if (!S_ISDIR(st.st_mode)) {
        fprintf(stderr, "create_root_directory: %s is not a directory\n", path);
        return;
    }

    /* Allocate root entry */
    root = (DirectoryNode *)allocate_directory_entry();
    if (root == NULL) {
        fprintf(stderr, "create_root_directory: allocation failed\n");
        return;
    }

    /* Set root entry fields */
    root->name = strdup(path);
    root->name_len = strlen(path);
    root->parent = NULL;
    root->flags = DIR_FLAG_VISIBLE | DIR_FLAG_DIRECTORY;
    root->render_flags = DIR_FLAG_VISIBLE | DIR_FLAG_DIRECTORY;

    /* Set initial position at origin */
    root->pos_x = 0.0f;
    root->pos_y = 0.0f;
    root->height = 1.0f;

    /* Scan the directory tree (limited depth for performance) */
    scan_directory_recursive(root, path, 0);

    /* Layout the tree in 3D space */
    layout_directory(root, 0.0f, 0.0f, 0);

    /* Set global topdir */
    topdir = (undefined4 *)root;

    fprintf(stderr, "create_root_directory: scanned %d entries, topdir=%p\n",
            pool_used, (void *)topdir);
}

/**
 * scan_directory_recursive - Recursively scan directory contents
 *
 * ORIGINAL FSN TERNARY STRUCTURE:
 * - First 3 subdirectories go to child_center, child_left, child_right
 * - Files stored in files_array with num_files count
 */
static void scan_directory_recursive(DirectoryNode *entry, const char *path, int depth)
{
    DIR *dir;
    struct dirent *ent;
    struct stat st;
    char fullpath[1024];
    DirectoryNode **files = NULL;
    int file_capacity = 0;
    int dir_count = 0;  /* Count subdirectories for ternary assignment */

    /* Limit recursion depth for performance */
    if (depth > 3) {
        return;
    }

    dir = opendir(path);
    if (dir == NULL) {
        return;
    }

    /* Initialize ternary children to NULL */
    entry->child_center = NULL;
    entry->child_left = NULL;
    entry->child_right = NULL;
    entry->num_files = 0;
    entry->files_array = NULL;

    /* Scan entries */
    while ((ent = readdir(dir)) != NULL) {
        /* Skip . and .. */
        if (ent->d_name[0] == '.' &&
            (ent->d_name[1] == '\0' ||
             (ent->d_name[1] == '.' && ent->d_name[2] == '\0'))) {
            continue;
        }

        snprintf(fullpath, sizeof(fullpath), "%s/%s", path, ent->d_name);
        if (lstat(fullpath, &st) < 0) {
            continue;
        }

        if (S_ISDIR(st.st_mode)) {
            /* Create child entry */
            DirectoryNode *child = (DirectoryNode *)allocate_directory_entry();
            if (child == NULL) continue;

            child->name = strdup(ent->d_name);
            child->name_len = strlen(ent->d_name);
            child->parent = entry;
            child->flags = DIR_FLAG_VISIBLE | DIR_FLAG_DIRECTORY;
            child->render_flags = DIR_FLAG_VISIBLE | DIR_FLAG_DIRECTORY;

            /*
             * ORIGINAL FSN TERNARY ASSIGNMENT:
             * First 3 subdirectories go to center/left/right positions
             */
            if (dir_count == 0) {
                entry->child_center = child;
            } else if (dir_count == 1) {
                entry->child_left = child;
            } else if (dir_count == 2) {
                entry->child_right = child;
            }
            /* Directories beyond first 3 are not displayed in original FSN */
            dir_count++;

            /* Recurse into subdirectory */
            scan_directory_recursive(child, fullpath, depth + 1);
        } else {
            /* Store files in files_array */
            if (entry->num_files >= file_capacity) {
                file_capacity = file_capacity ? file_capacity * 2 : 16;
                files = realloc(files, file_capacity * sizeof(DirectoryNode *));
            }

            /* Create file entry */
            DirectoryNode *file_node = (DirectoryNode *)allocate_directory_entry();
            if (file_node == NULL) continue;

            file_node->name = strdup(ent->d_name);
            file_node->name_len = strlen(ent->d_name);
            file_node->parent = entry;
            file_node->flags = DIR_FLAG_VISIBLE;  /* Not a directory */
            file_node->render_flags = DIR_FLAG_VISIBLE;
            file_node->total_size = st.st_size;

            files[entry->num_files++] = file_node;
        }
    }
    closedir(dir);

    /* Store files array */
    entry->files_array = files;
    entry->file_count = entry->num_files;
    entry->total_size = entry->num_files * 4096;  /* Estimate */
}

/**
 * layout_directory - Position directory entries in 3D space
 *
 * ORIGINAL FSN TERNARY LAYOUT:
 * - child_center at x=0
 * - child_left at x=-item_spacing_x
 * - child_right at x=+item_spacing_x
 * - Z position: parent height + layout_base_height
 *
 * Original: fsn.c:42526-42540
 */
static void layout_directory(DirectoryNode *entry, float x, float y, int depth)
{
    int i;
    float child_z;

    /* Set this directory's position */
    entry->pos_x = x;
    entry->pos_y = y;
    entry->height = 1.0f + depth * 0.5f;

    /* Calculate child Z position: height + layout_base_height */
    child_z = entry->height + layout_base_height;

    /*
     * ORIGINAL FSN TERNARY LAYOUT from fsn.c:42526-42540
     */

    /* CENTER child at x=0 */
    if (entry->child_center != NULL) {
        entry->child_center->offset_x = 0.0f;
        entry->child_center->offset_y = child_z;
        layout_directory(entry->child_center, x, y + child_z, depth + 1);
    }

    /* LEFT child at x=-item_spacing_x */
    if (entry->child_left != NULL) {
        entry->child_left->offset_x = -item_spacing_x;
        entry->child_left->offset_y = child_z;
        layout_directory(entry->child_left, x - item_spacing_x, y + child_z, depth + 1);
    }

    /* RIGHT child at x=+item_spacing_x */
    if (entry->child_right != NULL) {
        entry->child_right->offset_x = item_spacing_x;
        entry->child_right->offset_y = child_z;
        layout_directory(entry->child_right, x + item_spacing_x, y + child_z, depth + 1);
    }

    /*
     * Position files within directory using icon_spacing_factor
     * Original: fsn.c:43389-43392
     * x = -icon_spacing_factor * (num_files - 1) + icon_spacing_factor * file_index
     */
    if (entry->files_array != NULL) {
        for (i = 0; i < entry->num_files; i++) {
            DirectoryNode *file = entry->files_array[i];
            /* Linear spread centered at x=0 */
            float file_x = -icon_spacing_factor * (entry->num_files - 1) / 2.0f
                         + icon_spacing_factor * i;
            file->pos_x = x + file_x;
            file->pos_y = y;
            file->offset_x = file_x;
            file->offset_y = 0.0f;
            file->height = 0.5f;  /* Files are shorter than directories */
        }
    }
}
