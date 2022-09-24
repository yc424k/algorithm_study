ans = int(input())
loop = int(input())

sum = 0

for i in range(loop):
    a, b = map(int, input().split())
    sum += a*b

if (sum == ans):
    print("Yes")
else:
    print("No")
