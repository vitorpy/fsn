/**
 * box_geometry.h - Box vertex data extracted from original FSN binary
 */

#ifndef FSN_BOX_GEOMETRY_H
#define FSN_BOX_GEOMETRY_H

/* Unit cube vertices (8 vertices, 3 floats each) */
extern const float fsn_box_vertices[8][3];

/* Face indices (6 faces, 4 indices each) */
extern const int fsn_box_faces[6][4];

/* Alternative face indices */
extern const int fsn_box_alt_faces[2][4];

/* Center line vertices for type 3 rendering */
extern const float fsn_box_center_line[2][3];

/* Face bit flags */
#define FSN_FACE_FRONT  0x01
#define FSN_FACE_LEFT   0x02
#define FSN_FACE_RIGHT  0x04
#define FSN_FACE_BACK   0x08
#define FSN_FACE_TOP    0x10
#define FSN_FACE_BOTTOM 0x20
#define FSN_FACE_ALL    0x3F

#endif /* FSN_BOX_GEOMETRY_H */
