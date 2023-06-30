line_check = 0

while True:
    try:
        str = input()
        line_check += 1

    except EOFError:
        print(line_check)
        break
