print("20181513 김유청")
print("비트열을 입력하시오.")
error = input()
print("입력된 비트열: ",error)

error1 = list(map(int,error))

crr = [0,0,0]
bit = 0

for i in range(0,6):
    if error1[i] == crr[0]:
        bit = 0
    else:
        bit = 1
    if bit == crr[1]:
        crr[0] = 0
    else:
        crr[0] = 1
    crr[1] = crr[2]
    crr[2] = bit
    print(i, ":", end='')
    for i in crr:
        print(i, end='')
    print()
print("FCS: ", end='')
for i in crr:
    print(i, end='')
print()