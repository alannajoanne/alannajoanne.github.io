#ifndef RUBY_MJIT_CONFIG_H
#define RUBY_MJIT_CONFIG_H 1

#ifdef LOAD_RELATIVE
#define MJIT_HEADER_INSTALL_DIR "/include/ruby-2.7.0/arm64-darwin20"
#else
#define MJIT_HEADER_INSTALL_DIR "/Users/alannajoanne/.rubies/ruby-2.7.7/include/ruby-2.7.0/arm64-darwin20"
#endif
#define MJIT_MIN_HEADER_NAME "rb_mjit_min_header-2.7.7.h"
#define MJIT_CC_COMMON   "/usr/bin/gcc",
#define MJIT_CFLAGS      MJIT_ARCHFLAG "-w",
#define MJIT_OPTFLAGS    "-O3",
#define MJIT_DEBUGFLAGS  "-ggdb3",
#define MJIT_LDSHARED    "/usr/bin/gcc", "-dynamic", "-bundle",
#define MJIT_DLDFLAGS    MJIT_ARCHFLAG "-Wl,-multiply_defined,suppress", "-Wl,-undefined,dynamic_lookup", "-L/opt/homebrew/opt/openssl@1.1/lib", "-L/opt/homebrew/opt/readline/lib", "-L/opt/homebrew/opt/libyaml/lib", "-L/opt/homebrew/opt/gdbm/lib",
#define MJIT_LIBS       
#define PRELOADENV       "DYLD_INSERT_LIBRARIES"
#define MJIT_ARCHFLAG    /* -m64 */ "-m64",

#endif /* RUBY_MJIT_CONFIG_H */
