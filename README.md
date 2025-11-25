# FSN - File System Navigator (Fusion)

Restoration of the iconic 3D file system navigator from SGI IRIX, as seen in Jurassic Park (1993).

## Project Status

**Current Phase:** Phase 1 - Foundation & Analysis

This project is converting a 78,647-line Ghidra decompile of the original MIPS/IRIX binary into a functional modern Linux application.

### Progress Tracking

Use `bd ready` to see current work items and `bd dep tree fsn-cced` to visualize the full project structure.

## Project Structure

```
fsn/
├── src/              # Source files (will be split into modules in Phase 4)
├── include/          # Header files (will be populated in Phase 2)
├── lib/              # Any additional libraries or resources
├── resources/        # Textures, landscapes, etc.
├── fsn.c             # Original 78K-line Ghidra decompile (monolithic)
└── .beads/           # bd issue tracker database
```

## Build Dependencies

- **OpenMotif** (libXm, libXt, libX11) - User interface toolkit
- **OpenGL** (libGL, libGLU) - 3D graphics
- **GLM** - Mathematics library for raycasting-based picking
- **CMake** 3.15+ - Build system

### Installing Dependencies (Ubuntu/Debian)

```bash
sudo apt-get install libmotif-dev libx11-dev libgl1-mesa-dev libglu1-mesa-dev libglm-dev cmake build-essential
```

### Installing Dependencies (Arch Linux)

```bash
sudo pacman -S motif libx11 mesa glu glm cmake base-devel
```

## Build Instructions

**Note:** Build is not yet functional. Will be enabled after Phase 3 (Function & Variable Cleanup).

```bash
mkdir build && cd build
cmake ..
# make (disabled for now)
```

## Architecture

### Original Platform
- **System:** SGI IRIX (MIPS architecture)
- **Graphics:** SGI Graphics Library (IRIS GL)
- **UI:** X11/Motif

### Target Platform
- **System:** Modern Linux (x86-64)
- **Graphics:** OpenGL 2.1+ with GLM-based raycasting for picking
- **UI:** OpenMotif (maintaining X11/Motif compatibility)

## Development Phases

1. **Foundation & Analysis** - Catalog functions, identify modules
2. **Header Extraction** - Organize types and includes
3. **Function Cleanup** - Rename 436 FUN_0x functions and 231 DAT_0x globals
4. **Modularization** - Split into logical source files
5. **Graphics Port** - SGI GL → OpenGL conversion with raycasting
6. **Integration** - Build system and linking
7. **Testing** - Functionality verification and refinement

## Known Challenges

- 831 `halt_baddata()` calls from decompilation artifacts
- 1,808 Ghidra WARNING comments to triage
- MIPS → x86-64 architecture differences
- SGI GL picking API → OpenGL raycasting conversion
- 78K lines of monolithic code to modularize

## References

- [Jurassic Park FSN Analysis](https://www.siliconbunny.com/fsn-the-irix-3d-file-system-tool-from-jurassic-park/)
- Original SGI fsn from IRIX 6.5

## License

TBD - Original SGI software license status unclear.
