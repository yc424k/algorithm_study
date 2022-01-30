loop = int(input())
list1 = []

for i in range(0, loop):
    number = int(input())
    if number == 0 :
        list1.pop(len(list1)-1)
        #print(list1)
    else:
        list1.append(number)

SUM = 0
for i in list1:
    SUM += i

print(SUM)
        