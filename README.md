# Factorials

[![Gem Version](https://badge.fury.io/rb/factorials.svg)](https://badge.fury.io/rb/factorials)

Ruby factorials as C extension.

## Installation

Add this line to your application's Gemfile:

```ruby
gem 'factorials'
```

And then execute:
```bash
$ bundle
```

Or install it yourself as:
```bash
$ gem install factorials
```

## Usage

### Factorial

```ruby
10.factorial
# => 3628800
```

## Benchmark

Conditions:

```ruby
Benchmark.bmbm(7) do |x|
  int = 100_000

  x.report('Factorial (Ruby)') do
    (1..int).inject(:*)
  end

  x.report('Factorial (C)') do
    int.factorial
  end
end

```

Results:

```shell
Rehearsal ----------------------------------------------------
Factorial (Ruby)   4.710000   2.320000   7.030000 (  7.495018)
Factorial (C)      0.000000   0.000000   0.000000 (  0.000156)
------------------------------------------- total: 7.030000sec

                       user     system      total        real
Factorial (Ruby)   4.720000   2.400000   7.120000 (  7.787638)
Factorial (C)      0.000000   0.000000   0.000000 (  0.000131)
```

## Contributing

1. Fork it (https://github.com/droptheplot/factorials/fork)
2. Create your feature branch (git checkout -b my-new-feature)
3. Commit your changes (git commit -am 'Add some feature')
4. Push to the branch (git push origin my-new-feature)
5. Create new Pull Request

## License

The gem is available as open source under the terms of the [MIT License](http://opensource.org/licenses/MIT).
