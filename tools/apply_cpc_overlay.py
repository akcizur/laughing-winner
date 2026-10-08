#!/usr/bin/env python3
from pathlib import Path
import shutil
import sys

def main() -> int:
    if len(sys.argv) != 2:
        print("usage: apply_cpc_overlay.py /path/to/chromium", file=sys.stderr)
        return 2
    checkout = Path(sys.argv[1]).resolve()
    if not (checkout / "BUILD.gn").exists() or not (checkout / ".gn").exists():
        print(f"not a Chromium checkout: {checkout}", file=sys.stderr)
        return 2
    root = Path(__file__).resolve().parents[1]
    for item in root.iterdir():
        if item.name in {".git", "out", "tools"}:
            continue
        target = checkout / item.name
        if item.is_dir():
            shutil.copytree(item, target, dirs_exist_ok=True)
        else:
            shutil.copy2(item, target)
    print(f"Applied CPC overlay to {checkout}")
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
