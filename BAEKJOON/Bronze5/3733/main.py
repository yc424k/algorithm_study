# EOF를 체크 하는 문제
while True:
    try:
        a, b = map(int, input().split())
        print(b//(a+1))
    except EOFError:
        break
