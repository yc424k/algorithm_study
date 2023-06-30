while True:
    triangle = int(input())
    if triangle == 0:
        break
    for i in range(1, triangle + 1):
        print('*' * i)
