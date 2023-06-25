class Number5341:
    def __init__(self):
        self.sum = 0

    def Pyramid(self, n):
        for i in range(1, n+1):
            self.sum += i


number5341 = Number5341()
while True:
    n = int(input())
    if n == 0:
        break
    number5341.Pyramid(n)
    print(number5341.sum)
