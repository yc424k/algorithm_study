month, day = map(int,input().split())
if (month >= 2 and day > 18) or month > 2:
    print("After")
elif month == 2 and day == 18:
    print("Special")
else:
    print("Before")