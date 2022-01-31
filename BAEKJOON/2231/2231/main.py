from re import I


N = int(input())
sum = 0
check = False

for i in range(1,N):
    sum = i
    for j in map(int,str(i)):
        sum = sum + j
    if sum == N:
        check = True
        anw = i
        break

print(i) if check else print(0)