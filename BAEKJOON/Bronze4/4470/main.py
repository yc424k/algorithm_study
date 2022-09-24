from xxlimited import Str


loop = int(input())

for i in range(loop):
    str1 = input()
    str1 = str(i+1) + '. ' + str1
    print(str1)
