A = int(input())
B = int(input())
C = int(input())
D = int(input())
P = int(input())
X = A * P
Y = B + (P-C) * D if P > C else B
print(X) if X < Y else print(Y)