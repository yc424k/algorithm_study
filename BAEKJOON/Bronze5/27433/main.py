def factorial(num):
    sum = 1
    if num == 0:
        return 1
    else:
        for i in range(1, num + 1):
            sum *= i
        return sum

num = int(input())
print(factorial(num))