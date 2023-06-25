class Number5341:
    def Pyramid(self, n):
        sum = 0
        for i in range(1, n+1):
            sum += i
        return sum


number5341 = Number5341()
while True:
    n = int(input())
    if n == 0:
        break
    print(number5341.Pyramid(n))
