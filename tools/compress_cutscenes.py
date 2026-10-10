import os
import sys
import time
import ctypes
import shutil
import subprocess

user32 = ctypes.windll.user32
EnumWindowsProc = ctypes.WINFUNCTYPE(ctypes.c_bool, ctypes.c_void_p, ctypes.c_void_p)

RAD_EXE = os.path.abspath(r"tools\rad\bin\radvideo64.exe")
GAME_DIR = os.path.abspath(r"mw2\game")
BACKUP_DIR = os.path.abspath(r"mw2\game_cutscenes_backup")
TEMP_OUT = os.path.abspath(r"tools\rad\temp_out.bik")

TARGET_WIDTH = 854
TARGET_HEIGHT = 480
TARGET_DATARATE = 200000  # 200 KB/sec (~1.6 Mbps)

os.makedirs(BACKUP_DIR, exist_ok=True)

# List of heavy cutscenes to compress (> 2 MB)
files_to_compress = [
    f for f in sorted(os.listdir(GAME_DIR))
    if f.lower().endswith(".bik") and os.path.getsize(os.path.join(GAME_DIR, f)) > 2 * 1024 * 1024
]

print(f"Found {len(files_to_compress)} heavy cutscene(s) to compress to 480p.")
total_before = sum(os.path.getsize(os.path.join(GAME_DIR, f)) for f in files_to_compress)
print(f"Total initial size: {total_before / (1024*1024):.1f} MB")
print("=" * 60)

def close_done_window():
    found_any = False
    def enum_cb(hwnd, lparam):
        nonlocal found_any
        if user32.IsWindowVisible(hwnd):
            length = user32.GetWindowTextLengthW(hwnd)
            if length > 0:
                buff = ctypes.create_unicode_buffer(length + 1)
                user32.GetWindowTextW(hwnd, buff, length + 1)
                title = buff.value
                if "done" in title.lower() or "bink video compressor" in title.lower():
                    # Check if it is done
                    if "done" in title.lower():
                        user32.PostMessageW(hwnd, 0x0010, 0, 0)  # WM_CLOSE
                        found_any = True
        return True

    user32.EnumWindows(EnumWindowsProc(enum_cb), 0)
    return found_any

success_count = 0
total_after = 0

for idx, filename in enumerate(files_to_compress, 1):
    src_path = os.path.join(GAME_DIR, filename)
    backup_path = os.path.join(BACKUP_DIR, filename)
    size_before = os.path.getsize(src_path)

    # Backup original if not already backed up
    if not os.path.exists(backup_path):
        shutil.copy2(src_path, backup_path)

    if os.path.exists(TEMP_OUT):
        os.remove(TEMP_OUT)

    cmd = [
        RAD_EXE,
        "Bink",
        backup_path,
        TEMP_OUT,
        "/V100",
        f"/({TARGET_WIDTH}",
        f"/){TARGET_HEIGHT}",
        f"/D{TARGET_DATARATE}",
        "/O"
    ]

    print(f"[{idx}/{len(files_to_compress)}] Compressing {filename} ({size_before / (1024*1024):.1f} MB)...", end="", flush=True)

    proc = subprocess.Popen(cmd)

    # Wait for process and close preview when done
    max_wait_sec = 180
    start_time = time.time()
    while proc.poll() is None:
        time.sleep(0.4)
        close_done_window()
        if time.time() - start_time > max_wait_sec:
            proc.kill()
            print(" TIMEOUT!")
            break

    # Give extra moment for file flush
    time.sleep(0.5)

    is_valid_bink = False
    if proc.poll() == 0 and os.path.exists(TEMP_OUT) and os.path.getsize(TEMP_OUT) > 1000:
        try:
            with open(TEMP_OUT, "rb") as f:
                magic = f.read(3)
                if magic in (b"BIK", b"KB2"):
                    is_valid_bink = True
        except Exception:
            pass

    if is_valid_bink:
        size_after = os.path.getsize(TEMP_OUT)
        shutil.move(TEMP_OUT, src_path)
        reduction = (1 - (size_after / size_before)) * 100
        print(f" -> {size_after / (1024*1024):.1f} MB ({reduction:.1f}% reduction)")
        total_after += size_after
        success_count += 1
    else:
        if os.path.exists(TEMP_OUT):
            try:
                os.remove(TEMP_OUT)
            except Exception:
                pass
        print(" Failed, keeping original.")
        total_after += size_before

print("=" * 60)
print(f"Finished! Successfully compressed {success_count}/{len(files_to_compress)} cutscenes.")
print(f"Total size: {total_before / (1024*1024):.1f} MB -> {total_after / (1024*1024):.1f} MB (Saved {(total_before - total_after) / (1024*1024):.1f} MB)")
