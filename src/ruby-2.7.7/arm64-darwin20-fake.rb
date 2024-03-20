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
  RUBY_VERSION = "2.7.7"
  RUBY_RELEASE_DATE = "2022-11-24"
  RUBY_PLATFORM = "arm64-darwin20"
  RUBY_PATCHLEVEL = 221
  RUBY_REVISION = "168ec2b1e5ad0e4688e963d9de019557c78feed9"
  RUBY_COPYRIGHT = "ruby - Copyright (C) 1993-2022 Yukihiro Matsumoto"
  RUBY_ENGINE = "ruby"
  RUBY_ENGINE_VERSION = "2.7.7"
  RUBY_DESCRIPTION = RubyVM.const_defined?(:MJIT) && RubyVM::MJIT.enabled? ?
    "ruby 2.7.7p221 (2022-11-24 revision 168ec2b1e5) +JIT [arm64-darwin20]" :
    "ruby 2.7.7p221 (2022-11-24 revision 168ec2b1e5) [arm64-darwin20]"
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
