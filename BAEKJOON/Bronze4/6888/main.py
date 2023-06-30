# 2
# 4
# 3
# 5

postion_change_year1 = int(input())
postion_change_year2 = int(input())

print('All positions change in year', postion_change_year1)
for i in range(1, postion_change_year2 - postion_change_year1 + 1):
    if i % 2 == 0 and i % 3 == 0 and i % 4 == 0 and i % 5 == 0:
        print('All positions change in year', postion_change_year1 + i)
