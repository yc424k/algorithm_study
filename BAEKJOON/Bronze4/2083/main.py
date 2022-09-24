while True:
    list1 = list(map(str, input().split()))

    if list1[0] == '#':
        break

    if int(int(list1[1]) > 17 or int(list1[2]) >= 80):
        print(list1[0], "Senior")
    else:
        print(list1[0], "Junior")
