#!/usr/bin/env python3
"""
Extract SGI IRIS GL API calls and map to OpenGL equivalents.
"""

import re
import sys
from collections import Counter

# SGI GL to OpenGL mapping
SGI_GL_MAPPING = {
    # Primitives
    'rect': 'glRecti() or glVertex2i() with GL_QUADS',
    'rectf': 'glRectf() or glVertex2f() with GL_QUADS',
    'circf': 'Custom circle drawing with GL_TRIANGLE_FAN',
    'arc': 'Custom arc drawing with GL_LINE_STRIP',
    'arcf': 'Custom arc drawing with GL_TRIANGLE_FAN',

    # Begin/End primitives
    'bgnpolygon': 'glBegin(GL_POLYGON)',
    'endpolygon': 'glEnd()',
    'bgnline': 'glBegin(GL_LINE_STRIP)',
    'endline': 'glEnd()',
    'bgnclosedline': 'glBegin(GL_LINE_LOOP)',
    'endclosedline': 'glEnd()',
    'bgntmesh': 'glBegin(GL_TRIANGLE_STRIP)',
    'endtmesh': 'glEnd()',
    'bgnqstrip': 'glBegin(GL_QUAD_STRIP)',
    'endqstrip': 'glEnd()',
    'bgnpoint': 'glBegin(GL_POINTS)',
    'endpoint': 'glEnd()',

    # Matrix operations
    'pushmatrix': 'glPushMatrix()',
    'popmatrix': 'glPopMatrix()',
    'multmatrix': 'glMultMatrixf()',
    'loadmatrix': 'glLoadMatrixf()',
    'getmatrix': 'glGetFloatv(GL_MODELVIEW_MATRIX, ...)',
    'rot': 'glRotatef()',
    'rotate': 'glRotatef()',
    'translate': 'glTranslatef()',
    'scale': 'glScalef()',

    # Viewing
    'viewport': 'glViewport()',
    'ortho': 'glOrtho() or gluOrtho2D()',
    'ortho2': 'glOrtho()',
    'perspective': 'gluPerspective()',
    'polarview': 'gluLookAt() equivalent',
    'lookat': 'gluLookAt()',

    # Color
    'color': 'glColor3f() or glIndexi() for color index',
    'cpack': 'glColor4ubv() with packed RGBA',
    'RGBcolor': 'glColor3ub()',
    'RGBmode': 'Use RGBA mode (OpenGL default)',
    'cmode': 'Obsolete (color index mode)',

    # Picking/Selection
    'gselect': 'glRenderMode(GL_SELECT) + GLM raycasting (RECOMMENDED)',
    'pick': 'glInitNames(), glPushName(), etc. OR raycasting',
    'endpick': 'glRenderMode(GL_RENDER) + process selection buffer',
    'pushname': 'glPushName()',
    'popname': 'glPopName()',
    'loadname': 'glLoadName()',
    'initnames': 'glInitNames()',

    # Buffers
    'clear': 'glClear(GL_COLOR_BUFFER_BIT)',
    'zclear': 'glClear(GL_DEPTH_BUFFER_BIT)',
    'zbuffer': 'glEnable(GL_DEPTH_TEST)',
    'frontbuffer': 'glDrawBuffer(GL_FRONT)',
    'backbuffer': 'glDrawBuffer(GL_BACK)',
    'swapbuffers': 'glXSwapBuffers() or glutSwapBuffers()',
    'doublebuffer': 'Request double-buffered visual in window creation',

    # Line/point attributes
    'linewidth': 'glLineWidth()',
    'linesmooth': 'glEnable(GL_LINE_SMOOTH)',
    'pointsize': 'glPointSize()',

    # Text
    'charstr': 'Use freetype/ftgl or texture-mapped fonts',
    'cmov': 'Set raster position for text (use glRasterPos)',
    'font': 'Font selection (use freetype)',

    # Lighting (if used)
    'lmdef': 'glLightModelfv()',
    'lmbind': 'glEnable(GL_LIGHTING)',
    'light': 'glLightfv()',

    # Patterns
    'defpattern': 'glPolygonStipple() or use textures',
    'setpattern': 'glEnable(GL_POLYGON_STIPPLE)',

    # Vertex operations
    'v2f': 'glVertex2f()',
    'v2i': 'glVertex2i()',
    'v3f': 'glVertex3f()',
    'v3i': 'glVertex3i()',
    'n3f': 'glNormal3f()',

    # Window/config
    'ginit': 'OpenGL context creation (platform-specific)',
    'winopen': 'Platform-specific window creation (X11, GLUT, etc.)',
    'winclose': 'Platform-specific window destruction',
    'qdevice': 'Event handling (use X11 events or GLUT)',
    'qread': 'Event reading (use X11 XNextEvent or GLUT callbacks)',
}

def extract_sgi_gl_calls(filepath):
    """Extract all SGI GL function calls from source."""
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Find all potential SGI GL calls
    # Pattern: function name followed by (
    func_pattern = r'\b([a-z][a-z0-9]*)\s*\('

    all_calls = []
    for match in re.finditer(func_pattern, content):
        func_name = match.group(1)
        # Filter for likely GL calls (lowercase, common GL names)
        if func_name in SGI_GL_MAPPING or any(func_name.startswith(prefix) for prefix in
            ['bgn', 'end', 'rect', 'circ', 'arc', 'v2', 'v3', 'n3', 'cpack']):
            all_calls.append(func_name)

    return Counter(all_calls)

def main():
    if len(sys.argv) < 2:
        print("Usage: extract_sgi_gl.py <fsn.c>")
        sys.exit(1)

    filepath = sys.argv[1]
    gl_calls = extract_sgi_gl_calls(filepath)

    print("SGI IRIS GL API Calls Found in fsn.c")
    print("=" * 80)
    print()

    # Separate known vs unknown calls
    known_calls = {k: v for k, v in gl_calls.items() if k in SGI_GL_MAPPING}
    unknown_calls = {k: v for k, v in gl_calls.items() if k not in SGI_GL_MAPPING}

    print(f"Known SGI GL calls: {len(known_calls)}")
    print(f"Unknown/other calls: {len(unknown_calls)}")
    print()

    # Save mapping document
    output_file = 'analysis/sgi_gl_mapping.md'
    with open(output_file, 'w') as f:
        f.write("# SGI IRIS GL to OpenGL API Mapping\n\n")
        f.write("## Overview\n\n")
        f.write("This document maps SGI IRIS GL calls found in fsn.c to their OpenGL equivalents.\n\n")
        f.write("## Summary Statistics\n\n")
        f.write(f"- Total unique GL function calls: {len(gl_calls)}\n")
        f.write(f"- Known SGI GL calls: {len(known_calls)}\n")
        f.write(f"- Total GL call sites: {sum(gl_calls.values())}\n\n")

        f.write("## Known SGI GL Calls (with OpenGL equivalents)\n\n")
        f.write("| SGI GL Function | Count | OpenGL Equivalent |\n")
        f.write("|-----------------|-------|-------------------|\n")

        for func, count in sorted(known_calls.items(), key=lambda x: -x[1]):
            mapping = SGI_GL_MAPPING.get(func, 'Unknown')
            f.write(f"| `{func}()` | {count} | {mapping} |\n")

        if unknown_calls:
            f.write("\n## Other Function Calls (may not be GL)\n\n")
            f.write("| Function | Count |\n")
            f.write("|----------|-------|\n")
            for func, count in sorted(unknown_calls.items(), key=lambda x: -x[1])[:30]:
                f.write(f"| `{func}()` | {count} |\n")

        f.write("\n## Picking System Replacement Strategy\n\n")
        f.write("SGI GL picking (gselect/pick/endpick) will be replaced with **GLM-based raycasting**:\n\n")
        f.write("### Raycasting Approach\n\n")
        f.write("1. **Mouse to ray**: Convert 2D mouse coordinates to 3D ray using inverse projection\n")
        f.write("2. **Ray-object intersection**: Test ray against scene geometry bounding boxes/meshes\n")
        f.write("3. **Nearest hit**: Return closest intersected object\n\n")
        f.write("### Implementation Requirements\n\n")
        f.write("- GLM library for vector/matrix math\n")
        f.write("- Maintain scene graph with object IDs and bounding volumes\n")
        f.write("- Ray-AABB (axis-aligned bounding box) intersection tests\n")
        f.write("- Optional: Ray-triangle intersection for precise picking\n\n")

        f.write("## Matrix and Transform Operations\n\n")
        f.write("SGI GL matrix stack operations map directly to OpenGL 2.1:\n")
        f.write("- Use glPushMatrix()/glPopMatrix() for stack management\n")
        f.write("- Use glTranslatef()/glRotatef()/glScalef() for transforms\n")
        f.write("- Modern approach: Consider GLM for matrix math if avoiding deprecated functions\n\n")

        f.write("## Text Rendering\n\n")
        f.write("SGI GL `charstr()` has no direct OpenGL equivalent:\n")
        f.write("- Option 1: FreeType + texture-mapped fonts (modern)\n")
        f.write("- Option 2: FTGL library (FreeType + OpenGL)\n")
        f.write("- Option 3: Bitmap fonts with glBitmap() (simple but limited)\n\n")

    print(f"Detailed mapping saved to: {output_file}")
    print()

    # Print summary
    if known_calls:
        print("Top 10 SGI GL calls by frequency:")
        print("-" * 40)
        for func, count in sorted(known_calls.items(), key=lambda x: -x[1])[:10]:
            print(f"  {func:20s}: {count:4d} calls")

if __name__ == '__main__':
    main()
