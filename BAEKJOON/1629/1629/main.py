
def DaC(a,b,c):
    if b == 0  :
        return 1
    if b == 1 :
        return a % c
    if b % 2 == 1 :
        return DaC(a,b-1,c) * a % c
    return DaC(a*a%c, b/2,c) % c

A,B,C = map(int,input().split())
print(DaC(A, B,C))