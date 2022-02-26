Base, X, Y = map(int,input().split())
X = Base-X if (Base - X) > X else X
Y = Base-Y if (Base - Y) > Y else Y
print(X*Y*4)