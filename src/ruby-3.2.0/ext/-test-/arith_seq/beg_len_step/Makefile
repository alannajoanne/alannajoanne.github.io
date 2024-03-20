
SHELL = /bin/sh

# V=0 quiet, V=1 verbose.  other values don't work.
V = 0
V0 = $(V:0=)
Q1 = $(V:1=)
Q = $(Q1:0=@)
ECHO1 = $(V:1=@ :)
ECHO = $(ECHO1:0=@ echo)
NULLCMD = :

#### Start of system configuration section. ####
top_srcdir = $(topdir)/.
srcdir = $(top_srcdir)/ext/-test-/arith_seq/beg_len_step
topdir = ../../../..
hdrdir = $(top_srcdir)/include
arch_hdrdir = $(extout)/include/$(arch)
PATH_SEPARATOR = :
VPATH = $(srcdir):$(arch_hdrdir)/ruby:$(hdrdir)/ruby
RUBYLIB =
RUBYOPT = -
prefix = $(DESTDIR)/Users/alannajoanne/.rubies/ruby-3.2.0
rubysitearchprefix = $(rubylibprefix)/$(sitearch)
rubyarchprefix = $(rubylibprefix)/$(arch)
rubylibprefix = $(libdir)/$(RUBY_BASE_NAME)
exec_prefix = $(prefix)
vendorarchhdrdir = $(vendorhdrdir)/$(sitearch)
sitearchhdrdir = $(sitehdrdir)/$(sitearch)
rubyarchhdrdir = $(rubyhdrdir)/$(arch)
vendorhdrdir = $(rubyhdrdir)/vendor_ruby
sitehdrdir = $(rubyhdrdir)/site_ruby
rubyhdrdir = $(includedir)/$(RUBY_VERSION_NAME)
vendorarchdir = $(vendorlibdir)/$(sitearch)
vendorlibdir = $(vendordir)/$(ruby_version)
vendordir = $(rubylibprefix)/vendor_ruby
sitearchdir = $(sitelibdir)/$(sitearch)
sitelibdir = $(sitedir)/$(ruby_version)
sitedir = $(rubylibprefix)/site_ruby
rubyarchdir = $(rubylibdir)/$(arch)
rubylibdir = $(rubylibprefix)/$(ruby_version)
sitearchincludedir = $(includedir)/$(sitearch)
archincludedir = $(includedir)/$(arch)
sitearchlibdir = $(libdir)/$(sitearch)
archlibdir = $(libdir)/$(arch)
ridir = $(datarootdir)/$(RI_BASE_NAME)
mandir = $(datarootdir)/man
localedir = $(datarootdir)/locale
libdir = $(exec_prefix)/lib
psdir = $(docdir)
pdfdir = $(docdir)
dvidir = $(docdir)
htmldir = $(docdir)
infodir = $(datarootdir)/info
docdir = $(datarootdir)/doc/$(PACKAGE)
oldincludedir = $(DESTDIR)/usr/include
includedir = $(SDKROOT)$(prefix)/include
runstatedir = $(localstatedir)/run
localstatedir = $(prefix)/var
sharedstatedir = $(prefix)/com
sysconfdir = $(prefix)/etc
datadir = $(datarootdir)
datarootdir = $(prefix)/share
libexecdir = $(exec_prefix)/libexec
sbindir = $(exec_prefix)/sbin
bindir = $(exec_prefix)/bin
archdir = $(rubyarchdir)


CC_WRAPPER = 
CC = clang
CXX = clang++
LIBRUBY = $(LIBRUBY_A)
LIBRUBY_A = lib$(RUBY_SO_NAME)-static.a
LIBRUBYARG_SHARED = 
LIBRUBYARG_STATIC = -l$(RUBY_SO_NAME)-static -framework CoreFoundation $(MAINLIBS)
empty =
OUTFLAG = -o $(empty)
COUTFLAG = -o $(empty)
CSRCFLAG = $(empty)

RUBY_EXTCONF_H = extconf.h
cflags   = -fdeclspec $(optflags) $(debugflags) $(warnflags)
cxxflags = 
optflags = -O3 -fno-fast-math
debugflags = -ggdb3
warnflags = -Wall -Wextra -Wextra-tokens -Wdeprecated-declarations -Wdivision-by-zero -Wdiv-by-zero -Wimplicit-function-declaration -Wimplicit-int -Wmisleading-indentation -Wpointer-arith -Wshorten-64-to-32 -Wwrite-strings -Wold-style-definition -Wmissing-noreturn -Wno-constant-logical-operand -Wno-long-long -Wno-missing-field-initializers -Wno-overlength-strings -Wno-parentheses-equality -Wno-self-assign -Wno-tautological-compare -Wno-unused-parameter -Wno-unused-value -Wunused-variable -Wundef
cppflags = 
CCDLFLAGS = -fno-common
CFLAGS   = $(CCDLFLAGS) $(cflags)  -pipe $(ARCH_FLAG)
INCFLAGS = -I. -I$(arch_hdrdir) -I$(hdrdir) -I$(srcdir)
DEFS     = 
CPPFLAGS = -DRUBY_EXTCONF_H=\"$(RUBY_EXTCONF_H)\" -I/opt/homebrew/opt/openssl@1.1/include -I/opt/homebrew/opt/readline/include -I/opt/homebrew/opt/libyaml/include -I/opt/homebrew/opt/gdbm/include -D_XOPEN_SOURCE -D_DARWIN_C_SOURCE -D_DARWIN_UNLIMITED_SELECT -D_REENTRANT $(DEFS) $(cppflags)
CXXFLAGS = $(CCDLFLAGS) -fdeclspec $(ARCH_FLAG)
ldflags  = -L. -fstack-protector-strong -L/opt/homebrew/opt/openssl@1.1/lib -L/opt/homebrew/opt/readline/lib -L/opt/homebrew/opt/libyaml/lib -L/opt/homebrew/opt/gdbm/lib
dldflags = -L/opt/homebrew/opt/openssl@1.1/lib -L/opt/homebrew/opt/readline/lib -L/opt/homebrew/opt/libyaml/lib -L/opt/homebrew/opt/gdbm/lib -Wl,-multiply_defined,suppress -Wl,-undefined,dynamic_lookup -bundle_loader '$(BUILTRUBY)'
ARCH_FLAG = 
DLDFLAGS = $(ldflags) $(dldflags) $(ARCH_FLAG)
LDSHARED = $(CC) -dynamic -bundle
LDSHAREDXX = $(CXX) -dynamic -bundle
AR = ar
EXEEXT = 

RUBY_INSTALL_NAME = $(RUBY_BASE_NAME)
RUBY_SO_NAME = ruby.3.2
RUBYW_INSTALL_NAME = 
RUBY_VERSION_NAME = $(RUBY_BASE_NAME)-$(ruby_version)
RUBYW_BASE_NAME = rubyw
RUBY_BASE_NAME = ruby

arch = arm64-darwin20
sitearch = $(arch)
ruby_version = 3.2.0
ruby = $(topdir)/miniruby -I'$(topdir)' -I'$(top_srcdir)/lib' -I'$(extout)/$(arch)' -I'$(extout)/common'
RUBY = $(ruby)
BUILTRUBY = $(topdir)/miniruby
ruby_headers = $(hdrdir)/ruby.h $(hdrdir)/ruby/backward.h $(hdrdir)/ruby/ruby.h $(hdrdir)/ruby/defines.h $(hdrdir)/ruby/missing.h $(hdrdir)/ruby/intern.h $(hdrdir)/ruby/st.h $(hdrdir)/ruby/subst.h $(arch_hdrdir)/ruby/config.h $(RUBY_EXTCONF_H)

RM = rm -f
RM_RF = rm -fr
RMDIRS = rmdir -p
MAKEDIRS = mkdir -p
INSTALL = /usr/bin/install -c
INSTALL_PROG = $(INSTALL) -m 0755
INSTALL_DATA = $(INSTALL) -m 644
COPY = cp
TOUCH = exit >

#### End of system configuration section. ####

preload = 
EXTSO = 
libpath = . $(topdir) /opt/homebrew/opt/openssl@1.1/lib /opt/homebrew/opt/readline/lib /opt/homebrew/opt/libyaml/lib /opt/homebrew/opt/gdbm/lib
LIBPATH =  -L. -L$(topdir) -L/opt/homebrew/opt/openssl@1.1/lib -L/opt/homebrew/opt/readline/lib -L/opt/homebrew/opt/libyaml/lib -L/opt/homebrew/opt/gdbm/lib
DEFFILE = 

CLEANFILES = mkmf.log
DISTCLEANFILES = 
DISTCLEANDIRS = 

extout = $(topdir)/.ext
extout_prefix = $(extout)$(target_prefix)/
target_prefix = /-test-/arith_seq
LOCAL_LIBS = 
LIBS =   -lpthread  
ORIG_SRCS = beg_len_step.c
SRCS = $(ORIG_SRCS) 
OBJS = beg_len_step.o
HDRS = $(srcdir)/extconf.h
LOCAL_HDRS = 
TARGET = beg_len_step
TARGET_NAME = beg_len_step
TARGET_ENTRY = Init_$(TARGET_NAME)
DLLIB = $(TARGET).bundle
EXTSTATIC = 
STATIC_LIB = $(TARGET).a

TIMESTAMP_DIR = $(extout)/.timestamp
BINDIR        = $(extout)/bin
RUBYCOMMONDIR = $(extout)/common
RUBYLIBDIR    = $(RUBYCOMMONDIR)$(target_prefix)
RUBYARCHDIR   = $(extout)/$(arch)$(target_prefix)
HDRDIR        = $(extout)/include/ruby$(target_prefix)
ARCHHDRDIR    = $(extout)/include/$(arch)/ruby$(target_prefix)
TARGET_SO_DIR = $(RUBYARCHDIR)/
TARGET_SO     = $(TARGET_SO_DIR)$(DLLIB)
CLEANLIBS     = $(TARGET_SO) $(TARGET_SO).dSYM
CLEANOBJS     = $(OBJS) $(OBJS:.o=.bc) $(OBJS:.o=.i) $(OBJS:.o=.s) *.bak
TARGET_SO_DIR_TIMESTAMP = $(TIMESTAMP_DIR)/$(arch)/.-test-.-.arith_seq.time

all:    install
static: all
.PHONY: all install static install-so install-rb
.PHONY: clean clean-so clean-static clean-rb

clean-static::
clean-rb-default::
clean-rb::
clean-so::
clean: clean-so clean-static clean-rb-default clean-rb
		-$(Q)$(RM_RF) $(CLEANLIBS) $(CLEANOBJS) $(CLEANFILES) .*.time

distclean-rb-default::
distclean-rb::
distclean-so::
distclean-static::
distclean: clean distclean-so distclean-static distclean-rb-default distclean-rb
		-$(Q)$(RM) Makefile $(RUBY_EXTCONF_H) conftest.* mkmf.log exts.mk
		-$(Q)$(RM) core ruby$(EXEEXT) *~ $(DISTCLEANFILES)
		-$(Q)$(RMDIRS) $(DISTCLEANDIRS) 2> /dev/null || true

realclean: distclean
install: install-so install-rb

install-so: $(TARGET_SO)
clean-so::
	-$(Q)$(RM) $(TARGET_SO) $(TARGET_SO_DIR_TIMESTAMP)
	-$(Q)$(RMDIRS) $(TARGET_SO_DIR) 2> /dev/null || true
clean-static::
	-$(Q)$(RM) $(STATIC_LIB)
install-rb: pre-install-rb do-install-rb install-rb-default
install-rb-default: pre-install-rb-default do-install-rb-default
pre-install-rb: Makefile
pre-install-rb-default: Makefile
do-install-rb:
do-install-rb-default:
pre-install-rb-default:
	@$(NULLCMD)
$(TARGET_SO_DIR_TIMESTAMP):
	$(Q) $(MAKEDIRS) $(@D) $(TARGET_SO_DIR)
	$(Q) $(TOUCH) $@

site-install: site-install-so site-install-rb
site-install-so: install-so
site-install-rb: install-rb

.SUFFIXES: .c .m .cc .mm .cxx .cpp .o .S

.cc.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.cc.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

.mm.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.mm.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

.cxx.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.cxx.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

.cpp.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.cpp.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

.c.o:
	$(ECHO) compiling $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.c.S:
	$(ECHO) translating $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

.m.o:
	$(ECHO) compiling $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.m.S:
	$(ECHO) translating $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

$(TARGET_SO): $(OBJS) Makefile $(TARGET_SO_DIR_TIMESTAMP)
	$(ECHO) linking shared-object -test-/arith_seq/$(DLLIB)
	-$(Q)$(RM) $(@)
	$(Q) $(LDSHARED) -o $@ $(OBJS) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)
	$(Q) $(POSTLINK)

$(STATIC_LIB): $(OBJS)
	-$(Q)$(RM) $(@)
	$(ECHO) linking static-library $(@)
	$(Q) $(AR) rcu $@ $(OBJS)
	-$(Q)ranlib $(@) 2> /dev/null || true

###
$(OBJS): $(RUBY_EXTCONF_H)

# AUTOGENERATED DEPENDENCIES START
beg_len_step.o: $(RUBY_EXTCONF_H)
beg_len_step.o: $(arch_hdrdir)/ruby/config.h
beg_len_step.o: $(hdrdir)/ruby/assert.h
beg_len_step.o: $(hdrdir)/ruby/backward.h
beg_len_step.o: $(hdrdir)/ruby/backward/2/assume.h
beg_len_step.o: $(hdrdir)/ruby/backward/2/attributes.h
beg_len_step.o: $(hdrdir)/ruby/backward/2/bool.h
beg_len_step.o: $(hdrdir)/ruby/backward/2/inttypes.h
beg_len_step.o: $(hdrdir)/ruby/backward/2/limits.h
beg_len_step.o: $(hdrdir)/ruby/backward/2/long_long.h
beg_len_step.o: $(hdrdir)/ruby/backward/2/stdalign.h
beg_len_step.o: $(hdrdir)/ruby/backward/2/stdarg.h
beg_len_step.o: $(hdrdir)/ruby/defines.h
beg_len_step.o: $(hdrdir)/ruby/intern.h
beg_len_step.o: $(hdrdir)/ruby/internal/abi.h
beg_len_step.o: $(hdrdir)/ruby/internal/anyargs.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/char.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/double.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/fixnum.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/gid_t.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/int.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/intptr_t.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/long.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/long_long.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/mode_t.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/off_t.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/pid_t.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/short.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/size_t.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/st_data_t.h
beg_len_step.o: $(hdrdir)/ruby/internal/arithmetic/uid_t.h
beg_len_step.o: $(hdrdir)/ruby/internal/assume.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/alloc_size.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/artificial.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/cold.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/const.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/constexpr.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/deprecated.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/diagnose_if.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/enum_extensibility.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/error.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/flag_enum.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/forceinline.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/format.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/maybe_unused.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/noalias.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/nodiscard.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/noexcept.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/noinline.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/nonnull.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/noreturn.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/pure.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/restrict.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/returns_nonnull.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/warning.h
beg_len_step.o: $(hdrdir)/ruby/internal/attr/weakref.h
beg_len_step.o: $(hdrdir)/ruby/internal/cast.h
beg_len_step.o: $(hdrdir)/ruby/internal/compiler_is.h
beg_len_step.o: $(hdrdir)/ruby/internal/compiler_is/apple.h
beg_len_step.o: $(hdrdir)/ruby/internal/compiler_is/clang.h
beg_len_step.o: $(hdrdir)/ruby/internal/compiler_is/gcc.h
beg_len_step.o: $(hdrdir)/ruby/internal/compiler_is/intel.h
beg_len_step.o: $(hdrdir)/ruby/internal/compiler_is/msvc.h
beg_len_step.o: $(hdrdir)/ruby/internal/compiler_is/sunpro.h
beg_len_step.o: $(hdrdir)/ruby/internal/compiler_since.h
beg_len_step.o: $(hdrdir)/ruby/internal/config.h
beg_len_step.o: $(hdrdir)/ruby/internal/constant_p.h
beg_len_step.o: $(hdrdir)/ruby/internal/core.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rarray.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rbasic.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rbignum.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rclass.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rdata.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rfile.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rhash.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/robject.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rregexp.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rstring.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rstruct.h
beg_len_step.o: $(hdrdir)/ruby/internal/core/rtypeddata.h
beg_len_step.o: $(hdrdir)/ruby/internal/ctype.h
beg_len_step.o: $(hdrdir)/ruby/internal/dllexport.h
beg_len_step.o: $(hdrdir)/ruby/internal/dosish.h
beg_len_step.o: $(hdrdir)/ruby/internal/error.h
beg_len_step.o: $(hdrdir)/ruby/internal/eval.h
beg_len_step.o: $(hdrdir)/ruby/internal/event.h
beg_len_step.o: $(hdrdir)/ruby/internal/fl_type.h
beg_len_step.o: $(hdrdir)/ruby/internal/gc.h
beg_len_step.o: $(hdrdir)/ruby/internal/glob.h
beg_len_step.o: $(hdrdir)/ruby/internal/globals.h
beg_len_step.o: $(hdrdir)/ruby/internal/has/attribute.h
beg_len_step.o: $(hdrdir)/ruby/internal/has/builtin.h
beg_len_step.o: $(hdrdir)/ruby/internal/has/c_attribute.h
beg_len_step.o: $(hdrdir)/ruby/internal/has/cpp_attribute.h
beg_len_step.o: $(hdrdir)/ruby/internal/has/declspec_attribute.h
beg_len_step.o: $(hdrdir)/ruby/internal/has/extension.h
beg_len_step.o: $(hdrdir)/ruby/internal/has/feature.h
beg_len_step.o: $(hdrdir)/ruby/internal/has/warning.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/array.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/bignum.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/class.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/compar.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/complex.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/cont.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/dir.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/enum.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/enumerator.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/error.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/eval.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/file.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/gc.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/hash.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/io.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/load.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/marshal.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/numeric.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/object.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/parse.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/proc.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/process.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/random.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/range.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/rational.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/re.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/ruby.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/select.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/select/largesize.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/signal.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/sprintf.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/string.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/struct.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/thread.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/time.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/variable.h
beg_len_step.o: $(hdrdir)/ruby/internal/intern/vm.h
beg_len_step.o: $(hdrdir)/ruby/internal/interpreter.h
beg_len_step.o: $(hdrdir)/ruby/internal/iterator.h
beg_len_step.o: $(hdrdir)/ruby/internal/memory.h
beg_len_step.o: $(hdrdir)/ruby/internal/method.h
beg_len_step.o: $(hdrdir)/ruby/internal/module.h
beg_len_step.o: $(hdrdir)/ruby/internal/newobj.h
beg_len_step.o: $(hdrdir)/ruby/internal/rgengc.h
beg_len_step.o: $(hdrdir)/ruby/internal/scan_args.h
beg_len_step.o: $(hdrdir)/ruby/internal/special_consts.h
beg_len_step.o: $(hdrdir)/ruby/internal/static_assert.h
beg_len_step.o: $(hdrdir)/ruby/internal/stdalign.h
beg_len_step.o: $(hdrdir)/ruby/internal/stdbool.h
beg_len_step.o: $(hdrdir)/ruby/internal/symbol.h
beg_len_step.o: $(hdrdir)/ruby/internal/value.h
beg_len_step.o: $(hdrdir)/ruby/internal/value_type.h
beg_len_step.o: $(hdrdir)/ruby/internal/variable.h
beg_len_step.o: $(hdrdir)/ruby/internal/warning_push.h
beg_len_step.o: $(hdrdir)/ruby/internal/xmalloc.h
beg_len_step.o: $(hdrdir)/ruby/missing.h
beg_len_step.o: $(hdrdir)/ruby/ruby.h
beg_len_step.o: $(hdrdir)/ruby/st.h
beg_len_step.o: $(hdrdir)/ruby/subst.h
beg_len_step.o: beg_len_step.c
# AUTOGENERATED DEPENDENCIES END
