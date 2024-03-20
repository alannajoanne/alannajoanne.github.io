V = 0
V0 = $(V:0=)
Q1 = $(V:1=)
Q = $(Q1:0=@)
ECHO1 = $(V:1=@:)
ECHO = $(ECHO1:0=@echo)
override MFLAGS := $(filter-out -j%,$(MFLAGS))
ext_build_dir = ext/digest

ruby = $(topdir)/miniruby -I'$(topdir)' -I'$(top_srcdir)/lib' \
       -I'$(extout)/$(arch)' -I'$(extout)/common'
RUBY = $(ruby)
extensions = ext/digest/. ext/digest/bubblebabble/. ext/digest/md5/. \
	     ext/digest/rmd160/. ext/digest/sha1/. ext/digest/sha2/.
EXTOBJS = dmyext.o
EXTLIBS =
EXTSO =
EXTLDFLAGS =
EXTINITS =
SUBMAKEOPTS = EXTOBJS="$(EXTOBJS) $(EXTENCS)" EXTLIBS="$(EXTLIBS)" \
	      EXTLDFLAGS="$(EXTLDFLAGS)" EXTINITS="$(EXTINITS)" \
	      UPDATE_LIBRARIES="$(UPDATE_LIBRARIES)" SHOWFLAGS=
NOTE_MESG = $(RUBY) $(top_srcdir)/tool/lib/colorize.rb skip
NOTE_NAME = $(RUBY) $(top_srcdir)/tool/lib/colorize.rb fail
RM = rm -f
RMDIRS = rmdir -p
RMDIR = rmdir
RMALL = rm -fr

all: $(extensions:/.=/all)
all: note
install: $(extensions:/.=/install)
install: note
static: $(extensions:/.=/static)
static: note
install-so: $(extensions:/.=/install-so)
install-so: note
install-rb: $(extensions:/.=/install-rb)
install-rb: note
clean: $(extensions:/.=/clean)
distclean: $(extensions:/.=/distclean)
realclean: $(extensions:/.=/realclean)

clean:
	-$(Q)$(RM) ext/extinit.o
distclean:
	-$(Q)$(RM) ext/extinit.c

ruby: $(extensions:/.=/all)
all static: ruby
ruby: $(EXTOBJS)
ruby:
	$(Q)$(MAKE) $(MFLAGS) $(SUBMAKEOPTS) $@
libencs:
	$(Q)$(MAKE) -f enc.mk V=$(V) $@

ext/digest/all:
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/bubblebabble/all: ext/digest/all
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/md5/all: ext/digest/all
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/rmd160/all: ext/digest/all
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha1/all: ext/digest/all
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha2/all: ext/digest/all
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/install:
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/bubblebabble/install: ext/digest/install
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/md5/install: ext/digest/install
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/rmd160/install: ext/digest/install
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha1/install: ext/digest/install
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha2/install: ext/digest/install
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/static:
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/bubblebabble/static: ext/digest/static
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/md5/static: ext/digest/static
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/rmd160/static: ext/digest/static
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha1/static: ext/digest/static
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha2/static: ext/digest/static
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/install-so:
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/bubblebabble/install-so: ext/digest/install-so
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/md5/install-so: ext/digest/install-so
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/rmd160/install-so: ext/digest/install-so
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha1/install-so: ext/digest/install-so
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha2/install-so: ext/digest/install-so
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/install-rb:
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/bubblebabble/install-rb: ext/digest/install-rb
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/md5/install-rb: ext/digest/install-rb
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/rmd160/install-rb: ext/digest/install-rb
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha1/install-rb: ext/digest/install-rb
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha2/install-rb: ext/digest/install-rb
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/clean: clean-local ext/digest/bubblebabble/clean ext/digest/md5/clean ext/digest/rmd160/clean ext/digest/sha1/clean ext/digest/sha2/clean
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/bubblebabble/clean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/md5/clean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/rmd160/clean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha1/clean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/sha2/clean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/digest/distclean: clean-local ext/digest/bubblebabble/distclean ext/digest/md5/distclean ext/digest/rmd160/distclean ext/digest/sha1/distclean ext/digest/sha2/distclean
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/bubblebabble/distclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/md5/distclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/rmd160/distclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/sha1/distclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/sha2/distclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/realclean: clean-local ext/digest/bubblebabble/realclean ext/digest/md5/realclean ext/digest/rmd160/realclean ext/digest/sha1/realclean ext/digest/sha2/realclean
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/bubblebabble/realclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/md5/realclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/rmd160/realclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/sha1/realclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/digest/sha2/realclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)

clean-local:
	$(Q)$(RM) $(ext_build_dir)/*~ $(ext_build_dir)/*.bak $(ext_build_dir)/core

extso:
	@echo EXTSO=$(EXTSO)

note:
