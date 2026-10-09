// xexpatch <base.xex> <patch.xexp> <out.xex>: XenonRecomp's patcher from the command line.
#include <xex_patcher.h>
#include <cstdio>
int main(int argc, char** argv)
{
    if (argc != 4) { std::fprintf(stderr, "usage: xexpatch base.xex patch.xexp out.xex\n"); return 2; }
    const auto result = XexPatcher::apply(argv[1], argv[2], argv[3]);
    std::printf("%s: result %d\n", argv[3], int(result));
    return result == XexPatcher::Result::Success ? 0 : 1;
}
