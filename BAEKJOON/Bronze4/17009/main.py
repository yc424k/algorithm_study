sum1 = 0
for i in range(3):
    sum1 += int(input())*(3-i)
sum2 = 0
for i in range(3):
    sum2 += int(input())*(3-i)

if sum1 > sum2:
    print("A")
elif sum1 < sum2:
    print("B")
else:
    print("T")