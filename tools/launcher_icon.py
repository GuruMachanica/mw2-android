#!/usr/bin/env python3
"""Make the launcher's icon: the campaign's icon on the left, the same in the
multiplayer's colours on the right.

    tools/launcher_icon.py <campaign icon>

The campaign icon is the 256-pixel one in the PC game's iw4sp.exe:
    7z x iw4sp.exe .rsrc/ICON/5.ico
Writes launcher/icon/launcher.ico (what Windows shows for the program) and
launcher/icon/launcher.bmp (what the window is given, on both systems).

The multiplayer's colours are a fit on the game's two 32-pixel Steam icons,
which are one picture in the two colours: red takes the green, green a mix of
the red and the green, blue is dimmed.
"""
import os, sys
from PIL import Image

MULTIPLAYER = (0, 1, 0, 0,  .62, .30, 0, 0,  0, 0, .70, 0)

if len(sys.argv) != 2:
    raise SystemExit(__doc__)
campaign = Image.open(sys.argv[1]).convert("RGBA")
if campaign.size != (256, 256):
    raise SystemExit(f"{sys.argv[1]}: {campaign.size[0]}x{campaign.size[1]}, the 256-pixel icon is wanted")
multiplayer = campaign.convert("RGB").convert("RGB", MULTIPLAYER).convert("RGBA")
multiplayer.putalpha(campaign.getchannel("A"))
icon = campaign.copy()
icon.paste(multiplayer.crop((128, 0, 256, 256)), (128, 0))

out = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "launcher", "icon")
icon.save(os.path.join(out, "launcher.ico"), sizes=[(16, 16), (24, 24), (32, 32), (48, 48), (64, 64), (128, 128), (256, 256)])
icon.save(os.path.join(out, "launcher.bmp"))
print("wrote launcher/icon/launcher.ico and launcher.bmp")
