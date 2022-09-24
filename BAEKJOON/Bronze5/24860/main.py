# 백준 24860번 문제

A1, A2 = map(int, input().split())
B1, B2 = map(int, input().split())
C1, C2, C3 = map(int, input().split())

print(A1*A2*C1*C2*C3+B1*B2*C1*C2*C3)
