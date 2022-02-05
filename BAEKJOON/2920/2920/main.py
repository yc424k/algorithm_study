# https://www.acmicpc.net/problem/2920
def Check1(arr = []):
    for i in range(0,8):
        if(i+1 != arr[i]):
            return False
    return True
        
def Check2(arr = []):
    for i in range(0,8):
        if((arr[i] + i) != 8):
            return False
    return True
        

num_list = list(map(int,input().split()))
if(Check1(num_list)):
    print("ascending")
elif(Check2(num_list)):
    print("descending")
else:
    print("mixed")
