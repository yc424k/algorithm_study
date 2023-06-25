
data = ['a', 'i', 'u', 'e', 'o']

sum = 0
buffer = input()
str = input()

for i in data:
    sum += str.count(i)

print(sum)
