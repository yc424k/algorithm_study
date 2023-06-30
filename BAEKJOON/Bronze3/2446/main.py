loop_number = int(input())

for i in range(loop_number + 1, 1, -1):
    print(' ' * (loop_number - i + 1) + '*' * (2 * i - 3))
for i in range(1, loop_number):
    print(' ' * (loop_number - i-1) + '*' * (2 * i + 1))
