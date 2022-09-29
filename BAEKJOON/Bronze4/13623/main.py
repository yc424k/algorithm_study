arr1 = list(map(int, input().split()))

if (arr1[0] == 1 and arr1[1] == 1 and arr1[2] == 0) or (sum(arr1) == 1 and arr1[2] == 1):
    print("C")
elif (arr1[1] == 1 and arr1[2] == 1 and arr1[0] == 0) or (sum(arr1) == 1 and arr1[0] == 1):
    print("A")
elif (arr1[0] == 1 and arr1[2] == 1 and arr1[1] == 0) or (sum(arr1) == 1 and arr1[1] == 1):
    print("B")
else:
    print("*")
