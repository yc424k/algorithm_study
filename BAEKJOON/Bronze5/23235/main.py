

loop_number = 1

while True:
    check = list(map(int, input().split()))
    if sum(check) == 0:
        break
    print(f"Case {loop_number}: Sorting... done!")
    loop_number += 1
