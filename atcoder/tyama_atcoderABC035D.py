#!/usr/bin/python
from scipy.sparse import *
import sys
if sys.version_info[0]>=3:raw_input=input
f=lambda*z:map(int,raw_input().split())
d=lambda*k:csgraph.dijkstra(csr_matrix((c,k),[n+1]*2),1,1)
n,m,t=f()
z=list(f())
a,b,c=zip(*map(f,range(m)))
g=d(a,b)
h=d(b,a)
print(int(max(z[i]*(t-g[i+1]-h[i+1])for i in range(n))))