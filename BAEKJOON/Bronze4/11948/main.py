arr1 = []
for i in range(6):
    arr1.append(int(input()))
print(sum(arr1) - min(arr1[0:4]) - min(arr1[4:6]))