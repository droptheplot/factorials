require 'rake'

load 'Rakefile'

Rake::Task['compile'].invoke

require 'factorials/factorials'
