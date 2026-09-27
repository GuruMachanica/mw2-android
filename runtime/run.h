#pragma once
// The run itself, apart from how it was started.
//
// A desktop build's main() calls this and nothing else. Android has no main:
// the app starts a thread of its own with a stack deep enough for the
// recompiled code and calls it there (runtime/android/jni.cpp), because the
// thread Android would have given it is the one drawing the user interface.
namespace mw2
{
    // argv is what the desktop build takes: nothing, `--install <image>`, or
    // the title's image and the game folder.
    int Run(int argc, char** argv);
}
