import math
x=float(input())
y=float(input())
a="Точка принадлежит заштрихованной фигуре"
b="Точка не принадлежит заштрихованной фигуре"
if y >= -x and y <= 1 and x <= 0 and x >= -math.sqrt(2)/2:
    print(a)
elif y >= x and y <= 1 and x >= 0 and x <= math.sqrt(2)/2:
    print(a)
else:
    print(b)
