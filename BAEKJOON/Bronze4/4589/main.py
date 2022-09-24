loop = int(input())

print('Gnomes:')

for i in range(loop):
    arr = list(map(int, input().split()))
    if(sorted(arr) == arr or sorted(arr, reverse=True) == arr):
        print('Ordered')
    else:
        print('Unordered')
