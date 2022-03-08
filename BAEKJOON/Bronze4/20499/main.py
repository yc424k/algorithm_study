import re
numbers = list(map(int,re.findall(r'\d+',input())))
print("hasu") if numbers[0] + numbers[2] < numbers[1] or numbers[1] == 0 else print("gosu")