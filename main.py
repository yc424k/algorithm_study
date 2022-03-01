#5543
import math
list1 = []
list2 = []
for i in range(3):
    list1.append(input())
    
for i in range(2):
    list2.append(input())


list1.sort()
list2.sort()
d=int(list1[0])+int(list2[0])-50
print(d)