L, A,B,C,D = map(int, open(0))
print(int(L - A/C)) if A/C > B/D else print(int(L - B/D))