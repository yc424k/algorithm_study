# def squareSum(a):
#     if a == 1:
#         return 1
#     return squareSum(a-1) + a**2

a = int(input())
sum = 0 
for i in range(a+1):
    sum = sum + i**2

print(sum)