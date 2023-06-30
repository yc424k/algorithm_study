num = int(input())

for i in range(1, num + 1):
    print(i, end=' ')
    if i % 6 == 0:
        print('Go! ', end='')
if (num % 6 != 0):
    print('Go!')
