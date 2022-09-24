# 백준 5575번 문제

for i in range(3):
    arr = list(map(int, input().split()))
    time1 = arr[3] * 3600 + arr[4] * 60 + arr[5]
    time2 = arr[0] * 3600 + arr[1] * 60 + arr[2]
    time = time1 - time2

    hour = time // 3600
    minute = (time % 3600) // 60
    second = (time % 3600) % 60

    print(hour, minute, second)
