hour, min = map(int, input().split())
cook = int(input())
min += cook
if min >= 60:
    hour += min // 60
    min %= 60
if hour >= 24 :
    hour -= 24
print(hour, min)