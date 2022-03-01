from imaplib import Int2AP
from operator import indexOf


X1, Y1, Z1 = map(int, input().split())
X2, Y2, Z2 = map(int, input().split())

print(X2 - Z1, Y2 // Y1, Z2-X1)