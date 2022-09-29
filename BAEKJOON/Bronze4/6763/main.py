speed = int(input())
maxSpeed = int(input())

if maxSpeed - speed <= 0:
    print("Congratulations, you are within the speed limit!")
elif maxSpeed - speed <= 20:
    print("You are speeding and your fine is $100.")
elif maxSpeed - speed <= 30:
    print("You are speeding and your fine is $270.")
else:
    print("You are speeding and your fine is $500.")
