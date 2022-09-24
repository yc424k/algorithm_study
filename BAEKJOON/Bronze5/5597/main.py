from curses import init_pair
from unittest.result import STDOUT_LINE


# 백준 5597번 문제
# 제목: 과제 안 내신 분..?
# 링크: https://www.acmicpc.net/problem/5597

student = [0 for i in range(30)]

for i in range(28):
    check = int(input())
    student[check-1] = 1

for i in range(30):
    if student[i] == 0:
        print(i+1)
