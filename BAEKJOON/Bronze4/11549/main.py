from imaplib import Int2AP


anw = int(input())
teaKind = list(map(int, input().split()))
count = 0
for i in teaKind:
    if anw == i:
        count += 1
print(count)