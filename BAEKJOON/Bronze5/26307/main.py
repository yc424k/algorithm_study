class Number26307:
    def __init__(self, hour, min):
        self.hour = hour
        self.min = min

    def hour_cal(self):
        return (self.hour - 9) * 60

    def min_cal(self):
        return self.min

    def Solve(self):
        print(self.hour_cal() + self.min_cal())


number26307 = Number26307(*map(int, input().split()))

number26307.Solve()
