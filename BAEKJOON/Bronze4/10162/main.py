Timer = int(input())
# A,B,C = map(int, input().split())
A = B = C = 0
if(Timer % 10) != 0:
    print(-1)
else:
    if (Timer // 300) != 0:
        A = Timer//300
        Timer %= 300
    if (Timer // 60) != 0:
        B = Timer // 60
        Timer %= 60
    if (Timer // 10) != 0:
        C = Timer // 10
        Timer %= 10
    print(A,B,C)