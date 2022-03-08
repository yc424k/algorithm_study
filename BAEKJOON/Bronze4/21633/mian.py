sum = int(input()) * 0.01 + 25
if sum < 100:
    sum = 100
if(sum > 2000):
    sum = 2000
print(round(sum,2))