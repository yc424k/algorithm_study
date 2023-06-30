x, y = map(int, input().split())

MK = (x + y) // 2
AFC = x - MK
if MK + AFC != x or abs(MK - AFC) != y or MK < 0 or AFC < 0:
    print(-1)
    exit(0)
print(max(MK, AFC), min(MK, AFC))
