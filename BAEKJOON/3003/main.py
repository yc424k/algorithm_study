baseArr = [1,1,2,2,2,8]

arr = list(map(int,input().split()))
for i in range(0,6):
    print(baseArr[i] - arr[i],end=' ')
    #print(baseArr[i] - arr[i],end=' ') if baseArr[i] - arr[i] > 0 else print(arr[i] - baseArr[i],end=' ')