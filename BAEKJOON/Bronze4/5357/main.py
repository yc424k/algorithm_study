loop_number = int(input())

for i in range(loop_number):
    str = input()
    save_word = ''
    for i in str:
        if i != save_word:
            print(i, end='')
            save_word = i
    print()
