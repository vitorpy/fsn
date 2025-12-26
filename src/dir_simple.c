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

/* Block-based allocator constants (match original SGI: fsn.c:39173-39192) */
#define BLOCK_NODE_COUNT    64   /* Nodes per block (original: 0x40) */
#define BLOCK_INDEX_INITIAL 16   /* Initial block index slots */
#define BLOCK_INDEX_GROW    16   /* Grow block index by this many */

static short next_name_index = 1;

/* Forward declarations */
static void scan_directory_recursive(DirectoryNode *entry, const char *path, int depth);
static void layout_directory(DirectoryNode *entry, float x, float y, int depth);
static float calculate_file_height(off_t file_size);
static void recalculate_node_heights(DirectoryNode *node);

/**
 * calculate_file_height - Compute block height based on file size and mode
 *
 * ORIGINAL: fsn.c:38989 - Height calculation with power scaling
 * displayHeight modes:
 *   0 = None - all files same height
 *   1 = Linear - logarithmic scaling (looks linear perceptually)
 *   2 = Exaggerated - power scaling with display_height_exponent
 */
static float calculate_file_height(off_t file_size)
{
    float base_height = 0.5f;
    float max_height = 5.0f;
    float log_size, norm;

    switch (displayHeight) {
        case 0:  /* None - all same height */
            return base_height;

        case 1:  /* Linear - logarithmic scaling for visual proportionality */
            /* Normalize: 1KB=0.5, 1MB=2.0, 1GB=3.5 */
            if (file_size <= 0) return base_height;
            log_size = log10f((float)file_size + 1.0f);
            return base_height + (log_size / 9.0f) * (max_height - base_height);

        case 2:  /* Exaggerated - power scaling (ORIGINAL: fsn.c:38989) */
            if (file_size <= 0) return base_height;
            norm = (float)file_size / (1024.0f * 1024.0f);  /* Normalize to MB */
            return base_height + powf(norm, display_height_exponent) * max_height;

        default:
            return base_height;
    }
}

/**
 * recalculate_tree_heights - Recalculate heights for all nodes after mode change
 */
void recalculate_tree_heights(void)
{
    if (topdir == NULL) return;
    recalculate_node_heights((DirectoryNode *)topdir);
}

static void recalculate_node_heights(DirectoryNode *node)
{
    int i;

    if (node == NULL) return;

    /* Recalculate this node's height if it's a file */
    if (!(node->render_flags & DIR_FLAG_DIRECTORY)) {
        node->height = calculate_file_height(node->total_size);
    }

    /* Recurse through ternary children */
    recalculate_node_heights(node->child_center);
    recalculate_node_heights(node->child_left);
    recalculate_node_heights(node->child_right);

    /* Process files array */
    if (node->files_array != NULL) {
        for (i = 0; i < node->num_files; i++) {
            recalculate_node_heights(node->files_array[i]);
        }
    }
}

/**
 * allocate_directory_entry - Allocate a new directory entry from block pool
 *
 * ORIGINAL: fsn.c:39173-39192 (FUN_00411c04)
 *
 * Uses a block-based bump allocator that NEVER moves existing allocations.
 * This is critical for recursive scanning where pointers are held on stack.
 *
 * Algorithm:
 * 1. If current block exhausted, allocate new block
 * 2. Store new block pointer in dir_index array (grow if needed)
 * 3. Bump pointer within current block
 * 4. Return pointer to allocated node
 */
undefined4 *allocate_directory_entry(void)
{
    DirectoryNode *node;
    size_t node_size = sizeof(DirectoryNode);
    size_t block_size = BLOCK_NODE_COUNT * node_size;

    /* Check if current block is exhausted or not yet allocated */
    if ((directory_memory_pool == NULL) ||
        (directory_memory_pool >= directory_pool_limit)) {

        /* Allocate new block - calloc zeros memory */
        directory_memory_pool = calloc(BLOCK_NODE_COUNT, node_size);
        if (directory_memory_pool == NULL) {
            fprintf(stderr, "allocate_directory_entry: out of memory\n");
            return NULL;
        }
        directory_pool_limit = (char *)directory_memory_pool + block_size;

        /* Initialize block index array on first allocation */
        if (directory_pool_index == 0) {
            dir_index = malloc(BLOCK_INDEX_INITIAL * sizeof(void *));
            if (dir_index == NULL) {
                fprintf(stderr, "allocate_directory_entry: dir_index alloc failed\n");
                free(directory_memory_pool);
                directory_memory_pool = NULL;
                return NULL;
            }
            directory_pool_capacity = BLOCK_INDEX_INITIAL;
        }
        /* Grow block index array if full */
        else if (directory_pool_index >= directory_pool_capacity) {
            int new_cap = directory_pool_capacity + BLOCK_INDEX_GROW;
            void **new_idx = realloc(dir_index, new_cap * sizeof(void *));
            if (new_idx == NULL) {
                fprintf(stderr, "allocate_directory_entry: dir_index grow failed\n");
                free(directory_memory_pool);
                directory_memory_pool = NULL;
                return NULL;
            }
            dir_index = new_idx;
            directory_pool_capacity = new_cap;
        }

        /* Store block pointer in index array */
        dir_index[directory_pool_index++] = directory_memory_pool;
    }

    /* Get pointer to current slot (before bump) */
    node = (DirectoryNode *)directory_memory_pool;

    /* Initialize node */
    memset(node, 0, node_size);
    node->name_index = next_name_index++;
    node->render_flags = DIR_FLAG_VISIBLE;

    /* Bump pointer to next slot */
    directory_memory_pool = (char *)directory_memory_pool + node_size;

    return (undefined4 *)node;
}

/**
 * free_directory_pool - Free all directory pool blocks
 *
 * Call this on application shutdown or when rescanning.
 */
void free_directory_pool(void)
{
    int i;

    /* Free all allocated blocks */
    if (dir_index != NULL) {
        for (i = 0; i < directory_pool_index; i++) {
            if (dir_index[i] != NULL) {
                free(dir_index[i]);
            }
        }
        free(dir_index);
        dir_index = NULL;
    }

    /* Reset state */
    directory_pool_index = 0;
    directory_pool_capacity = 0;
    directory_memory_pool = NULL;
    directory_pool_limit = NULL;
    next_name_index = 1;

    /* Clear topdir */
    topdir = NULL;
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
    root->depth_indicator = -1;  /* Enable pedestal rendering */

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

    fprintf(stderr, "create_root_directory: allocated %d blocks, topdir=%p\n",
            directory_pool_index, (void *)topdir);
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
            child->depth_indicator = -1;  /* Enable pedestal rendering */

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

    /* Calculate child Y offset - children positioned slightly behind parent.
     * Original FSN: children spread WIDE in X, with minimal Y offset.
     * Use block spacing (2.0) for consistent visual separation.
     */
    child_z = item_spacing_x;

    /*
     * ORIGINAL FSN TERNARY LAYOUT from fsn.c:42526-42540
     */

    /* CENTER child - line goes from parent center to child position */
    if (entry->child_center != NULL) {
        entry->child_center->offset_x = 0.0f;
        entry->child_center->offset_y = 0.0f;  /* Line starts at parent's Y */
        layout_directory(entry->child_center, x, y + child_z, depth + 1);
    }

    /* LEFT child - line starts slightly left of parent center */
    if (entry->child_left != NULL) {
        entry->child_left->offset_x = -0.5f;   /* Small visual spread */
        entry->child_left->offset_y = 0.0f;    /* Line starts at parent's Y */
        layout_directory(entry->child_left, x - item_spacing_x, y + child_z, depth + 1);
    }

    /* RIGHT child - line starts slightly right of parent center */
    if (entry->child_right != NULL) {
        entry->child_right->offset_x = 0.5f;   /* Small visual spread */
        entry->child_right->offset_y = 0.0f;   /* Line starts at parent's Y */
        layout_directory(entry->child_right, x + item_spacing_x, y + child_z, depth + 1);
    }

    /*
     * ORIGINAL: Position files in SQUARE GRID layout
     * From FUN_00412604 (first_traversal) analysis:
     * - Grid dimension = floor(sqrt(num_files - 1)) + 1
     * - Grid spacing = xDirMargin + yDirMargin = 10.0
     * - Starting offset centers the grid: (1 - grid_dim) * spacing
     * - Row-major order: column increments first, then row
     */
    if (entry->files_array != NULL && entry->num_files > 0) {
        int grid_dim;
        float grid_spacing = item_spacing_x + layout_base_height;  /* 2.0 + 8.0 = 10.0 */
        float start_offset;
        int row, col;

        /* Calculate grid dimension */
        if (entry->num_files == 1) {
            grid_dim = 1;
        } else {
            grid_dim = (int)floorf(sqrtf((float)(entry->num_files - 1))) + 1;
        }

        /* Center the grid */
        start_offset = (1.0f - (float)grid_dim) * grid_spacing * 0.5f;

        /* Position each file in the grid */
        row = 0;
        col = 0;
        for (i = 0; i < entry->num_files; i++) {
            DirectoryNode *file = entry->files_array[i];
            float file_x = start_offset + (float)col * grid_spacing;
            float file_y = (float)row * grid_spacing;

            file->pos_x = x + file_x;
            file->pos_y = y + file_y;
            file->offset_x = 0.0f;  /* Line starts at parent center */
            file->offset_y = 0.0f;  /* Line starts at parent's Y */
            file->height = calculate_file_height(file->total_size);

            /* Move to next grid position (row-major) */
            col++;
            if (col >= grid_dim) {
                col = 0;
                row++;
            }
        }
    }
}
