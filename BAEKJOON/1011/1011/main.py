for i in range(0, int(input())):
    X, Y = map(int, input().split())
    if Y-X == 1:
        print(1)
    elif (Y - X) % 2 == 1:
        print(int(((Y-X-1)/2)+2))
    else: 
        print(int(((Y-X-1)/2)+1))