#!/usr/bin/ruby
a,b=gets.split.map &:to_i;p a*b%(10**9+7)
