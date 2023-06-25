class Number26209:
    def Solve_input(self):
        self.arr = list(map(int, input().split()))

    def Solve_output(self):
        if (sum(self.arr) >= 9):
            return 'F'
        else:
            return 'S'


number26209 = Number26209()
number26209.Solve_input()
print(number26209.Solve_output())
