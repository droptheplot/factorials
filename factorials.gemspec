$LOAD_PATH.push File.expand_path('../lib', __FILE__)

# Maintain your gem's version:
require 'factorials/version'

# Describe your gem and declare its dependencies:
Gem::Specification.new do |s|
  s.name        = 'factorials'
  s.version     = Factorials::VERSION
  s.authors     = ['Sergey Novikov']
  s.email       = ['novikov359@gmail.com']
  s.homepage    = 'https://github.com/droptheplot/factorials'
  s.summary     = 'Factorials as C extension.'
  s.license     = 'MIT'
  s.extensions  = %w(ext/factorials/extconf.rb)

  s.files = Dir['{lib,ext}/**/*', 'MIT-LICENSE', 'Rakefile', 'README.md']

  s.add_development_dependency 'awesome_print'
  s.add_development_dependency 'rubocop'
  s.add_development_dependency 'rspec'
  s.add_development_dependency 'rake-compiler'
end
