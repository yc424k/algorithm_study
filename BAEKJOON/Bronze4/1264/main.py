while(True):
    str = input()

    if str == '#':
        break

    str = str.lower()
    count = 0
    for i in range(len(str)):
        if str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u':
            count += 1
    print(count)
