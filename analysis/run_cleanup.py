#!/usr/bin/env python3
"""
run_cleanup.py - Orchestrate the full artifact cleanup pipeline

Applies all cleanup passes to the fsn_original.exploded.cleanup/ directory:
1. offset_to_struct.py - Replace raw offsets with struct member access
2. gp_cleanup.py - Annotate GP calls, replace data access with globals
3. baddata_analyze.py - Add pseudocode comments for halt_baddata (uses Claude)

Usage:
    python3 analysis/run_cleanup.py [--input-dir DIR] [--output-dir DIR]
    python3 analysis/run_cleanup.py --dry-run  # Preview what would be done
    python3 analysis/run_cleanup.py --skip-baddata  # Skip Claude analysis (faster)
    python3 analysis/run_cleanup.py --step offset  # Run only offset_to_struct
    python3 analysis/run_cleanup.py --step gp      # Run only gp_cleanup
    python3 analysis/run_cleanup.py --step baddata # Run only baddata_analyze

Output:
    fsn_original.exploded.v2/
    ├── *.c                    # Cleaned C files
    ├── CLEANUP_REPORT.md      # Summary statistics
    └── ERRORS.log             # Any failed files
"""

import sys
import os
import argparse
import asyncio
import tempfile
import shutil
from pathlib import Path
from datetime import datetime
from typing import Dict, List, Optional
from concurrent.futures import ProcessPoolExecutor, as_completed
import importlib.util

# Default paths
DEFAULT_INPUT_DIR = "fsn_original.exploded.cleanup"
DEFAULT_OUTPUT_DIR = "fsn_original.exploded.v2"
DEFAULT_DISASM_DIR = "fsn_original.disassembly"
GP_MAPPING_PATH = "fsn_original.exploded.cleanup/GP_MAPPING.md"

# Load sibling modules
SCRIPT_DIR = Path(__file__).parent


def load_module(name: str):
    """Dynamically load a sibling Python module."""
    path = SCRIPT_DIR / f"{name}.py"
    spec = importlib.util.spec_from_file_location(name, path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


class CleanupStats:
    """Track cleanup statistics."""

    def __init__(self):
        self.files_processed = 0
        self.offsets_replaced = 0
        self.gp_calls_annotated = 0
        self.gp_data_replaced = 0
        self.gp_unresolved = 0
        self.baddata_found = 0
        self.baddata_analyzed = 0
        self.errors: List[str] = []
        self.skipped_files: List[str] = []

    def merge(self, other: 'CleanupStats'):
        self.files_processed += other.files_processed
        self.offsets_replaced += other.offsets_replaced
        self.gp_calls_annotated += other.gp_calls_annotated
        self.gp_data_replaced += other.gp_data_replaced
        self.gp_unresolved += other.gp_unresolved
        self.baddata_found += other.baddata_found
        self.baddata_analyzed += other.baddata_analyzed
        self.errors.extend(other.errors)
        self.skipped_files.extend(other.skipped_files)


def run_offset_to_struct(input_file: str, output_file: str) -> Dict:
    """Run offset_to_struct.py on a single file."""
    try:
        offset_module = load_module('offset_to_struct')

        source, tree = offset_module.parse_file(input_file)
        expressions = offset_module.find_offset_expressions(tree, source)
        result = offset_module.transform_source(source, expressions)

        with open(output_file, 'w') as f:
            f.write(result)

        return {
            'success': True,
            'offsets_replaced': len([e for e in expressions
                                     if offset_module.get_offset_mapping(e[2]) and e[4] in offset_module.get_offset_mapping(e[2])])
        }
    except Exception as e:
        return {'success': False, 'error': str(e)}


def run_gp_cleanup(input_file: str, output_file: str, gp_mapping_path: str) -> Dict:
    """Run gp_cleanup.py on a single file."""
    try:
        gp_module = load_module('gp_cleanup')

        # Load GP mapping
        functions, data = gp_module.load_gp_mapping(gp_mapping_path)

        # Parse and process
        source, tree = gp_module.parse_file(input_file)
        call_exprs = gp_module.find_gp_call_expressions(tree, source)
        data_exprs = gp_module.find_gp_data_expressions(tree, source)

        result, stats = gp_module.transform_source(source, call_exprs, data_exprs, functions, data)

        with open(output_file, 'w') as f:
            f.write(result)

        return {
            'success': True,
            'calls_annotated': stats['calls_annotated'],
            'data_replaced': stats['data_replaced'],
            'unresolved': stats['unresolved']
        }
    except Exception as e:
        return {'success': False, 'error': str(e)}


def process_single_file(args: tuple) -> Dict:
    """Process a single file through offset and GP cleanup stages (for parallel execution)."""
    input_file, temp_dir, output_file, gp_mapping_path = args
    filename = Path(input_file).name
    stats = {
        'file': filename,
        'success': True,
        'offsets_replaced': 0,
        'gp_calls_annotated': 0,
        'gp_data_replaced': 0,
        'gp_unresolved': 0,
        'error': None
    }

    try:
        # Stage 1: offset_to_struct
        temp1 = os.path.join(temp_dir, f"stage1_{filename}")
        result1 = run_offset_to_struct(input_file, temp1)

        if not result1['success']:
            stats['success'] = False
            stats['error'] = f"offset_to_struct: {result1['error']}"
            # Copy original to output
            shutil.copy(input_file, output_file)
            return stats

        stats['offsets_replaced'] = result1.get('offsets_replaced', 0)

        # Stage 2: gp_cleanup
        result2 = run_gp_cleanup(temp1, output_file, gp_mapping_path)

        if not result2['success']:
            stats['success'] = False
            stats['error'] = f"gp_cleanup: {result2['error']}"
            # Keep stage1 output
            shutil.copy(temp1, output_file)
            return stats

        stats['gp_calls_annotated'] = result2.get('calls_annotated', 0)
        stats['gp_data_replaced'] = result2.get('data_replaced', 0)
        stats['gp_unresolved'] = result2.get('unresolved', 0)

        # Clean up temp file
        os.remove(temp1)

    except Exception as e:
        stats['success'] = False
        stats['error'] = str(e)
        # Try to copy original
        try:
            shutil.copy(input_file, output_file)
        except:
            pass

    return stats


async def run_baddata_stage(output_dir: str, disasm_dir: str, max_concurrent: int,
                            dry_run: bool) -> Dict:
    """Run baddata analysis on all files in output_dir (in-place update)."""
    baddata_module = load_module('baddata_analyze')

    # Process all files
    results = await baddata_module.process_batch(
        output_dir, output_dir,  # Same dir for in-place update
        disasm_dir, max_concurrent, dry_run
    )

    # Aggregate stats
    total_found = sum(r['baddata_found'] for r in results)
    total_analyzed = sum(r['baddata_analyzed'] for r in results)
    errors = []
    for r in results:
        errors.extend(r['errors'])

    return {
        'baddata_found': total_found,
        'baddata_analyzed': total_analyzed,
        'errors': errors
    }


def generate_report(stats: CleanupStats, output_dir: str, duration_secs: float):
    """Generate CLEANUP_REPORT.md."""
    report_path = os.path.join(output_dir, "CLEANUP_REPORT.md")

    with open(report_path, 'w') as f:
        f.write("# FSN Cleanup Report\n\n")
        f.write(f"Generated: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}\n")
        f.write(f"Duration: {duration_secs:.1f} seconds\n\n")

        f.write("## Summary\n\n")
        f.write(f"| Metric | Count |\n")
        f.write(f"|--------|-------|\n")
        f.write(f"| Files processed | {stats.files_processed} |\n")
        f.write(f"| Struct offsets replaced | {stats.offsets_replaced} |\n")
        f.write(f"| GP calls annotated | {stats.gp_calls_annotated} |\n")
        f.write(f"| GP data replaced | {stats.gp_data_replaced} |\n")
        f.write(f"| GP unresolved | {stats.gp_unresolved} |\n")
        f.write(f"| halt_baddata found | {stats.baddata_found} |\n")
        f.write(f"| halt_baddata analyzed | {stats.baddata_analyzed} |\n")
        f.write(f"| Errors | {len(stats.errors)} |\n")
        f.write(f"| Skipped files | {len(stats.skipped_files)} |\n\n")

        if stats.errors:
            f.write("## Errors\n\n")
            for err in stats.errors[:50]:  # Limit to first 50
                f.write(f"- {err}\n")
            if len(stats.errors) > 50:
                f.write(f"\n... and {len(stats.errors) - 50} more errors\n")
            f.write("\n")

        if stats.skipped_files:
            f.write("## Skipped Files\n\n")
            for skip in stats.skipped_files[:20]:
                f.write(f"- {skip}\n")
            if len(stats.skipped_files) > 20:
                f.write(f"\n... and {len(stats.skipped_files) - 20} more\n")

    print(f"Report written to: {report_path}", file=sys.stderr)


def write_errors_log(stats: CleanupStats, output_dir: str):
    """Write ERRORS.log if there are errors."""
    if not stats.errors:
        return

    log_path = os.path.join(output_dir, "ERRORS.log")
    with open(log_path, 'w') as f:
        f.write(f"# Cleanup Errors - {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}\n\n")
        for err in stats.errors:
            f.write(f"{err}\n")

    print(f"Errors log written to: {log_path}", file=sys.stderr)


def main():
    argp = argparse.ArgumentParser(
        description='Orchestrate the full artifact cleanup pipeline'
    )
    argp.add_argument('--input-dir', '-i', default=DEFAULT_INPUT_DIR,
                      help=f'Input directory (default: {DEFAULT_INPUT_DIR})')
    argp.add_argument('--output-dir', '-o', default=DEFAULT_OUTPUT_DIR,
                      help=f'Output directory (default: {DEFAULT_OUTPUT_DIR})')
    argp.add_argument('--disasm-dir', default=DEFAULT_DISASM_DIR,
                      help=f'Disassembly directory (default: {DEFAULT_DISASM_DIR})')
    argp.add_argument('--gp-mapping', default=GP_MAPPING_PATH,
                      help=f'GP mapping file (default: {GP_MAPPING_PATH})')
    argp.add_argument('--jobs', '-j', type=int, default=os.cpu_count(),
                      help='Parallel jobs for stages 1-2 (default: CPU count)')
    argp.add_argument('--claude-jobs', type=int, default=40,
                      help='Concurrent Claude invocations for stage 3 (default: 40)')
    argp.add_argument('--skip-baddata', action='store_true',
                      help='Skip baddata analysis (faster, no Claude)')
    argp.add_argument('--dry-run', action='store_true',
                      help='Preview what would be done')
    argp.add_argument('--step', choices=['offset', 'gp', 'baddata', 'all'], default='all',
                      help='Run only a specific step')

    args = argp.parse_args()

    # Validate paths
    if not os.path.isdir(args.input_dir):
        print(f"Error: Input directory not found: {args.input_dir}", file=sys.stderr)
        return 1

    if not os.path.exists(args.gp_mapping):
        print(f"Warning: GP mapping not found: {args.gp_mapping}", file=sys.stderr)

    # Create output directory
    output_path = Path(args.output_dir)
    output_path.mkdir(parents=True, exist_ok=True)

    # Find all C files
    input_path = Path(args.input_dir)
    c_files = sorted(input_path.glob('*.c'))
    print(f"Found {len(c_files)} C files in {args.input_dir}", file=sys.stderr)

    if args.dry_run:
        print("\n=== DRY RUN ===", file=sys.stderr)
        print(f"Would process {len(c_files)} files", file=sys.stderr)
        print(f"Output to: {args.output_dir}", file=sys.stderr)
        if args.step in ['offset', 'all']:
            print("  Step 1: offset_to_struct (struct member access)", file=sys.stderr)
        if args.step in ['gp', 'all']:
            print("  Step 2: gp_cleanup (GP artifact annotation)", file=sys.stderr)
        if args.step in ['baddata', 'all'] and not args.skip_baddata:
            print(f"  Step 3: baddata_analyze ({args.claude_jobs} concurrent Claude calls)", file=sys.stderr)
        return 0

    import time
    start_time = time.time()
    stats = CleanupStats()

    # Create temp directory for intermediate files
    with tempfile.TemporaryDirectory() as temp_dir:
        # === STAGES 1-2: offset_to_struct + gp_cleanup (parallel) ===
        if args.step in ['offset', 'gp', 'all']:
            print(f"\n=== Stages 1-2: Offset replacement + GP cleanup ===", file=sys.stderr)
            print(f"Using {args.jobs} parallel workers", file=sys.stderr)

            # Prepare work items
            work_items = []
            for c_file in c_files:
                out_file = output_path / c_file.name
                work_items.append((str(c_file), temp_dir, str(out_file), args.gp_mapping))

            # Process in parallel
            with ProcessPoolExecutor(max_workers=args.jobs) as executor:
                futures = {executor.submit(process_single_file, item): item[0]
                           for item in work_items}

                completed = 0
                for future in as_completed(futures):
                    result = future.result()
                    completed += 1

                    stats.files_processed += 1
                    stats.offsets_replaced += result.get('offsets_replaced', 0)
                    stats.gp_calls_annotated += result.get('gp_calls_annotated', 0)
                    stats.gp_data_replaced += result.get('gp_data_replaced', 0)
                    stats.gp_unresolved += result.get('gp_unresolved', 0)

                    if not result['success']:
                        stats.errors.append(f"{result['file']}: {result['error']}")

                    if completed % 50 == 0 or completed == len(work_items):
                        print(f"  Progress: {completed}/{len(work_items)} files",
                              file=sys.stderr)

            print(f"  Completed: {stats.offsets_replaced} offsets, "
                  f"{stats.gp_calls_annotated} GP calls, "
                  f"{stats.gp_data_replaced} GP data", file=sys.stderr)

        # === STAGE 3: baddata_analyze (async with semaphore) ===
        if args.step in ['baddata', 'all'] and not args.skip_baddata:
            print(f"\n=== Stage 3: Baddata analysis ===", file=sys.stderr)
            print(f"Using {args.claude_jobs} concurrent Claude invocations", file=sys.stderr)

            baddata_result = asyncio.run(run_baddata_stage(
                args.output_dir, args.disasm_dir, args.claude_jobs, False
            ))

            stats.baddata_found = baddata_result['baddata_found']
            stats.baddata_analyzed = baddata_result['baddata_analyzed']
            stats.errors.extend(baddata_result['errors'])

            print(f"  Found: {stats.baddata_found}, Analyzed: {stats.baddata_analyzed}",
                  file=sys.stderr)

    # Calculate duration
    duration = time.time() - start_time

    # Generate reports
    generate_report(stats, args.output_dir, duration)
    write_errors_log(stats, args.output_dir)

    # Print summary
    print(f"\n=== Complete ===", file=sys.stderr)
    print(f"Duration: {duration:.1f}s", file=sys.stderr)
    print(f"Output: {args.output_dir}/", file=sys.stderr)

    return 0 if not stats.errors else 1


if __name__ == '__main__':
    sys.exit(main())
