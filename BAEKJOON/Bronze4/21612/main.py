P = 5 * int(input()) - 400
land = 0
if P > 100:
    land = -1
if P < 100:
    land = 1
print(P, land)