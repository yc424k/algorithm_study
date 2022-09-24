from curses.ascii import isupper


str = input()

for i in str:
    if i.isupper():
        print(i.lower(), end='')
    else:
        print(i.upper(), end='')
