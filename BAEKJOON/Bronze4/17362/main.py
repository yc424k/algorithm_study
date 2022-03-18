finger = int(input())
if finger <= 5:
    print(finger)
else:
    if finger%8 == 1:
        print(1)
    elif finger // 4 % 2 == 0:
        print(2)
    elif(finger % 4 == 3):
        print(3)
    elif finger % 8 == 5:
        print(5)
    else:
        print(4)
    # elif finger // 4 % 2 == 1:
    #     print(4)
    # else:
    #     print(5)