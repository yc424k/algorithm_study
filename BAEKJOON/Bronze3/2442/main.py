loop_number = int(input())

for i in range(1, loop_number + 1):
    print(' ' * (loop_number - i) + '*' * (2 * i - 1))
