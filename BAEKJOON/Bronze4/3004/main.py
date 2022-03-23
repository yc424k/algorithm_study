
sum = 1
check = 1

num = int(input())
for i in range(num):
    sum += check
    if i % 2 == 0:
        check += 1
print(sum)