max_snow, now_snow = map(int, input().split())

a, b, c = 0, 0, 0
if (7000 * now_snow <= 1000 * max_snow):
    a = 7000 * now_snow
if (3500 * now_snow <= 1000 * max_snow):
    b = 3500 * now_snow
if (1750 * now_snow <= 1000 * max_snow):
    c = 1750 * now_snow
print(max({a, b, c}))
