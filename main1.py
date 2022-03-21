import sys


print() 
print("20201532 노현정")
print("해밍코드를 입력하시오.")
data = (input())
arr = list(map(int,data))

print("입력된 해밍코드: ",end="")
for i in arr:
    print(i, end="")
print()


p1 = data[0] + data[2] + data[4] + data[6] + data[8] + data[10]
p2 = data[1] + data[2] + data[5] + data[6] + data[9] + data[10]
p4 = data[3] + data[4] + data[5] + data[6] + data[11]
p8 = data[7] + data[8] + data[9] + data[10] + data[11]

#--------------------------- 
# for i in len(data):
#     p1 = sum(data[0::2])
#---------------------------

check1 = p1.count('1') # p1
if check1 % 2 == 0:
    p1 = 0
else:
    p1 = 1

check2 = p2.count('1') # p2
if check2 % 2 == 0:
    p2 = 0
else:
    p2 = 1

check3 = p4.count('1') # p4
if check3 % 2 == 0:
    p4 = 0
else:
    p4 = 1

check4 = p8.count('1') # p8
if check4 % 2 == 0:
    p8 = 0
else:
    p8 = 1



if p8==p4==p2==p1==0:
    print("에러없음")
else:
    parit1 = str(p8)+str(p4)+str(p2)+str(p1)
    parit2 = '0b'+ parit1
    error = int(parit2, 2)
    fix = error-1


    if arr[fix] == 0:
        arr[fix] = 1
    else:
        arr[fix] = 0


    print("{}번째 비트에 에러 발생.".format(error) + " 수정된 코드: " + arr)

print()