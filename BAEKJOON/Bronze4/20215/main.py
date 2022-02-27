from math import sqrt

W,H = map(int,input().split())
print(W+H - sqrt(W**2+H**2))