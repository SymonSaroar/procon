#!/usr/bin/ruby
h,w,n=gets.split.map(&:to_i)
s=h.times.map{gets.chomp.chars}.transpose.map{|e|h-(e.index('#')||h)}
c=n.times.map{gets.to_i}
c0=[]
idx=(0...n).sort_by{|e|c[e]}
idx.each{|e|
	k=(0..2).find{|k|s[c[e]+k]>0}
	s[c[e]+k]-=1
	a=[0,0,0];a[k]=1
	c0[e]=a
}
idx.each{|i|
	3.times{|j|
		dec=[3-c0[i][j],s[c[i]+j]].min
		s[c[i]+j]-=dec
		c0[i][j]+=dec
	}
}
c0.each{|e|puts e.map{|f|['.']*(3-f)+['#']*f}.transpose.map(&:join)}
