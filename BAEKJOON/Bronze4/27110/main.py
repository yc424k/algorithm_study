def chicken_number(a, b):
    # a는 max_people, b는 각 치킨 인원
    return a if a < b else b


max_people = int(input())

A_chicken, B_chicken, C_chicken = map(int, input().split())

max_chicken = chicken_number(max_people, A_chicken) + chicken_number(
    max_people, B_chicken) + chicken_number(max_people, C_chicken)
print(max_chicken)
