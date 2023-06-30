def Call30(time):
    return ((time // 30) + 1) * 10


def Call60(time):
    return ((time // 60) + 1) * 15


call = int(input())

arr = list(map(int, input().split()))

Y_sum = 0
M_sum = 0

for i in arr:
    Y_sum += Call30(i)
    M_sum += Call60(i)

if Y_sum < M_sum:
    print('Y', Y_sum)
elif Y_sum > M_sum:
    print('M', M_sum)
else:
    print('Y', 'M', Y_sum)
