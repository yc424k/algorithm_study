phoneNum = list(map(int,input()))
print("YES") if sum(phoneNum[0:3]) == 15 else print("NO")