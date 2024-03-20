# frozen_string_literal: true
# shareable_constant_value: literal
baseruby="/Users/alannajoanne/.rbenv/shims/ruby --disable=gems"
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
  RUBY_VERSION = "3.2.0"
  RUBY_RELEASE_DATE = "2022-12-25"
  RUBY_PLATFORM = "arm64-darwin20"
  RUBY_PATCHLEVEL = 0
  RUBY_REVISION = "a528908271c678360d2d8ca232c178e7cdd340b4"
  RUBY_COPYRIGHT = "ruby - Copyright (C) 1993-2022 Yukihiro Matsumoto"
  RUBY_ENGINE = "ruby"
  RUBY_ENGINE_VERSION = "3.2.0"
  RUBY_DESCRIPTION = case
    when RubyVM.const_defined?(:MJIT) && RubyVM::MJIT.enabled?
      "ruby 3.2.0 (2022-12-25 revision a528908271) +MJIT [arm64-darwin20]"
    when RubyVM.const_defined?(:YJIT) && RubyVM::YJIT.enabled?
      "ruby 3.2.0 (2022-12-25 revision a528908271) +YJIT [arm64-darwin20]"
    else
      "ruby 3.2.0 (2022-12-25 revision a528908271) [arm64-darwin20]"
    end
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
