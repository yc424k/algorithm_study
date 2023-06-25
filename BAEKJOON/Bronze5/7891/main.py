class Number7891:
    def __init__(self, loop_count):
        self.loop_count = loop_count

    def Solve(self):
        for i in range(self.loop_count):
            x, y = map(int, input().split())
            print(x + y)


number7891 = Number7891(int(input()))
number7891.Solve()
