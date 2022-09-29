date = list(map(int, input().split()))

day = date[0] - 11
hour = date[1] - 11
min = date[2] - 11

finishTime = day * 24 * 60 + hour * 60 + min

if finishTime < 0:
    print(-1)
else:
    print(finishTime)
