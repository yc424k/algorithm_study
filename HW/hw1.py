from math import sqrt, ceil

def twoN(n):
	return (n & (n - 1)) == 0;


m = input()
print(m)
p = int(ceil(sqrt(len(m)))) + 1
haming_len = len(m) + p
m = list(map(int, m))
haming = []
save_m = m[:]
save_m.reverse()
#  해밍코드 밑 작업
for i in range(1, haming_len+1):
    if twoN(i):
        haming.append(None)
    else:
        haming.append(m.pop(-1))


 # 패리트비트 구하기
save_one = []
for i in range(0, haming_len):
    if haming[i] is not None:
        if haming[i] == 1:
            print(i)
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

print("haming", haming)
print(parity_bit)