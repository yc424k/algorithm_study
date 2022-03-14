H,M,S = map(int,input().split(" "))
clock = int(input())
time = clock + H*3600+M*60+S
H = time//3600%24
M = time//60%60
S = time%60
print(H,M,S)