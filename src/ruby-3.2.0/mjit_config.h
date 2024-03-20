#ifndef RUBY_MJIT_CONFIG_H
#define RUBY_MJIT_CONFIG_H 1

#ifdef LOAD_RELATIVE
#define MJIT_HEADER_INSTALL_DIR "/include/ruby-3.2.0/arm64-darwin20"
#else
#define MJIT_HEADER_INSTALL_DIR "/Users/alannajoanne/.rubies/ruby-3.2.0/include/ruby-3.2.0/arm64-darwin20"
#endif
#define MJIT_MIN_HEADER_NAME "rb_mjit_min_header-3.2.0.h"
#define MJIT_CC_COMMON   "/usr/bin/clang",
#define MJIT_CFLAGS      MJIT_ARCHFLAG "-w", "-fdeclspec",
#define MJIT_OPTFLAGS    "-O3", "-fno-fast-math",
#define MJIT_DEBUGFLAGS 
#define MJIT_LDSHARED    "/usr/bin/clang", "-dynamic", "-bundle",
#define MJIT_DLDFLAGS    MJIT_ARCHFLAG "-L/opt/homebrew/opt/openssl@1.1/lib", "-L/opt/homebrew/opt/readline/lib", "-L/opt/homebrew/opt/libyaml/lib", "-L/opt/homebrew/opt/gdbm/lib", "-Wl,-multiply_defined,suppress", "-Wl,-undefined,dynamic_lookup",
#define MJIT_LIBS       
#define PRELOADENV       "DYLD_INSERT_LIBRARIES"
#define MJIT_ARCHFLAG    /* no flag */

#endif /* RUBY_MJIT_CONFIG_H */
