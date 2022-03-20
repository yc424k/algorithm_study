from math import sqrt

def twoN(n):
	return (n & (n - 1)) == 0;

print("20181513 김유청")
print("해밍코드로 변화시킬 데이터를 입력하시오.")
haming = input()

print("입력된 데이터:", haming)
haming = list(map(int, haming))

parity_bit_len = int(sqrt(len(haming)))+1

parity_bit = []
for i in range(0,len(haming)):
    if twoN(i+1):
        parity_bit.append(haming[i])

parity_bit_check = []
for i in range(0, parity_bit_len):
    check = 0
    for j in range((2**i)-1, len(haming), (2**i)*2):
        check += sum(haming[j:j+(2**i)])
    parity_bit_check.append(check%2)

if sum(parity_bit_check) == 0:
    print("에러없음")
else:
    parity_bit_check.reverse()
    parity_bit_str = ''.join(str(s) for s in parity_bit_check)

    parity = '0b'+parity_bit_str
    error = int(parity, 2)-1

    if haming[error] == 0:
        haming[error] = 1
    else:
        haming[error] = 0
    print(error+1 ,"번째 비트에 에러 발생. 수정된 코드: ", end='')
    for i in haming:
        print(i, end='')
    print()
