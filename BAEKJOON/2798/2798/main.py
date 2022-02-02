from itertools import combinations

num, max = map(int,input().split())

arr = list(map(int,input().split()))
com = list(combinations(arr,3))

# print(com)

answer = []
for a,b,c in com:
    answer.append(a+b+c)

answer.sort(reverse=True)
# print(answer)

for i in answer:
    if i <= max:
        print(i)
        break

# print(answer)