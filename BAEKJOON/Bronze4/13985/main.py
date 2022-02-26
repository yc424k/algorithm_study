from re import findall
numbers = list(map(int,findall(r'\d', input())))
print("YES") if sum(numbers[0:2]) == numbers[2] else print("NO")