import math

def function(a, b, c):
    return (2 * a - b - math.sin(c)) / (5 + math.fabs(c))

s = float(input())
t = float(input())
L = float(function(t, -2 * s, 1.17) + function(2.2, t, s - t))
print(L)