#!/usr/bin/env python3
"""Fetch the disc's files from a link, for a build that has no disc beside it.

The executables and the disc image are not in this repository and never will
be. A build machine -- a CI runner, most of all -- has to be handed them
somehow, and a link to storage the owner of the copy controls is the usual
way. This resolves such a link, downloads what is behind it, works out what
it got, and puts it where build.sh looks for it.

    tools/fetch_asset.py --into mw2 <url> [<url> ...]
    tools/fetch_asset.py --into mw2 default_mp.xex=<url>

Understood links:

  Google Drive   any of the shapes the share button produces
                 (/file/d/<id>/view, /open?id=, /uc?id=). The confirmation
                 page Drive shows for anything large is answered
                 automatically. A private file needs the link to be set to
                 "anyone with the link".
  Hugging Face   a file page (/blob/) or a direct one (/resolve/), in a
                 model or a dataset repository. A private repository needs
                 HF_TOKEN in the environment.
  anything else  fetched as it stands, redirects followed. A token in
                 HTTP_AUTHORIZATION is sent as the Authorization header, for
                 storage that wants one.

What arrives is identified by its first bytes, not by its name:

  XEX2 ........ an executable. Named from the link unless the link says
                nothing, in which case an executable whose name mentions
                "mp" becomes default_mp.xex and anything else default.xex.
  XDVDFS ...... a disc image. Kept as it is; build.sh takes the two
                executables and the game data out of it (ISO=<path>).
  zip / 7z .... unpacked, and everything inside it looked at the same way.

Nothing here needs a library that is not in the standard one.
"""

import argparse
import hashlib
import html.parser
import http.cookiejar
import os
import re
import shutil
import subprocess
import sys
import tempfile
import time
import urllib.error
import urllib.parse
import urllib.request
import zipfile

SECTOR = 2048
XDVDFS_MAGIC = b"MICROSOFT*XBOX*MEDIA"
# The offsets a 360 image puts its volume descriptor at; the same list
# tools/xdvdfs.py walks.
XDVDFS_OFFSETS = (0x0, 0xFD90000, 0x2080000, 0x18300000, 0x18310000)

USER_AGENT = ("Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) "
              "Chrome/124.0 Safari/537.36")


# ---- saying what is happening ------------------------------------------------

def say(text):
    print(text, flush=True)


def size_text(count):
    if count is None:
        return "unknown size"
    for unit in ("B", "KB", "MB", "GB"):
        if count < 1024 or unit == "GB":
            return f"{count:.1f} {unit}" if unit != "B" else f"{int(count)} B"
        count /= 1024.0
    return f"{count:.1f} GB"


# ---- the links ---------------------------------------------------------------

class DriveConfirm(html.parser.HTMLParser):
    """Drive's "this file is too large to scan" page is a form. Fill it in."""

    def __init__(self):
        super().__init__()
        self.action = None
        self.fields = {}
        self._in_form = False

    def handle_starttag(self, tag, attrs):
        attributes = dict(attrs)
        if tag == "form":
            action = attributes.get("action")
            # The download form is the one that posts at the file host.
            if action and ("download" in action or "usercontent" in action):
                self._in_form = True
                self.action = action
        elif tag == "input" and self._in_form:
            name = attributes.get("name")
            if name:
                self.fields[name] = attributes.get("value", "")

    def handle_endtag(self, tag):
        if tag == "form":
            self._in_form = False


def drive_file_id(url):
    """The file id out of whichever shape of Drive link was pasted."""
    match = re.search(r"/file/d/([A-Za-z0-9_-]{10,})", url)
    if match:
        return match.group(1)
    match = re.search(r"/folders/([A-Za-z0-9_-]{10,})", url)
    if match:
        raise SystemExit(
            "That is a link to a Drive *folder*. Share each file instead, or "
            "put the files in one archive and share that."
        )
    query = urllib.parse.parse_qs(urllib.parse.urlparse(url).query)
    for key in ("id", "docid"):
        if key in query:
            return query[key][0]
    match = re.search(r"/d/([A-Za-z0-9_-]{10,})", url)
    return match.group(1) if match else None


def huggingface_direct(url):
    """A file page becomes the file itself; a file link is left alone."""
    parsed = urllib.parse.urlparse(url)
    if parsed.netloc not in ("huggingface.co", "hf.co", "www.huggingface.co"):
        return None
    path = parsed.path
    if "/resolve/" in path:
        direct = url
    elif "/blob/" in path:
        direct = urllib.parse.urlunparse(parsed._replace(path=path.replace("/blob/", "/resolve/", 1)))
    else:
        return None
    if "download=true" not in direct:
        direct += ("&" if "?" in direct else "?") + "download=true"
    return direct


def opener_with_cookies():
    jar = http.cookiejar.CookieJar()
    return urllib.request.build_opener(urllib.request.HTTPCookieProcessor(jar))


def headers_for(url):
    headers = {"User-Agent": USER_AGENT, "Accept": "*/*"}
    host = urllib.parse.urlparse(url).netloc
    token = os.environ.get("HF_TOKEN", "").strip()
    if token and host in ("huggingface.co", "hf.co", "www.huggingface.co"):
        headers["Authorization"] = f"Bearer {token}"
    other = os.environ.get("HTTP_AUTHORIZATION", "").strip()
    if other and "Authorization" not in headers:
        headers["Authorization"] = other
    return headers


def remote_name(response, url):
    disposition = response.headers.get("Content-Disposition", "")
    match = re.search(r"filename\*=UTF-8''([^;\r\n]+)", disposition)
    if match:
        return urllib.parse.unquote(match.group(1)).strip('"')
    match = re.search(r'filename="?([^";\r\n]+)"?', disposition)
    if match:
        return match.group(1)
    path = urllib.parse.urlparse(url).path
    name = os.path.basename(urllib.parse.unquote(path))
    return name or "download"


def open_url(url, opener, data=None):
    request = urllib.request.Request(url, data=data, headers=headers_for(url))
    return opener.open(request, timeout=120)


def open_download(url, opener):
    """Follow whatever the host does before it hands over the bytes."""
    file_id = None
    if "drive.google.com" in url or "drive.usercontent.google.com" in url:
        file_id = drive_file_id(url)
        if not file_id:
            raise SystemExit(f"No file id in this Drive link: {url}")
        url = (f"https://drive.usercontent.google.com/download"
               f"?id={file_id}&export=download&confirm=t")

    direct = huggingface_direct(url)
    if direct:
        url = direct

    response = open_url(url, opener)
    kind = response.headers.get("Content-Type", "")
    if "text/html" not in kind:
        return response, url

    # Drive answered with a page rather than a file: either the scan warning,
    # or a refusal worth reporting properly.
    page = response.read(200_000).decode("utf-8", "replace")
    response.close()
    form = DriveConfirm()
    form.feed(page)
    if form.action:
        query = urllib.parse.urlencode(form.fields)
        target = form.action + ("&" if "?" in form.action else "?") + query
        response = open_url(target, opener)
        if "text/html" not in response.headers.get("Content-Type", ""):
            return response, target
        response.close()

    if "quota" in page.lower() or "too many" in page.lower():
        raise SystemExit(
            "Google Drive is refusing this file for now: too many people have "
            "downloaded it today. Wait, or put the file somewhere else -- "
            "Hugging Face has no such limit."
        )
    if file_id:
        raise SystemExit(
            "Google Drive returned a web page instead of the file. The link is "
            "probably not shared: open it, Share, and set it to 'anyone with "
            "the link'."
        )
    raise SystemExit(f"{url} returned a web page, not a file.")


def download(url, into_directory, opener):
    """Fetch one link into a temporary file. Returns (path, remote name)."""
    last_error = None
    for attempt in range(1, 4):
        try:
            response, final = open_download(url, opener)
        except (urllib.error.URLError, urllib.error.HTTPError, TimeoutError, OSError) as error:
            last_error = error
            say(f"    attempt {attempt} failed ({error}); trying again")
            time.sleep(3 * attempt)
            continue

        name = remote_name(response, final)
        total = response.headers.get("Content-Length")
        total = int(total) if total and total.isdigit() else None
        say(f"    {name}, {size_text(total)}")

        handle, path = tempfile.mkstemp(dir=into_directory, prefix=".fetch-")
        done = 0
        shown = time.monotonic()
        try:
            with os.fdopen(handle, "wb") as out:
                while True:
                    chunk = response.read(1 << 20)
                    if not chunk:
                        break
                    out.write(chunk)
                    done += len(chunk)
                    now = time.monotonic()
                    if now - shown >= 5:
                        shown = now
                        if total:
                            say(f"      {size_text(done)} of {size_text(total)}"
                                f"  ({done * 100 // total}%)")
                        else:
                            say(f"      {size_text(done)}")
        except Exception as error:                      # noqa: BLE001 - reported below
            os.unlink(path)
            last_error = error
            say(f"    attempt {attempt} broke off ({error}); trying again")
            time.sleep(3 * attempt)
            continue
        finally:
            response.close()

        if total and done != total:
            os.unlink(path)
            last_error = RuntimeError(f"got {done} bytes of {total}")
            say(f"    attempt {attempt} was cut short; trying again")
            continue
        return path, name

    raise SystemExit(f"Could not fetch {url}: {last_error}")


# ---- what came back ------------------------------------------------------------

def first_bytes(path, count=32):
    with open(path, "rb") as handle:
        return handle.read(count)


def is_disc_image(path):
    try:
        with open(path, "rb") as handle:
            for offset in XDVDFS_OFFSETS:
                handle.seek(offset + 32 * SECTOR)
                if handle.read(20) == XDVDFS_MAGIC:
                    return True
    except OSError:
        pass
    return False


def sha256_of(path):
    digest = hashlib.sha256()
    with open(path, "rb") as handle:
        for block in iter(lambda: handle.read(1 << 20), b""):
            digest.update(block)
    return digest.hexdigest()


MP_IN_NAME = re.compile(r"(^|[^a-z])mp([^a-z]|$)|multiplayer")


def xex_original_name(path):
    """The name the executable was built under, out of its own header.

    A XEX2 carries the file name it was linked as (the ORIGINAL_PE_NAME
    optional header). That is what tells the disc's two executables apart
    when the names they arrive under do not -- a zip whose members are
    called 1.xex and 2.xex, say. Returns None when the header is not there
    or the file is not one.
    """
    try:
        with open(path, "rb") as handle:
            head = handle.read(1 << 20)
        if head[:4] != b"XEX2" or len(head) < 24:
            return None
        import struct
        count = struct.unpack_from(">I", head, 20)[0]
        if count > 512:
            return None
        for i in range(count):
            key, value = struct.unpack_from(">II", head, 24 + i * 8)
            if key != 0x000183FF:
                continue
            # Not an inline value: an offset to a length-prefixed string.
            if value + 8 > len(head):
                return None
            size = struct.unpack_from(">I", head, value)[0]
            if not 4 < size <= 256 or value + size > len(head):
                return None
            text = head[value + 4:value + size].split(b"\0")[0]
            return text.decode("latin-1").strip() or None
    except (OSError, struct.error, IndexError):
        return None
    return None


def executable_name(hint, path=None):
    """default.xex or default_mp.xex.

    The executable's own idea of its name comes first, because it is the
    only one that cannot be wrong; the name it arrived under is the fallback.
    """
    if path:
        built_as = xex_original_name(path)
        if built_as:
            stem = os.path.splitext(os.path.basename(built_as))[0].lower()
            if MP_IN_NAME.search(stem):
                return "default_mp.xex"
            if stem:
                return "default.xex"
    return "default_mp.xex" if MP_IN_NAME.search(os.path.basename(hint).lower()) else "default.xex"


def place(path, name, into_directory, placed):
    target = os.path.join(into_directory, name)
    if os.path.exists(target):
        os.unlink(target)
    shutil.move(path, target)
    os.chmod(target, 0o644)
    digest = sha256_of(target)
    say(f"    -> {target}  ({size_text(os.path.getsize(target))}, sha256 {digest})")
    placed[name] = digest
    return target


def unpack_archive(path, into_directory, wanted_name, placed):
    """A zip or a 7z: everything inside it is looked at in turn."""
    head = first_bytes(path, 6)
    unpacked = tempfile.mkdtemp(dir=into_directory, prefix=".unpack-")
    try:
        if head[:4] == b"PK\x03\x04":
            say("    a zip archive; unpacking")
            with zipfile.ZipFile(path) as archive:
                for member in archive.infolist():
                    if member.is_dir():
                        continue
                    # No member may escape the folder it is unpacked into.
                    destination = os.path.realpath(os.path.join(unpacked, member.filename))
                    if not destination.startswith(os.path.realpath(unpacked) + os.sep):
                        continue
                    os.makedirs(os.path.dirname(destination), exist_ok=True)
                    with archive.open(member) as source, open(destination, "wb") as out:
                        shutil.copyfileobj(source, out, 1 << 20)
        elif head == b"7z\xbc\xaf\x27\x1c":
            if not shutil.which("7z"):
                raise SystemExit("That is a 7z archive and 7z is not installed here.")
            say("    a 7z archive; unpacking")
            subprocess.run(["7z", "x", "-y", f"-o{unpacked}", path],
                           check=True, stdout=subprocess.DEVNULL)
        else:
            return False

        os.unlink(path)

        # Everything in the archive that this build has a use for.
        candidates = []
        for root, _, names in os.walk(unpacked):
            for name in sorted(names):
                inside = os.path.join(root, name)
                head = first_bytes(inside, 6)
                if head[:4] == b"XEX2" or is_disc_image(inside) or \
                        head[:4] == b"PK\x03\x04" or head == b"7z\xbc\xaf\x27\x1c":
                    candidates.append((inside, name))

        if not candidates:
            say("    nothing in the archive was an executable or a disc image")
            return True

        # A name asked for on the command line belongs to the file, not to
        # the archive it travelled in: it only applies when there is one
        # file to apply it to. An archive holding both executables names
        # them itself -- from what each was built as, if their file names
        # do not say (executable_name).
        single = wanted_name if len(candidates) == 1 else None
        say(f"    {len(candidates)} file(s) inside")
        found = 0
        for inside, name in candidates:
            if identify_and_place(inside, name, into_directory, placed, single):
                found += 1
        return True
    finally:
        shutil.rmtree(unpacked, ignore_errors=True)


def identify_and_place(path, hint, into_directory, placed, wanted_name=None):
    """True when the file was something this build wants."""
    head = first_bytes(path, 6)

    if head[:4] == b"XEX2":
        name = wanted_name or executable_name(hint, path)
        built_as = xex_original_name(path)
        say(f"    an Xbox 360 executable ({hint}"
            f"{', built as ' + built_as if built_as else ''})")
        if name in placed:
            # Two of them wanting the same slot: the second takes the other
            # one, if it is free. That happens when neither the file names
            # nor the headers distinguish them, which for this disc's two
            # executables they do -- so it is worth saying out loud.
            other = "default_mp.xex" if name == "default.xex" else "default.xex"
            if other in placed:
                raise SystemExit(
                    f"    Both names are already taken and {hint} is a third "
                    f"executable. Send just the two: default.xex and default_mp.xex."
                )
            say(f"    !! {name} is taken already, and nothing in this file says "
                f"which it is; keeping it as {other}.")
            say("       If that is the wrong way round, name the two files "
                "default.xex and default_mp.xex inside the archive.")
            name = other
        place(path, name, into_directory, placed)
        return True

    if is_disc_image(path):
        name = wanted_name or "game.iso"
        if not name.lower().endswith((".iso", ".img", ".bin")):
            name = "game.iso"
        say(f"    an Xbox 360 disc image ({hint})")
        place(path, name, into_directory, placed)
        return True

    if head[:4] == b"PK\x03\x04" or head == b"7z\xbc\xaf\x27\x1c":
        return unpack_archive(path, into_directory, wanted_name, placed)

    return False


# ---- the whole run ---------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(
        description="Fetch default.xex, default_mp.xex or the disc image from a link.")
    parser.add_argument("links", nargs="*", metavar="[NAME=]URL",
                        help="a link, optionally with the name to save it as")
    parser.add_argument("--into", default="mw2", help="where to put what arrives (default: mw2)")
    parser.add_argument("--require", default="",
                        help="comma-separated names that must be there afterwards, "
                             "e.g. default.xex,default_mp.xex")
    parser.add_argument("--github-output", action="store_true",
                        help="write the hashes to $GITHUB_OUTPUT as well")
    arguments = parser.parse_args()

    links = []
    for entry in arguments.links:
        for piece in re.split(r"[\s,]+", entry.strip()):
            if piece:
                links.append(piece)
    if not links:
        say("Nothing to fetch.")
        return 0

    os.makedirs(arguments.into, exist_ok=True)
    opener = opener_with_cookies()
    placed = {}

    for entry in links:
        wanted = None
        if re.match(r"^[A-Za-z0-9_.\-]+\.(xex|iso|img|bin|zip|7z)=", entry):
            wanted, entry = entry.split("=", 1)
        # A name given as default.xex= still names the executable, not the zip
        # it might arrive in; an archive ignores it and keeps its own names.
        if wanted and wanted.lower().endswith((".zip", ".7z")):
            wanted = None

        if os.path.exists(entry):
            say(f"  {entry} (a local file)")
            copy = os.path.join(arguments.into, ".fetch-local")
            shutil.copyfile(entry, copy)
            path, name = copy, os.path.basename(entry)
        else:
            say(f"  {entry.split('?')[0]}")
            path, name = download(entry, arguments.into, opener)

        if not identify_and_place(path, wanted or name, arguments.into, placed, wanted):
            os.unlink(path)
            raise SystemExit(
                f"    {name} is not an Xbox 360 executable, a disc image or an "
                f"archive holding one. It starts with {first_bytes(path, 4)!r}."
            )

    required = [name for name in re.split(r"[\s,]+", arguments.require) if name]
    missing = [name for name in required
               if not os.path.exists(os.path.join(arguments.into, name))]
    if missing:
        have = sorted(os.listdir(arguments.into))
        raise SystemExit(
            f"\nStill missing: {', '.join(missing)}.\n"
            f"What arrived: {', '.join(have) or 'nothing'}.\n"
            "Both executables are needed: the installer checks a player's copy "
            "against each, so a build knows both hashes."
        )

    say("")
    for name in sorted(placed):
        say(f"  {name}  {placed[name]}")

    # One line that stands for everything fetched, so a build can key a cache
    # on "the same files as last time" without publishing their hashes.
    together = hashlib.sha256()
    for name in sorted(placed):
        together.update(f"{name}:{placed[name]}\n".encode())
    assets_key = together.hexdigest()[:32]
    say(f"  assets key {assets_key}")

    output = os.environ.get("GITHUB_OUTPUT")
    if arguments.github_output and output:
        with open(output, "a", encoding="utf-8") as handle:
            for name, digest in placed.items():
                key = name.replace(".", "_").replace("-", "_")
                handle.write(f"sha256_{key}={digest}\n")
            handle.write(f"assets_key={assets_key}\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
