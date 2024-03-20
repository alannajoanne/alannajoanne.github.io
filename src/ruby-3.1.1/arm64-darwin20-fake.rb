baseruby="/usr/bin/ruby --disable=gems"
_\
=begin
_=
ruby="${RUBY-$baseruby}"
case "$ruby" in "echo "*) $ruby; exit $?;; esac
case "$0" in /*) r=-r"$0";; *) r=-r"./$0";; esac
exec $ruby "$r" "$@"
=end
=baseruby
class Object
  remove_const :CROSS_COMPILING if defined?(CROSS_COMPILING)
  CROSS_COMPILING = RUBY_PLATFORM
  constants.grep(/^RUBY_/) {|n| remove_const n}
  RUBY_VERSION = "3.1.1"
  RUBY_RELEASE_DATE = "2022-02-18"
  RUBY_PLATFORM = "arm64-darwin20"
  RUBY_PATCHLEVEL = 18
  RUBY_REVISION = "53f5fc4236a754ddf94b20dbb70ab63bd5109b18"
  RUBY_COPYRIGHT = "ruby - Copyright (C) 1993-2022 Yukihiro Matsumoto"
  RUBY_ENGINE = "ruby"
  RUBY_ENGINE_VERSION = "3.1.1"
  RUBY_DESCRIPTION = RubyVM.const_defined?(:JIT) && RubyVM::MJIT.enabled? ?
    nil :
    "ruby 3.1.1p18 (2022-02-18 revision 53f5fc4236) [arm64-darwin20]"
end
builddir = File.dirname(File.expand_path(__FILE__))
srcdir = "."
top_srcdir = File.realpath(srcdir, builddir)
fake = File.join(top_srcdir, "tool/fake.rb")
eval(File.binread(fake), nil, fake)
ropt = "-r#{__FILE__}"
["RUBYOPT"].each do |flag|
  opt = ENV[flag]
  opt = opt ? ([ropt] | opt.b.split(/\s+/)).join(" ") : ropt
  ENV[flag] = opt
end
