from asyncore import read


X, L ,R = map(int,input().split())
min = 100000
check = 0
if L == R:
    print(L)
else:
    for i in range(L, R+1):
        if min > abs(X - i):
            min = abs(X-i)
            # print(min, i)
            check = i
    print(check)
