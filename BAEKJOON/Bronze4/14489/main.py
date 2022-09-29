a, b = map(int, input().split())
food = 2*int(input())

if a+b >= food:
    print(a+b-food)
else:
    print(a+b)
