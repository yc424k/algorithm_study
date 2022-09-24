loop = int(input())

for i in range(loop):
    str = input()
    if len(str) >= 6 and len(str) <= 9:
        print("yes")
    else:
        print("no")
