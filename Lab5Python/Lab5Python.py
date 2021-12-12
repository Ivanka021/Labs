import math
a = int (input())
b = int (input())
prime = bool()
for a in range(a,b+1):
    prime = True
    for i in range(2,a):
        if a % i == 0:
            prime = False 
            break
    if prime == True:
        print(a)

