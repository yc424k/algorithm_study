while True:
    weight = float(input())
    if weight == -1:
        break
    print("Objects weighing {:.2f} on Earth will weigh {:.2f} on the moon.".format(
        weight, weight * 0.167))
