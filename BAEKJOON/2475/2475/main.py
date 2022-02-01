number1 = list(map(int,input().split()))


sum = 0

for i in number1:
    sum = sum + i * i

print(sum%10)