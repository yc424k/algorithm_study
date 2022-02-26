a,b,c = map(int, input().split())
A,B,C = map(int, input().split())
people = 0
if A-a > 0:
    people += A-a
if B-b > 0:
    people += B-b
if C-c > 0:
    people += C-c
print(people)