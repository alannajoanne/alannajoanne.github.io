#ifndef RUBY_MJIT_CONFIG_H
#define RUBY_MJIT_CONFIG_H 1

#ifdef LOAD_RELATIVE
#define MJIT_HEADER_INSTALL_DIR "/include/ruby-3.1.0/arm64-darwin22"
#else
#define MJIT_HEADER_INSTALL_DIR "/Users/alannajoanne/.rubies/ruby-3.1.3/include/ruby-3.1.0/arm64-darwin22"
#endif
#define MJIT_MIN_HEADER_NAME "rb_mjit_min_header-3.1.3.h"
#define MJIT_CC_COMMON   "/usr/bin/clang",
#define MJIT_CFLAGS      MJIT_ARCHFLAG "-w", "-fdeclspec",
#define MJIT_OPTFLAGS    "-O3", "-fno-fast-math",
#define MJIT_DEBUGFLAGS  "-ggdb3",
#define MJIT_LDSHARED    "/usr/bin/clang", "-dynamic", "-bundle",
#define MJIT_DLDFLAGS    MJIT_ARCHFLAG "-L/opt/homebrew/opt/readline/lib", "-L/opt/homebrew/opt/libyaml/lib", "-L/opt/homebrew/opt/gdbm/lib", "-Wl,-undefined,dynamic_lookup",
#define MJIT_LIBS       
#define PRELOADENV       "DYLD_INSERT_LIBRARIES"
#define MJIT_ARCHFLAG    /* no flag */

#endif /* RUBY_MJIT_CONFIG_H */
