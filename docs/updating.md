# Taking an update from upstream

This fork carries the Android port on top of the upstream project. Upstream
publishes each release as a fresh single commit rather than as history, so
`git pull` has nothing to work with: the two repositories share no ancestor,
and git offers to merge them as if every file were new. That looks alarming
and is the reason this page exists.

Nothing has to be thrown away. An update is the difference between the
snapshot this fork started from and the new one, and it goes on top of the
work here like any other patch.

## Once

```sh
git remote add upstream https://github.com/PaulCombal/mw2-recompiled.git
```

## Each time

```sh
git fetch upstream

# The commit this fork started from. It is the root of this history:
#   git log --oneline | tail -1
BASE=45c3db3

# What actually changed. Read this before anything else -- an update is
# often a handful of lines, and knowing which files it touches tells you
# in advance whether it can collide with the port at all.
git diff --stat $BASE upstream/master

# Apply it. -3 does a three-way merge, so a file changed on both sides
# gets ordinary conflict markers rather than being overwritten.
git diff $BASE upstream/master | git apply -3

# Check the port is still whole.
git ls-files '*.kt' | wc -l          # 13
git ls-files 'runtime/android/*' | wc -l   # 8
git status --short
```

If `git apply -3` leaves conflicts, they are in the files both sides
touched; resolve them as usual and carry on. Then commit, and update `BASE`
in your head -- the next update is measured from the snapshot you just took,
so use the upstream commit you merged:

```sh
git commit -am "Take upstream <sha>"
```

Recording which upstream commit was merged in the message is what makes the
next update easy: it becomes the new `BASE`.

## What an update can and cannot disturb

The port keeps to places upstream rarely touches:

| Ours | What it is |
| --- | --- |
| `runtime/android/` | the whole platform layer, new files |
| `android/` | the app, new files |
| `cmake/android.cmake`, `.github/workflows/android.yml` | new files |
| `runtime/gpu/vulkan/loader.*`, `runtime/atomic_ref.h` | new files |

Shared with upstream, and so worth reading a conflict in carefully:
`CMakeLists.txt`, `build.sh`, `.gitignore`, `runtime/main.cpp`,
`runtime/platform.*`, `runtime/kernel/{input,sync,threads}.cpp`,
`runtime/apu/audio.cpp`, `runtime/install/install.*`,
`runtime/gpu/vulkan/{pipeline,presenter,texture_cache}.cpp`,
`third_party/ffmpeg-xenia/CMakeLists.txt`.

An upstream change to the renderer or the kernel is the kind that needs
attention; a change to the desktop release workflow, which is what the
first update turned out to be, cannot affect the phone at all.
