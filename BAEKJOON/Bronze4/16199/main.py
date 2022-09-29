age1 = list(map(int, input().split()))
age2 = list(map(int, input().split()))

if (age2[1] >= age1[1] and age2[2] >= age1[2]) or age2[1] > age1[1]:
    print(age2[0]-age1[0])
else:
    print(age2[0]-age1[0]-1)

print(age2[0] - age1[0] + 1)
print(age2[0] - age1[0])
