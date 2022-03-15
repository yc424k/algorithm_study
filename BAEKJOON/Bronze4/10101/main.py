arr = list(map(int,open(0)))
arr.sort()
if sum(arr) != 180:
    print("Error")
elif arr[1] == 60 and arr[2] == 60:
    print("Equilateral")
elif arr[0] == arr[1] or arr[1] == arr[2]:
    print("Isosceles")
else:
    print("Scalene")
