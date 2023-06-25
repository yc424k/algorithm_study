class Number27294:
    # 술인지 아닌지
    # 저녁인지 점심인지
    def __init__(self, time, alchol):
        self.time = time
        self.alchol = alchol

    def check_alchol(self):
        if self.alchol == 1:
            return 1
        else:
            return 2

    def check_time(self):
        # 1: 아침 2: 점심 3: 저녁
        if self.time <= 11:
            return 1
        elif self.time <= 16:
            return 2
        else:
            return 3

    def solve(self):
        if ((self.check_alchol() == 1) or (self.check_time() != 2)):
            return 280
        else:
            return 320


number27294 = Number27294(*map(int, input().split()))
print(number27294.solve())
