# FSN Function Reference

> Complete listing of 402 functions from the original FSN decompile, organized by category.

## Function Categories by Prefix

| Prefix | Count | Purpose |
|--------|-------|---------|
| `init_*` | 26 | Initialization routines |
| `draw_*` | 26 | Drawing/rendering functions |
| `get_*` | 21 | Getter functions |
| `update_*` | 20 | State update functions |
| `set_*` | 14 | Setter functions |
| `process_*` | 11 | Event/data processing |
| `setup_*` | 10 | Setup/configuration |
| `refresh_*` | 10 | Refresh/redraw triggers |
| `create_*` | 7 | Widget/object creation |
| `render_*` | 5 | Rendering passes |
| Other | 252 | Various utilities |

## Graphics & Rendering (50+ functions)

### Core Drawing
```c
void draw_scene(void)                    // Main render loop entry point
void redraw_gl_scene(void)               // Scene redraw trigger
void checkRedrawScene(void)              // Check and call redraw if needed
void draw_directories(char param_1)      // Draw ground plane and sky
```

### GL Setup
```c
void set_main_gl_window(void)            // Set current GL context
void setMainWindow(void)                 // Alias for set_main_gl_window
void setOverlayWindow(void)              // Set overlay GL context
void setOverviewWindow(void)             // Set overview GL context
void GLXwinset(Display*, Window)         // Low-level GLX context switch
```

### Display List Operations
```c
void init_display_lists(void)            // Initialize GL display lists
void flush_rendering(int param)          // Flush pending GL commands
void gl_picking_setup_wrapper(void)      // Setup picking mode
```

### View Transforms
```c
void set_camera_lookat(double x, double y) // Set camera target
void setup_view_matrix(void)               // Apply view transforms
void update_camera_state(void)             // Update camera position
```

## File System Operations (40+ functions)

### Directory Traversal
```c
void* open_directory(char* path)         // Open directory for reading
void close_directory(void* dir)          // Close directory handle
int read_directory_entry(void* dir)      // Read next entry
void scan_directory(char* path)          // Full directory scan
```

### File Operations
```c
void copy_file(char* src, char* dst)     // Copy file
void delete_file(char* path)             // Delete file
void move_file(char* src, char* dst)     // Move/rename file
int get_file_status(char* path)          // Get file stat info
```

### Tree Management
```c
void* create_tree_node(void)             // Create directory node
void destroy_tree_node(void* node)       // Destroy directory node
void update_tree_bounds(void)            // Recalculate tree extents
void process_tree_node(void* node)       // Process single node
```

## UI & Widget Functions (60+ functions)

### Widget Creation
```c
Widget get_panel_value(Widget parent)    // Create menu bar
Widget create_panel_component(...)       // Create control panel
void setup_context_widgets(void)         // Create widget hierarchy
void create_gl_window(void)              // Create GL drawing area
```

### Callbacks
```c
void glwidget_expose_callback(...)       // GL area expose handler
void glwidget_resize_callback(...)       // GL area resize handler
void glwidget_init_callback(...)         // GL area init handler
void quit_application(...)               // Application quit handler
void pref_panel_map_callback(...)        // Preferences panel handler
```

### Menu System
```c
void create_file_menu(Widget parent)     // Create File menu
void create_view_menu(Widget parent)     // Create View menu
void create_help_menu(Widget parent)     // Create Help menu
void post_menu(Widget menu, XEvent* ev)  // Show popup menu
```

### Status & Messaging
```c
int set_status_message(char* msg, int)   // Set status bar text
void display_status_message(char* msg)   // Display variant
void clear_status_message(void)          // Clear status bar
```

## Selection & Picking (30+ functions)

### Selection Management
```c
void clear_selection(void)               // Clear all selection
void update_selection(void)              // Update selection state
void clear_current_selection(void)       // Clear current item only
void clear_marked_state(void)            // Clear marks
void add_to_selection(void* item)        // Add item to selection
void remove_from_selection(void* item)   // Remove from selection
```

### GL Picking
```c
void init_picking_mode(void)             // Enter picking mode
int end_picking_mode(void)               // Exit and process hits
void process_pick_item(void* item)       // Handle picked item
int get_item_screen_coords(void* item)   // Get screen position
```

### Highlighting
```c
void highlight_item(void* item)          // Highlight single item
void unhighlight_item(void* item)        // Remove highlight
void update_highlight(void)              // Refresh highlights
```

## Navigation & Zoom (25+ functions)

### Camera Control
```c
void move_camera(float dx, float dy)     // Pan camera
void rotate_camera(float rx, float rz)   // Rotate camera
void zoom_camera(float factor)           // Zoom in/out
void reset_camera(void)                  // Reset to default view
```

### Warp Mode
```c
void enter_warp_mode(void)               // Start warp zoom
void exit_warp_mode(void)                // End warp zoom
void draw_warp(void)                     // Render warp effect
void update_warp_state(void)             // Update warp animation
```

### Overview Window
```c
void show_overview(void)                 // Show overview panel
void hide_overview(void)                 // Hide overview panel
void update_overview(void)               // Refresh overview
void draw_overview(void)                 // Render overview
```

## Context & State (20+ functions)

### Context Management
```c
void create_context(void)                // Create new context
void destroy_context(void)               // Destroy context
void switch_context(int id)              // Switch active context
void save_context_state(void)            // Save context to file
void restore_context_state(void)         // Restore from file
```

### State Updates
```c
void update_widget_state(void)           // Sync widget state
void update_display(void)                // Request display refresh
void save_state(void)                    // Save application state
void restore_state(void)                 // Restore application state
```

## Initialization (26 functions)

```c
void init_application(int argc, char** argv)  // Main init
void init_resources(void)                     // Load X resources
void init_gl_state(void)                      // Initialize GL
void init_context_windows(void)               // Create windows
void init_context_menus(void)                 // Create menus
void init_display_lists(void)                 // Create display lists
void init_file_monitor(void)                  // Start FAM
void init_icon_cache(void)                    // Setup icons
void init_color_tables(void)                  // Setup colors
void init_preferences(void)                   // Load preferences
```

## Color Operations (20+ functions)

```c
void rgb_to_hsv(float r, float g, float b, float* h, float* s, float* v)
void hsv_to_rgb(float h, float s, float v, float* r, float* g, float* b)
void rgb_to_yiq(float r, float g, float b, float* y, float* i, float* q)
void rgb_to_cmy(float r, float g, float b, float* c, float* m, float* y)
int pack_rgb(int r, int g, int b)            // Pack to cpack format
void unpack_rgb(int packed, int* r, int* g, int* b)
```

## Icon/Bytecode System (15+ functions)

> Note: SGI bytecode system is disabled on Linux (returns NULL/no-op)

```c
int get_bytecode_context(int, int)           // Always returns 0
int eval_bytecode_instruction(...)           // No-op
void reset_icon_interpreter(void)            // Reset state
void load_icon_definition(char* path)        // Load icon file
void render_icon(int type, float x, float y) // Draw icon
```

## Utility Functions (50+ functions)

### String Operations
```c
char* build_path_string(char* buf, void* node) // Build full path
char* concat_paths(char* a, char* b)           // Join paths
int compare_strings(char* a, char* b)          // Case-insensitive
char* duplicate_string(char* s)                // strdup wrapper
```

### Memory/Buffer
```c
void* allocate_buffer(size_t size)       // malloc wrapper
void free_buffer(void* buf)              // free wrapper
void clear_buffer(void* buf, size_t n)   // memset wrapper
```

### Math
```c
float interpolate(float a, float b, float t)  // Linear interp
float clamp(float v, float min, float max)    // Clamp value
int sign(float v)                             // Sign function
```

## Module Location Reference

| Module | Key Functions |
|--------|---------------|
| `drawing.c` | draw_scene, draw_directories, checkRedrawScene |
| `window.c` | set_main_gl_window, GLXwinset |
| `stubs.c` | setup_context_widgets, get_panel_value |
| `fsn_igl.c` | All IrisGL wrappers (100+ functions) |
| `fsn_state.c` | Global variable definitions |
| `main.c` | main(), application initialization |
| `directory.c` | Directory tree operations |
| `selection.c` | Selection and picking |
| `view_camera.c` | Camera transforms |
| `warp.c` | Warp zoom mode |

---

*See fsn.c lines for original decompiled implementations*
