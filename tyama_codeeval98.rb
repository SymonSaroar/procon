#!/usr/bin/ruby
puts $<.map{|l|
	l=~/.*: \((.*),(.*)\);.*: (.*);.*: \((.*),(.*)\)/
	($1.to_f-$4.to_f)**2+($2.to_f-$5.to_f)**2<$3.to_f**2
}