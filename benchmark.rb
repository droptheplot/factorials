require 'rake'
require 'benchmark'

load 'Rakefile'

Rake::Task['compile'].invoke

require_relative 'lib/factorials/factorials'

Benchmark.bmbm(7) do |x|
  int = 100_000

  x.report('Factorial (Ruby)') do
    (1..int).inject(:*)
  end

  x.report('Factorial (C)') do
    int.factorial
  end

  x.report('Double Factorial (C)') do
    int.double_factorial
  end

  x.report('Superfactorial (C)') do
    int.superfactorial
  end
end
