a, b = map(int, input().split())

if a < 100 or a-(b*a*0.01) < 100:
    print(1)
else:
    print(0)
