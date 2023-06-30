x, y = map(int, input().split())

if y >= x or (x + y) % 2 != 0:
    print(-1)
    exit()
MK = (x + y) // 2
AFC = x - MK
print(max(MK, AFC), min(MK, AFC))
