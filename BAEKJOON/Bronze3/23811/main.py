num = int(input())

for i in range(num*5):
    if i // num % 2 == 0:
            print('@@@@@'*num)
    else:
            print('@'*num)
