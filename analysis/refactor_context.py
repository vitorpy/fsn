#!/usr/bin/env python3
"""
refactor_context.py (Tree-sitter Edition)

Automated tool to refactor raw `curcontext` byte offsets into safe `FsnContext` struct access
using robust AST parsing.

Usage:
    python3 analysis/refactor_context.py [file_path]

If file_path is provided, it runs on that file.
If not, it scans all .c files in src/ (excluding backups)
"""

import sys
import os
from pathlib import Path
import tree_sitter_c as tsc
from tree_sitter import Language, Parser, Node

# Initialize Tree-sitter
C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)

# Offset to Field Mapping (must match fsn_context.h)
OFFSET_MAP = {
    0x00: ("float", "camera_x"),
    0x04: ("float", "camera_y"),
    0x08: ("float", "camera_z"),
    0x0c: ("short", "rotation_z"),
    0x0e: ("short", "rotation_x"),
    0x10: ("short", "fov"),
    0x14: ("float", "sin_z"),
    0x18: ("float", "cos_z"),
    0x1c: ("float", "tan_z"),
    0x20: ("float", "sin_x"),
    0x24: ("float", "cos_x"),
    0x28: ("float", "tan_x"),
    0x34: ("float", "scale_factor"),
    0x3c: ("int", "zoom_mode"),
    0xc4c: ("int", "render_time_usec"),
    0xc53: ("char", "special_mode_flag"),
}

def get_node_text(source: bytes, node: Node) -> str:
    return source[node.start_byte:node.end_byte].decode('utf-8')

def find_replacements_in_function(source: bytes, func_body_node: Node):
    """
    Scans a function body for curcontext access patterns.
    Returns a list of (start_byte, end_byte, replacement_text).
    """
    replacements = []
    
    # Query for pointer arithmetic: *(type *)(curcontext + OFFSET)
    # This complex pattern matching is done by manual AST traversal for precision
    
    def walk(node: Node):
        # Pattern 1: Pointer Access
        # (pointer_expression argument: (cast_expression type: (...) value: (parenthesized_expression (binary_expression ...))))
        if node.type == 'pointer_expression':
            arg = node.child_by_field_name('argument')
            if arg and arg.type == 'cast_expression':
                val = arg.child_by_field_name('value')
                # Unwrap parens
                while val and val.type == 'parenthesized_expression':
                    val = val.child(1) # ( expr ) -> expr is child 1
                
                if val and val.type == 'binary_expression':
                    left = val.child_by_field_name('left')
                    right = val.child_by_field_name('right')
                    op = val.child_by_field_name('operator')
                    
                    if left and right and op and get_node_text(source, op) == '+':
                        if get_node_text(source, left) == 'curcontext':
                            # Found: curcontext + ...
                            offset_node = right
                            offset_text = get_node_text(source, offset_node)
                            
                            try:
                                offset = int(offset_text, 0)
                                if offset in OFFSET_MAP:
                                    _, field = OFFSET_MAP[offset]
                                    # Verify cast type (optional, but good for safety)
                                    # For now, we trust the offset map map overrides
                                    replacements.append((node.start_byte, node.end_byte, f"ctx->{field}"))
                                    return # Don't recurse into this node
                            except ValueError:
                                pass

        # Pattern 2: Array Access curcontext[OFFSET]
        if node.type == 'subscript_expression':
            arg = node.child_by_field_name('argument')
            idx = node.child_by_field_name('index')
            
            if arg and idx and get_node_text(source, arg) == 'curcontext':
                offset_text = get_node_text(source, idx)
                try:
                    offset = int(offset_text, 0)
                    if offset in OFFSET_MAP:
                        _, field = OFFSET_MAP[offset]
                        replacements.append((node.start_byte, node.end_byte, f"ctx->{field}"))
                        return
                except ValueError:
                    pass
                    
        # Pattern 3: *(type *)curcontext (Offset 0)
        if node.type == 'pointer_expression':
            arg = node.child_by_field_name('argument')
            if arg and arg.type == 'cast_expression':
                val = arg.child_by_field_name('value')
                if val and get_node_text(source, val) == 'curcontext':
                    # Offset 0
                    if 0 in OFFSET_MAP:
                         _, field = OFFSET_MAP[0]
                         replacements.append((node.start_byte, node.end_byte, f"ctx->{field}"))
                         return

        for child in node.children:
            walk(child)

    walk(func_body_node)
    return replacements

def process_file(filepath: str):
    print(f"Scanning {filepath}...")
    with open(filepath, 'rb') as f:
        source = f.read()
    
    tree = parser.parse(source)
    root = tree.root_node
    
    all_edits = []
    functions_needing_ctx = []
    
    # Find all function definitions
    cursor = tree.walk()
    
    def find_funcs(node):
        if node.type == 'function_definition':
            body = node.child_by_field_name('body')
            if body:
                reps = find_replacements_in_function(source, body)
                if reps:
                    all_edits.extend(reps)
                    # Mark this function as needing the ctx declaration
                    # Insertion point is after the opening brace of body
                    # body is compound_statement -> { ... }
                    # child(0) is '{'
                    functions_needing_ctx.append(body.child(0).end_byte)
        
        for child in node.children:
            find_funcs(child)
            
    find_funcs(root)
    
    if not all_edits:
        return

    print(f"  Found {len(all_edits)} replacements in {len(functions_needing_ctx)} functions.")
    
    # Sort edits reversed by position to keep offsets valid
    # Combine replacements and injections
    
    # 1. Convert replacements to objects
    final_edits = []
    for start, end, text in all_edits:
        final_edits.append({
            'start': start,
            'end': end,
            'text': text,
            'type': 'replace'
        })
        
    # 2. Add context injections
    decl_text = "\n    FsnContext *ctx = (FsnContext *)curcontext;"
    for pos in functions_needing_ctx:
        final_edits.append({
            'start': pos,
            'end': pos,
            'text': decl_text,
            'type': 'inject'
        })

    # 3. Check if header needs to be included
    source_str = source.decode('utf-8')
    if '#include "fsn_context.h"' not in source_str:
        # Find insertion point (after last include)
        last_include_end = 0
        
        # Simple scan for includes
        cursor = tree.walk()
        # A better heuristic: find the last preproc_include node
        for node in root.children:
            if node.type == 'preproc_include':
                last_include_end = node.end_byte
        
        final_edits.append({
            'start': last_include_end,
            'end': last_include_end,
            'text': '\n#include "fsn_context.h"',
            'type': 'inject'
        })

    # Sort by start position (descending)
    final_edits.sort(key=lambda x: x['start'], reverse=True)
    
    # Apply edits
    new_source = source
    
    for edit in final_edits:
        start = edit['start']
        end = edit['end']
        text = edit['text'].encode('utf-8')
        
        # Validate we aren't overlapping
        # (Since we sort by start desc, and replacements shouldn't overlap, this is generally safe)
        
        before = new_source[:start]
        after = new_source[end:]
        new_source = before + text + after
        
    with open(filepath, 'wb') as f:
        f.write(new_source)
    print(f"  Wrote updated {filepath}")

def main():
    if len(sys.argv) > 1:
        files = [sys.argv[1]]
    else:
        files = sorted(list(Path("src").glob("*.c")))
    
    for f in files:
        if "fsn.c" in str(f) or "backup" in str(f) or "original" in str(f):
            continue
        process_file(str(f))

if __name__ == "__main__":
    main()