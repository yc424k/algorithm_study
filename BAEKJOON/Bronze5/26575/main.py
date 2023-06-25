loop_number = int(input())

for i in range(loop_number):
    dog_number, dog_food_weight, food_weight_price = map(
        float, input().split())
    print(f"${dog_number * dog_food_weight * food_weight_price:.2f}")
