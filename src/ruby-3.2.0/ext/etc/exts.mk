V = 0
V0 = $(V:0=)
Q1 = $(V:1=)
Q = $(Q1:0=@)
ECHO1 = $(V:1=@:)
ECHO = $(ECHO1:0=@echo)
override MFLAGS := $(filter-out -j%,$(MFLAGS))
ext_build_dir = ext/etc

ruby = $(topdir)/miniruby -I'$(topdir)' -I'$(top_srcdir)/lib' \
       -I'$(extout)/$(arch)' -I'$(extout)/common'
RUBY = $(ruby)
extensions = ext/etc/.
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

ext/etc/all:
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/etc/install:
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/etc/static:
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/etc/install-so:
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/etc/install-rb:
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/etc/clean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
ext/etc/distclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)
ext/etc/realclean: clean-local
	$(Q)$(MAKE) -C $(@D) $(MFLAGS) V=$(V) $(@F)
	$(Q)$(RM) $(ext_build_dir)/exts.mk
	$(Q)$(RMDIRS) -p $(@D)

clean-local:
	$(Q)$(RM) $(ext_build_dir)/*~ $(ext_build_dir)/*.bak $(ext_build_dir)/core

extso:
	@echo EXTSO=$(EXTSO)

note:
