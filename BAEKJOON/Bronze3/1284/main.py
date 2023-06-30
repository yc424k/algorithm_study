# number 1 2cm
# number 0 4cm
# anothers number 3cm

while True:
    addr = input()
    if addr == '0':
        break
    sum = 0
    for i in addr:
        if i == '1':
            sum += 2
        elif i == '0':
            sum += 4
        else:
            sum += 3
    print(sum + len(addr) + 1)
