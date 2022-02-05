from math import ceil
from random import randint

a,b = map(int,input().split())
anw = 0

for i in range(1,a*b+1):
    if(ceil(i/a) == b):
        anw = i
        break
print(anw)