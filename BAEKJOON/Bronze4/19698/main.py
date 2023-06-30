
cow_number, cage_width, cage_height, cow_area = map(int, input().split())
# print(cage_width % cow_area)
# print(cage_height % cow_area)
cage_width = cage_width - (cage_width % cow_area)
cage_height = cage_height - (cage_height % cow_area)
cow_area = cow_area ** 2

# print(cage_width, cage_height)

cow_max = cage_height * cage_width // cow_area


if cow_number < cow_max:
    print(cow_number)
else:
    print(cow_max)
