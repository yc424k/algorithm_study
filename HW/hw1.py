from math import sqrt, ceil

def twoN(n):
	return (n & (n - 1)) == 0;

print("20181513 김유청")

print("해밍코드로 변환시킬 데이터를 입력하시오.")
m = input()
print("입력된 데이터", m)
p = int(ceil(sqrt(len(m)))) + 1
#p = int(sqrt(len(m))) + 1
if len(m) > 16:
    p -= 1
haming_len = len(m) + p
m = list(map(int, m))
haming = []
save_m = m[:]
save_m.reverse()

 # 해밍코드길이 확인
 # print("data: ", len(m),"parity: ",p,"haming_len: ",haming_len)

#  해밍코드 밑 작업
for i in range(1, haming_len+1):
    if twoN(i):
        ################
        # 오류 확인 코드
        #print("2의 거듭제곱", i)
        ################
        haming.append(None)
    else:
        haming.append(m.pop(-1))

 # 패리트비트 구하기
save_one = []
for i in range(0, haming_len):
    if haming[i] is not None:
        if haming[i] == 1:
            save_one.append(i+1)

 # xor
while True:
    if len(save_one) == 1:
        break
    save_one.append(save_one.pop() ^ save_one.pop())

parity_bit = str(bin(save_one.pop()))[2:]
parity_bit = list(map(int,parity_bit))

for i in range(0, haming_len):
    if haming[i] is None:
        if len(parity_bit) == 0:
            haming[i] = 0
        else:
            haming[i] = parity_bit.pop()
    else:
        haming[i] = save_m.pop()
print("해밍코드", end='')
for i in haming:
    print(i, end='')
print()
