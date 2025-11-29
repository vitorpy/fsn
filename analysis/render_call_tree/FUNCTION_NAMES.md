# Render Call Tree - Function Name Mapping

## Symbol → Address Mapping

Based on dynamic symbol table from `fsn.original`:

| Symbol | Address | FUN_ Offset | Purpose |
|--------|---------|-------------|---------|
| draw_scene | 0x0040cac4 | - | Main scene renderer |
| draw_directories | 0x00425100 | FUN_0042510c | Render all directory blocks |
| draw_directory | 0x00424250 | FUN_0042425c | Render single directory |
| draw_warp_directory | 0x00419418 | FUN_00419424 | Render directory in warp mode |
| draw_warp | 0x004101d8 | - | Warp effect rendering |
| draw_dir | 0x00418f44 | - | Directory helper |
| draw_special | 0x00418c24 | - | Special file rendering |
| draw_box | 0x00422278 | FUN_00422284 | Draw 3D box with 6 faces |
| draw_file | 0x00422f4c | FUN_00422f58 | Render file block with transforms |
| draw_file_pointers | 0x004237a8 | FUN_004237b4 | Draw file pointer lines |
| spotlight | 0x00427a30 | FUN_00427a3c | Draw selection spotlight beam |
| draw_files | 0x00423b30 | FUN_00423b3c | Render all files in directory |
| draw_visible_directory | 0x004259d0 | FUN_004259dc | Render visible directory (recursive) |
| check_visibility | 0x0040ca4c | FUN_0040ca58 | Check if object is visible |
| setScales | 0x0040d7f8 | FUN_0040d804 | Set scale factors |
| setOverlayWindow | 0x0040bc1c | FUN_0040bc28 | Setup overlay window |
| markAllVisible | 0x00425bcc | FUN_00425bd8 | Mark all items as visible |
| text | 0x004189a4 | FUN_004189b0 | Draw text label |
| drawOverviewOverlay | 0x00420b64 | FUN_00420b70 | Draw overview overlay |
| need_pups | 0x00421f04 | FUN_00421f10 | Check if popups needed |
| cGetBounds | 0x00433c30 | FUN_00433c3c | Get character bounds |
| cIconDraw | 0x00433c9c | FUN_00433ca8 | Draw character icon |
| getbeam | 0x00429284 | FUN_00429290 | Get beam parameters |
| locateClear | 0x004294c0 | FUN_004294cc | Clear locate highlight |

Note: FUN_ addresses are typically 12 bytes after symbol address due to MIPS PIC prologue.

## Key Rendering Functions

### With Many IrisGL Calls

| FUN_ | Symbol Name | IGL Calls | Purpose |
|------|-------------|-----------|---------|
| FUN_00419424 | draw_warp_directory | 45 | Directory blocks in warp |
| FUN_00422284 | **draw_box** | 48 | Draw 3D box with 6 faces |
| FUN_0042425c | draw_directory | 41 | Single directory block |
| FUN_00422f58 | **draw_file** | 27 | Render file block with transforms |
| FUN_0042510c | draw_directories | 26 | All directories |
| FUN_00427a3c | **spotlight** | 14 | Draw selection spotlight beam |
| FUN_004237b4 | **draw_file_pointers** | 10 | Draw file pointer lines |

### Contains rect/rectf Calls

These are the functions that need CONCAT44 analysis for rect coordinates:

| Function | rect calls | rectf calls |
|----------|------------|-------------|
| FUN_00419424 (draw_warp_directory) | 1 @ 0x419dc8 | 2 @ 0x419d3c, 0x419e10 |
| FUN_0042425c (draw_directory) | 1 @ 0x4245e0 | 1 @ 0x424514 |

## Call Hierarchy (Complete)

```
draw_scene (0x0040cac4)               # 9 IGL calls - main entry
├── setScales (0x0040d7f8)            # Scale factor setup
├── setMainWindow (0x0040bbd4)        # Window management
├── check_visibility (0x0040ca4c)     # 2 IGL calls - visibility check
│   └── draw_visible_directory (0x004259d0)  # 5 IGL calls
│       ├── markAllVisible (0x00425bcc)      # Recursive marking
│       └── draw_box (0x00422278)            # 48 IGL calls - 3D box
├── draw_directories (0x00425100)     # 26 IGL calls
│   ├── draw_warp_directory (0x00419418)  # 45 IGL calls, has rect/rectf
│   │   ├── draw_file (0x00422f4c)        # 27 IGL calls
│   │   │   ├── draw_box (0x00422278)     # 48 IGL calls
│   │   │   ├── cGetBounds (0x00433c30)   # Character bounds
│   │   │   ├── text (0x004189a4)         # 1 IGL - draw label
│   │   │   ├── getbeam (0x00429284)      # Beam params
│   │   │   └── cIconDraw (0x00433c9c)    # Draw icon
│   │   ├── spotlight (0x00427a30)        # 14 IGL calls
│   │   └── draw_file_pointers (0x004237a8) # 10 IGL calls
│   └── draw_directory (0x00424250)       # 41 IGL calls, has rect/rectf
│       ├── draw_files (0x00423b30)       # 6 IGL calls
│       │   ├── draw_file_pointers (0x004237a8)
│       │   ├── draw_file (0x00422f4c)
│       │   │   └── draw_box (0x00422278)
│       │   └── spotlight (0x00427a30)
│       ├── draw_box (0x00422278)
│       └── text (0x004189a4)
├── drawOverviewOverlay (0x00420b64)  # Overview rendering
│   └── need_pups (0x00421f04)
└── locateClear (0x004294c0)          # Clear selection
    └── setOverlayWindow (0x0040bc1c)
```

## Function Signatures (from analysis)

### draw_box (FUN_00422284)
- **48 IrisGL calls**: 40× v3f, 8× cpack
- Uses `small` global vertex table (GP offset -32664)
- Draws 6-faced 3D box with color/mode parameters
- Parameters: color pointer, render mode, face bitmask (0x01-0x20)
