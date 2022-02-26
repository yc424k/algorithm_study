A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())

if A < 0:
    print(abs(A)*C+D+B*E)
elif A == 0:
    print(B*E+D)
else:
    print((B-A)*E)