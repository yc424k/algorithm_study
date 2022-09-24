from unittest import result


x, y = map(int, input().split())

mylist1 = []
for i in range(x):
    mylist1.append(list(map(int, input().split())))

mylist2 = []
for i in range(x):
    mylist2.append(list(map(int, input().split())))

result = list(map(lambda x, y: list(
    map(lambda x, y: x + y, x, y)), mylist1, mylist2))

for i in range(x):
    for j in range(y):
        print(result[i][j], end=' ')
    print()
