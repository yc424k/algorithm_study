check = int(input())
car = list(map(int,input().split()))
count = 0

for i in car:
    if check == i:
        count += 1
print(count)