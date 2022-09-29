num = input()
if int(num[len(num)-2:len(num)]) == 10:
    a = int(num[0:len(num)-2])
    b = 10
else:
    a = int(num[0:len(num)-1])
    b = int(num[len(num)-1])
print(a+b)
