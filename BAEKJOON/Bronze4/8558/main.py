factorial = int(input())

sum = 1

for i in range(1, factorial + 1):
    sum *= i

print(sum % 10)
