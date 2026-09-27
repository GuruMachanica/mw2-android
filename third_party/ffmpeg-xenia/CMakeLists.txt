# The XMA2 decoder. Stock FFmpeg only decodes XMA at packet granularity; the
# console's hardware, and so the title's XAudio2, works frame by frame with bit
# offsets. Xenia carries an FFmpeg branch with an "xmaframes" codec for exactly
# that, and this builds the same subset of it Xenia does (its premake lists),
# with Xenia's hand-written config.h in place of FFmpeg's configure step.
#
# The sources are fetched at configure time, like SDL3; nothing here is vendored
# except the handful of generated headers and codec lists, which are Xenia's.
enable_language(C)
include(FetchContent)
# Extracted files take the time of extraction, so a new archive rebuilds what it changed.
if(POLICY CMP0135)
    cmake_policy(SET CMP0135 NEW)
endif()
FetchContent_Declare(ffmpeg_xma
    URL https://github.com/has207/FFmpeg/archive/d980192e175e6ff95bcd287af77e16fcb6597974.tar.gz
    URL_HASH SHA256=9237b42a9d27579127ffdba6e952b8a9c0826495d0bcdbfa19e4a71e39fe8974)
FetchContent_MakeAvailable(ffmpeg_xma)
set(FFMPEG_SRC "${ffmpeg_xma_SOURCE_DIR}")

set(FFMPEG_SOURCES
    ${FFMPEG_SRC}/libavcodec/aactab.c
    ${FFMPEG_SRC}/libavcodec/ac3_parser.c
    ${FFMPEG_SRC}/libavcodec/adts_parser.c
    ${FFMPEG_SRC}/libavcodec/allcodecs.c
    ${FFMPEG_SRC}/libavcodec/avcodec.c
    ${FFMPEG_SRC}/libavcodec/avdct.c
    ${FFMPEG_SRC}/libavcodec/bitstream.c
    ${FFMPEG_SRC}/libavcodec/bitstream_filters.c
    ${FFMPEG_SRC}/libavcodec/bsf.c
    ${FFMPEG_SRC}/libavcodec/bsf/null.c
    ${FFMPEG_SRC}/libavcodec/codec_desc.c
    ${FFMPEG_SRC}/libavcodec/codec_par.c
    ${FFMPEG_SRC}/libavcodec/d3d11va.c
    ${FFMPEG_SRC}/libavcodec/dct32_fixed.c
    ${FFMPEG_SRC}/libavcodec/dct32_float.c
    ${FFMPEG_SRC}/libavcodec/decode.c
    ${FFMPEG_SRC}/libavcodec/dirac.c
    ${FFMPEG_SRC}/libavcodec/dv_profile.c
    ${FFMPEG_SRC}/libavcodec/encode.c
    ${FFMPEG_SRC}/libavcodec/exif.c
    ${FFMPEG_SRC}/libavcodec/faandct.c
    ${FFMPEG_SRC}/libavcodec/faanidct.c
    ${FFMPEG_SRC}/libavcodec/fdctdsp.c
    ${FFMPEG_SRC}/libavcodec/get_buffer.c
    ${FFMPEG_SRC}/libavcodec/idctdsp.c
    ${FFMPEG_SRC}/libavcodec/imgconvert.c
    ${FFMPEG_SRC}/libavcodec/jfdctfst.c
    ${FFMPEG_SRC}/libavcodec/jfdctint.c
    ${FFMPEG_SRC}/libavcodec/jni.c
    ${FFMPEG_SRC}/libavcodec/jrevdct.c
    ${FFMPEG_SRC}/libavcodec/mathtables.c
    ${FFMPEG_SRC}/libavcodec/mediacodec.c
    ${FFMPEG_SRC}/libavcodec/mpeg12framerate.c
    ${FFMPEG_SRC}/libavcodec/mpegaudio.c
    ${FFMPEG_SRC}/libavcodec/mpegaudiodata.c
    ${FFMPEG_SRC}/libavcodec/mpegaudiodec_common.c
    ${FFMPEG_SRC}/libavcodec/mpegaudiodec_fixed.c
    ${FFMPEG_SRC}/libavcodec/mpegaudiodec_float.c
    ${FFMPEG_SRC}/libavcodec/mpegaudiodecheader.c
    ${FFMPEG_SRC}/libavcodec/mpegaudiodsp.c
    ${FFMPEG_SRC}/libavcodec/mpegaudiodsp_data.c
    ${FFMPEG_SRC}/libavcodec/mpegaudiodsp_fixed.c
    ${FFMPEG_SRC}/libavcodec/mpegaudiodsp_float.c
    ${FFMPEG_SRC}/libavcodec/mpegaudio_parser.c
    ${FFMPEG_SRC}/libavcodec/mpegaudiotabs.c
    ${FFMPEG_SRC}/libavcodec/options.c
    ${FFMPEG_SRC}/libavcodec/packet.c
    ${FFMPEG_SRC}/libavcodec/parser.c
    ${FFMPEG_SRC}/libavcodec/parsers.c
    ${FFMPEG_SRC}/libavcodec/profiles.c
    ${FFMPEG_SRC}/libavcodec/pthread.c
    ${FFMPEG_SRC}/libavcodec/pthread_frame.c
    ${FFMPEG_SRC}/libavcodec/pthread_slice.c
    ${FFMPEG_SRC}/libavcodec/qsv_api.c
    ${FFMPEG_SRC}/libavcodec/raw.c
    ${FFMPEG_SRC}/libavcodec/simple_idct.c
    ${FFMPEG_SRC}/libavcodec/sinewin.c
    ${FFMPEG_SRC}/libavcodec/threadprogress.c
    ${FFMPEG_SRC}/libavcodec/tiff_common.c
    ${FFMPEG_SRC}/libavcodec/utils.c
    ${FFMPEG_SRC}/libavcodec/vlc.c
    ${FFMPEG_SRC}/libavcodec/vorbis_parser.c
    ${FFMPEG_SRC}/libavcodec/wma.c
    ${FFMPEG_SRC}/libavcodec/wma_common.c
    ${FFMPEG_SRC}/libavcodec/wmadec.c
    ${FFMPEG_SRC}/libavcodec/wma_freqs.c
    ${FFMPEG_SRC}/libavcodec/wmaprodec.c
    ${FFMPEG_SRC}/libavcodec/x86/constants.c
    ${FFMPEG_SRC}/libavcodec/x86/fdct.c
    ${FFMPEG_SRC}/libavcodec/x86/fdctdsp_init.c
    ${FFMPEG_SRC}/libavcodec/x86/idctdsp_init.c
    ${FFMPEG_SRC}/libavcodec/x86/mpegaudiodsp.c
    ${FFMPEG_SRC}/libavcodec/xiph.c
    ${FFMPEG_SRC}/libavutil/adler32.c
    ${FFMPEG_SRC}/libavutil/aes.c
    ${FFMPEG_SRC}/libavutil/aes_ctr.c
    ${FFMPEG_SRC}/libavutil/audio_fifo.c
    ${FFMPEG_SRC}/libavutil/avsscanf.c
    ${FFMPEG_SRC}/libavutil/avstring.c
    ${FFMPEG_SRC}/libavutil/base64.c
    ${FFMPEG_SRC}/libavutil/blowfish.c
    ${FFMPEG_SRC}/libavutil/bprint.c
    ${FFMPEG_SRC}/libavutil/buffer.c
    ${FFMPEG_SRC}/libavutil/camellia.c
    ${FFMPEG_SRC}/libavutil/cast5.c
    ${FFMPEG_SRC}/libavutil/channel_layout.c
    ${FFMPEG_SRC}/libavutil/container_fifo.c
    ${FFMPEG_SRC}/libavutil/cpu.c
    ${FFMPEG_SRC}/libavutil/crc.c
    ${FFMPEG_SRC}/libavutil/csp.c
    ${FFMPEG_SRC}/libavutil/des.c
    ${FFMPEG_SRC}/libavutil/dict.c
    ${FFMPEG_SRC}/libavutil/display.c
    ${FFMPEG_SRC}/libavutil/dovi_meta.c
    ${FFMPEG_SRC}/libavutil/downmix_info.c
    ${FFMPEG_SRC}/libavutil/encryption_info.c
    ${FFMPEG_SRC}/libavutil/error.c
    ${FFMPEG_SRC}/libavutil/eval.c
    ${FFMPEG_SRC}/libavutil/fifo.c
    ${FFMPEG_SRC}/libavutil/file.c
    ${FFMPEG_SRC}/libavutil/file_open.c
    ${FFMPEG_SRC}/libavutil/film_grain_params.c
    ${FFMPEG_SRC}/libavutil/fixed_dsp.c
    ${FFMPEG_SRC}/libavutil/float_dsp.c
    ${FFMPEG_SRC}/libavutil/float_scalarproduct.c
    ${FFMPEG_SRC}/libavutil/frame.c
    ${FFMPEG_SRC}/libavutil/hash.c
    ${FFMPEG_SRC}/libavutil/hdr_dynamic_metadata.c
    ${FFMPEG_SRC}/libavutil/hmac.c
    ${FFMPEG_SRC}/libavutil/hwcontext.c
    ${FFMPEG_SRC}/libavutil/iamf.c
    ${FFMPEG_SRC}/libavutil/imgutils.c
    ${FFMPEG_SRC}/libavutil/integer.c
    ${FFMPEG_SRC}/libavutil/intmath.c
    ${FFMPEG_SRC}/libavutil/lfg.c
    ${FFMPEG_SRC}/libavutil/lls.c
    ${FFMPEG_SRC}/libavutil/log2_tab.c
    ${FFMPEG_SRC}/libavutil/log.c
    ${FFMPEG_SRC}/libavutil/mastering_display_metadata.c
    ${FFMPEG_SRC}/libavutil/mathematics.c
    ${FFMPEG_SRC}/libavutil/md5.c
    ${FFMPEG_SRC}/libavutil/mem.c
    ${FFMPEG_SRC}/libavutil/murmur3.c
    ${FFMPEG_SRC}/libavutil/opt.c
    ${FFMPEG_SRC}/libavutil/parseutils.c
    ${FFMPEG_SRC}/libavutil/pixdesc.c
    ${FFMPEG_SRC}/libavutil/pixelutils.c
    ${FFMPEG_SRC}/libavutil/random_seed.c
    ${FFMPEG_SRC}/libavutil/rational.c
    ${FFMPEG_SRC}/libavutil/rc4.c
    ${FFMPEG_SRC}/libavutil/refstruct.c
    ${FFMPEG_SRC}/libavutil/reverse.c
    ${FFMPEG_SRC}/libavutil/ripemd.c
    ${FFMPEG_SRC}/libavutil/samplefmt.c
    ${FFMPEG_SRC}/libavutil/sha512.c
    ${FFMPEG_SRC}/libavutil/sha.c
    ${FFMPEG_SRC}/libavutil/side_data.c
    ${FFMPEG_SRC}/libavutil/slicethread.c
    ${FFMPEG_SRC}/libavutil/spherical.c
    ${FFMPEG_SRC}/libavutil/stereo3d.c
    ${FFMPEG_SRC}/libavutil/tea.c
    ${FFMPEG_SRC}/libavutil/threadmessage.c
    ${FFMPEG_SRC}/libavutil/time.c
    ${FFMPEG_SRC}/libavutil/timecode.c
    ${FFMPEG_SRC}/libavutil/timecode_internal.c
    ${FFMPEG_SRC}/libavutil/timestamp.c
    ${FFMPEG_SRC}/libavutil/tree.c
    ${FFMPEG_SRC}/libavutil/twofish.c
    ${FFMPEG_SRC}/libavutil/tx.c
    ${FFMPEG_SRC}/libavutil/tx_double.c
    ${FFMPEG_SRC}/libavutil/tx_float.c
    ${FFMPEG_SRC}/libavutil/tx_int32.c
    ${FFMPEG_SRC}/libavutil/utils.c
    ${FFMPEG_SRC}/libavutil/video_enc_params.c
    ${FFMPEG_SRC}/libavutil/x86/cpu.c
    ${FFMPEG_SRC}/libavutil/x86/fixed_dsp_init.c
    ${FFMPEG_SRC}/libavutil/x86/float_dsp_init.c
    ${FFMPEG_SRC}/libavutil/x86/imgutils_init.c
    ${FFMPEG_SRC}/libavutil/x86/lls_init.c
    ${FFMPEG_SRC}/libavutil/x86/tx_float_init.c
    ${FFMPEG_SRC}/libavutil/xga_font_data.c
    ${FFMPEG_SRC}/libavutil/xtea.c
)

# The x86 files are only reachable where config.h says the machine is x86,
# and on anything else they do not compile at all. Off the list they go.
set(MW2_FFMPEG_PORTABLE OFF)
if(NOT CMAKE_SYSTEM_PROCESSOR MATCHES "^(x86_64|AMD64|i[3-6]86)$")
    list(FILTER FFMPEG_SOURCES EXCLUDE REGEX "/x86/")
    set(MW2_FFMPEG_PORTABLE ON)
endif()

add_library(ffmpeg_xma STATIC ${FFMPEG_SOURCES})

if(MW2_FFMPEG_PORTABLE)
    # config.h recognises the machine it is compiled on and turns that
    # architecture's own code paths on: on arm64 it sets ARCH_AARCH64, and
    # the decoder then calls ff_float_dsp_init_aarch64, ff_mpadsp_init_aarch64
    # and the rest -- which live in files this subset does not carry. Xenia
    # never built for a phone, so they were never on the list, and they do
    # not come alone: each is a shim over hand-written NEON assembly whose
    # own .S files expect a configure script's worth of feature macros.
    #
    # Taking all that on to speed up one 48 kHz stream is a poor trade, so
    # the architecture is made anonymous instead and FFmpeg falls back to the
    # portable C it is written around. This config.h stands in front of
    # Xenia's and says so; Xenia's is still what everything else comes from.
    set(MW2_FFMPEG_PORTABLE_DIR "${CMAKE_CURRENT_BINARY_DIR}/portable")
    file(MAKE_DIRECTORY "${MW2_FFMPEG_PORTABLE_DIR}")
    file(WRITE "${MW2_FFMPEG_PORTABLE_DIR}/config.h"
"/* Generated by ${CMAKE_CURRENT_LIST_FILE}. Do not edit. */
#ifndef MW2_FFMPEG_PORTABLE_CONFIG_H
#define MW2_FFMPEG_PORTABLE_CONFIG_H

#include \"${CMAKE_CURRENT_SOURCE_DIR}/config.h\"

/* No architecture: the generic C in every dispatch site. */
#undef  ARCH_AARCH64
#define ARCH_AARCH64 0
#undef  ARCH_ARM
#define ARCH_ARM 0
#undef  ARCH_RISCV
#define ARCH_RISCV 0
#undef  ARCH_LOONGARCH
#define ARCH_LOONGARCH 0
#undef  ARCH_LOONGARCH64
#define ARCH_LOONGARCH64 0

/* ...and so none of its hand-written code either. */
#undef  HAVE_NEON
#define HAVE_NEON 0
#undef  HAVE_NEON_EXTERNAL
#define HAVE_NEON_EXTERNAL 0
#undef  HAVE_NEON_INLINE
#define HAVE_NEON_INLINE 0
#undef  HAVE_INTRINSICS_NEON
#define HAVE_INTRINSICS_NEON 0
#undef  HAVE_ARMV8
#define HAVE_ARMV8 0
#undef  HAVE_ARMV8_EXTERNAL
#define HAVE_ARMV8_EXTERNAL 0
#undef  HAVE_ARMV8_INLINE
#define HAVE_ARMV8_INLINE 0
#undef  HAVE_VFP
#define HAVE_VFP 0
#undef  HAVE_VFP_EXTERNAL
#define HAVE_VFP_EXTERNAL 0
#undef  HAVE_VFP_INLINE
#define HAVE_VFP_INLINE 0
#undef  HAVE_RVV
#define HAVE_RVV 0

#endif
")
    target_include_directories(ffmpeg_xma BEFORE PRIVATE "${MW2_FFMPEG_PORTABLE_DIR}")
    message(STATUS "XMA decoder: portable C (${CMAKE_SYSTEM_PROCESSOR}); no NEON dispatch")
endif()
target_include_directories(ffmpeg_xma
    PUBLIC  "${CMAKE_CURRENT_SOURCE_DIR}" "${FFMPEG_SRC}"
    PRIVATE "${FFMPEG_SRC}/libavcodec")
target_compile_definitions(ffmpeg_xma PRIVATE
    HAVE_AV_CONFIG_H _ISOC11_SOURCE _FILE_OFFSET_BITS=64 _LARGEFILE_SOURCE
    _POSIX_C_SOURCE=200112 _XOPEN_SOURCE=600 _GNU_SOURCE PIC)
# Third-party C; its warnings are not ours to fix.
# Newer clang makes an incompatible pointer an error; FFmpeg's codec tables rely on it.
target_compile_options(ffmpeg_xma PRIVATE -w -std=gnu17 -fno-strict-aliasing -fomit-frame-pointer
    -Wno-error=incompatible-pointer-types)
set_target_properties(ffmpeg_xma PROPERTIES POSITION_INDEPENDENT_CODE ON)
if(NOT WIN32 AND NOT ANDROID)
    target_link_libraries(ffmpeg_xma PUBLIC pthread m)
elseif(ANDROID)
    # bionic carries pthread and libm inside libc.
    target_link_libraries(ffmpeg_xma PUBLIC m)
endif()
