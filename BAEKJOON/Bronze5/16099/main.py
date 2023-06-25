class Number16099:
    def __init__(self, loop_count):
        self.loop_count = loop_count

    def Solve(self):
        for i in range(self.loop_count):
            x1, x2, y1, y2 = map(int, input().split())
            if (x1*x2 > y1*y2):
                self.TelecomParisTech_Print()
            elif (x1*x2 < y1*y2):
                self.Eurecom_Print()
            else:
                self.Tie_Print()

    def Eurecom_Print(self):
        print("Eurecom")

    def TelecomParisTech_Print(self):
        print("TelecomParisTech")

    def Tie_Print(self):
        print("Tie")


number16099 = Number16099(int(input()))
number16099.Solve()
