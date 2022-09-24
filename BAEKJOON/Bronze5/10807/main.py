# 백준 10807번 문제
from itertools import count


loop = int(input())

num = list(map(int, input().split()))
checkNum = int(input())

count = 0

for i in range(loop):
    if num[i] == checkNum:
        count += 1
print(count)
