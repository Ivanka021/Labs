import math
x = 1 
term = 1
E = 0.0001
n = 1.0
s = 0.0
if -1 < x <1:
while abs(term) >= E:
    s += term
    term = (-1 ** n) * (x **(2*n+1)) / (2*n + 1)
    n += 1
