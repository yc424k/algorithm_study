while True:
    boy_friends, girl_friends = map(int, input().split())
    if boy_friends + girl_friends == 0:
        break
    print(boy_friends+girl_friends)
